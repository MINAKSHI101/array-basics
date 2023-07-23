#include<iostream>
#include<stdio.h>
using namespace std;
int getMax(int n , int arr[]){
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        //if(arr[i]>max){
        //    max = arr[i];
        // another way for doing comparision between minum value that is store in maxi and in array by initializing loop
        // they are pre defined fuction so we can write them like this also -
         maxi = max(maxi,arr[i]);
        }

    
    return maxi;

};
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    cout<< getMax(size,num);

}