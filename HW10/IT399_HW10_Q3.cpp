//
//  main.cpp
//  IT399_HW10_Q3
//
//  Created by Iliya Tynan on 9/17/18.
//  Copyright © 2018 Iliya Tynan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void main1(void);//string meth
void main2(void);//Vec method
int main() {
    
    int meth=0;
    
    cout<<"enter 1 for non-Vec method and 2 for Vec method: ";
    cin>>meth;
    
    if(meth==1){
        main1();
    }
    
    else if(meth==2){
        main2();
    }
    
    return 0;
}


void main1(void){
    
    int count = 0;
    string input;
    string userInts;
    cout << "Please enter a sequence of positive integers, each in a seperate line. \n End your input by typing -1" << endl;
    do {
        //user input
        cin >> input;
        if (input != "-1")
        {
            if (count == 0)
            {
                userInts = input;
            }
            else
            {
                userInts = userInts + " " + input;
            }//separate userInts with " "
        }
        count++;
        
    } while (input != "-1");
    //while user inp is not -1
    stringstream ss(userInts);
    string *newArr = new string[count];
    int j = 0;
    string temp;
    
    while (getline(ss, temp, ' '))
    {
        
        newArr[j] = temp;
        j++;
    }
    
    
    string search;
    cout << "Please enter a number you want to search." << endl;
    cin >> search;
    
    int countI=0;
    
    for (int i = 0; i < count; i++)
    {
        if (search == newArr[i])
        {
            countI++;
        }
    }
    
    int k=0;
    for (int i = 0; i < count; i++)
    {
        if (search == newArr[i])
        {
            cout<<i;
            k++;
            
            if(k<countI)
                cout<<", ";
            else if(k==countI){
                cout<<".";
            }
            
            
        }
    }
    delete[] newArr;
}



void main2(void){
    
    int inp=0, findInp=0;
    vector<int>v;
    
    cout<<"Please enter a seq of pos ints, in separate lines: ";
    
    while(inp!=-1){
        //while input is not -1 keep entering values into vector
        
        cin>>inp;
        v.push_back(inp);
        
    }
    
    int len=v.size();
    
    cout<<"enter number to find:";
    cin>>findInp;
    
    int countInps=0;
    
    cout<<endl<<findInp<<" shows in lines ";
    for(int i=0; i<len; i++){
        if(v[i]==findInp){
            countInps++;
            //count number of times val exists in vector
        }
    }
    int countI=0;
    
    for(int i=0; i<len; i++){
        
        if(v[i]==findInp){
            cout<<i;
            countI++;
            /*countI allows for differentiation between all nums but the last
             in order to allow for a period at the end of the final num output*/
            if(countI<countInps){
                cout<<", ";
            }
            else if(countI==countInps){
                cout<<".";
            }
        }
    }
}


