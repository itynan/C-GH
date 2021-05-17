#include<iostream>
#include<cmath>
using namespace std;

void printTriangle(int n);
void printOppTris(int n);
void printRuler(int n);

int main(){
    
    
    printTriangle(4);
    cout<<endl<<endl<<endl;
    printOppTris(4);
    cout<<endl<<endl<<endl;
    printRuler(4);
    
    
    return 0;
}
void printRuler(int n){
    
    
    if(n==1){
        
        cout<<"-\n";
    }
    
    else{
        
        printRuler(n-1);//n=2
        for(int i=1; i<=n; i++){
            cout<<"-";
            
        }
        cout<<endl;
        printRuler(n-1);
    }
}


void printTriangle(int n){
    
    
    if(n==1){
        
        cout<<"*\n";
    }
    
    else{
        
        printTriangle(n-1);
        for(int i=1; i<=n; i++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}

void printOppTris(int n){
    
    if(n==0){
        cout<<"";
    }
    else{
        for(int i=n; i>=1; i--){
            cout<<"*";
        }
        cout<<endl;
        
        // printOppTris(n-1);
        
        printOppTris(n-1);
        for(int i=0; i<n; i++){
            cout<<"*";
            
        }
        cout<<endl;
    }
}
