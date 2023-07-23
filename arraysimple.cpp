#include<iostream>
#include<stdio.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout << arr[i]<<" ";
    }
}
int main(){
  
     
     int fourth[10]={0};
    int n=10;
    fourth[6]={7};
     printArray(fourth, 10);
     int fourthsize = sizeof(fourth)/sizeof(int);
     cout<<"     "<<fourthsize;
}