#include<iostream>
using namespace std;
int main(){
    int arr[100],b[100];
    int count = 1;
    
    int n= sizeof arr/sizeof arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=i+1;
        if(arr[i]!=arr[j]){
            j++;
        }
        else{
            count++;
        }
    }
    if(count !=1){
        
    }