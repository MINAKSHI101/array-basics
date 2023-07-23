#include <iostream>
#include<stdio.h>

using namespace std;
int uniquenum(int arr[],int len){
    int ans=0;
    for(int i=0;i<len;i++){
         ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<< uniquenum(arr,len);
}