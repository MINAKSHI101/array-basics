#include<iostream>
#include<stdio.h>
using namespace std;
bool Search(int n,int arr[],int key){
    for(int i=0;i<n;i++){
        if (key == arr[i]){
            return 1;
        }
    }
    return 0;
};
int main(){
    int size;
    cin>>size;
    int key;
    cin>>key;
    int arr[10];
    int i;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool found=Search(10,arr,key);
    
        if (found){
         cout << "is present";
        }
        else{
            cout<<"not present";
        }
    }


