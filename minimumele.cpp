#include<iostream>
#include<stdio.h>
using namespace std;
int getMin(int n, int arr[]){
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }

    }
    return min;
};
int main(){
int size;
cin>>size;
int num[100];
for(int i =0;i<size;i++){
    cin>>num[i];
}
cout<< getMin(size,num);
}
   