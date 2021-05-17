//
//  main.cpp
//  IT399_hw10_Q1(2)
//
//  Created by Iliya Tynan on 9/17/18.
//  Copyright © 2018 Iliya Tynan. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

string * createWordsArray(string sentence, int& outWordsArrSize);
int main() {
   
    string sentence;
    getline(cin, sentence);
    
    int outWordsArrSize;
    string*funcPtr;
    
    funcPtr=createWordsArray(sentence, outWordsArrSize);
    //assign main pointer to return pointer and print based on arrSize returned by ref.
    for(int i=0; i <outWordsArrSize; i++){
        
        cout<<funcPtr[i]<<" ";
        
    }
    delete[] funcPtr;
    return 0;
}

string * createWordsArray(string sentence, int& outWordsArrSize){
    
    string temp;
    stringstream ss(sentence);
    
    int len=sentence.length();
    int countSp=1;/*start at 1 to account for +1 word for every space
    to determine dyn array size*/
    
    for(int i=0; i<len ; i++){
        
        if(sentence[i]==' '){
            countSp++;
        }
    }

    string* ptr=new string[countSp];
    int k=0;
    //init. new pointer to new dyn array set k counter ==0
    while(getline(ss,temp, ' ')){
        ptr[k]=temp;
        k++;
    //throw individual words into string array per stringstream params
    }
    
    outWordsArrSize = countSp;
    return ptr;
    //return pointer and arrSize to print in main via pointer
}
