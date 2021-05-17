//
//  main.cpp
//  it399_hw11_q3
//
//  Created by Iliya Tynan on 9/23/18.
//  Copyright © 2018 Iliya Tynan. All rights reserved.
//

#include <iostream>
using namespace std;

int minInArray1(int arr[], int arrSize);



int main() {
    int arr[] = {9, -2, 14, 12, -199,3, 6, 2, 1, -9,-11,-13,-99,-99999};
    int res1; //res2, res3, res4;
    int size=sizeof(arr)/4;
    
    res1 = minInArray1(arr, size);
    
    cout<<res1<<endl;
   // res2 = minInArray2(arr, 0, 9);
   // cout<<res1<<” “<<res2<<endl; //should both be -9
  //  res3 = minInArray2(arr, 2, 5);
   // res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
 //   cout<<res3<<” “<<res4<<endl; //should both be 3
    return 0;
}

int minInArray1(int arr[], int arrSize){
    
    int min=0;
    
    if(arrSize==0){
        return arr[0];
    }
    
    else {
        min=minInArray1(arr, arrSize-1);
        
        if(min<arr[arrSize-1])
            return min;
        else{return arr[arrSize-1];}
    }
    
    
}
