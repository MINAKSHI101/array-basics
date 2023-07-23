#include<iostream>
#include<stdio.h>
using namespace std;
void AlternateSwap(int arr[],int n){
    
    for(int i=0;i<n;i+2){
        if(arr[i+1]<n){
            swap(arr[i],arr[i+1]);
          
        }
    }

}
void AfterSwap(int arr[],int n){
    for(int i=0;i<n;i++){
     cout<< arr[i] <<" ";
    }
    cout<<endl;

    
    
};
int main(){
    int n;
     
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    AlternateSwap(arr,n);
     AfterSwap(arr,n);
}