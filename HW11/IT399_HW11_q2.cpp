//
//  main.cpp
//  it399_hw11_q2
//
//  Created by Iliya Tynan on 9/22/18.
//  Copyright © 2018 Iliya Tynan. All rights reserved.
//

#include <iostream>
using namespace std;

bool isSorted(int arr[], int arrSize);
int sumOfSquares(int arr[], int arrSize);

int main(){

    int arr[]=//{1,3,4,5,6,7,8,9};
    {1,2,3,4,10};
    int size=(sizeof(arr)/4)-1;
    
    
    cout<< sumOfSquares(arr, size);
    cout<<endl<<"bool: "<<isSorted( arr,  size);
    
    cout<<endl;
    return 0;
}


int sumOfSquares(int arr[], int arrSize){
    
    if(arrSize==0){
        return arr[0]*arr[0];
    }
    else{
        arr[arrSize] = arr[arrSize] * arr[arrSize];
       return( arr[arrSize] + sumOfSquares(arr, arrSize-1));
    }
}

bool isSorted(int arr[], int arrSize){
    bool eval;
    
    if (arrSize==0){
        
        eval=true;
        return eval;
    }
    
    else{ if(arr[arrSize] < arr[arrSize-1])
        
        eval=false;
        isSorted(arr, arrSize-1);
        
        return eval;
    }
    
    
}
