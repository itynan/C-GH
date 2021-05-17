//  main.cpp
//  HW9_Q4
//  Created by Iliya Tynan on 9/13/18.
//  Copyright © 2018 Iliya Tynan. All rights reserved.

#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);
int main() {
    
    int arr[]={2,4,6,8,3,5,7,9};
    //{5, 11, 7, 4, 6, 2};
    int arrSize=sizeof(arr)/4;
    
    oddsKeepEvensFlip(arr,arrSize);
    
    return 0;
}
void oddsKeepEvensFlip(int arr[], int arrSize){
    
    int * newArr;
    newArr=new int[arrSize]();
    //create new dyn array to manip elements via pointers
    
    int j=0;
    int size=arrSize-1;
    
    for(int i=0; i <arrSize; i++){
        
        if (arr[i]%2==1){//count odds and assign them to begining of array
            newArr[j]=arr[i];
            
            j++;
        }
        else if(arr[i]%2==0){
            newArr[size]=arr[i];
            //count from back of array
            size--;
        }
    }
        for(int i=0; i <arrSize; i++){
            cout<<newArr[i]<<" ";
        }
    
    delete[] newArr;
    
    
    }
    
    
        
    
    


