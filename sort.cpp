#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[6]={2,7,8,5,10,1};
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

}