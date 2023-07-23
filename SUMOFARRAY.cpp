#include<iostream>
#include<stdio.h>
using namespace std;
int getSum(int n,int arr[]){
 int sum=0;
 for(int i=0;i<n;i++){
    sum=sum+arr[i];
 }
 return sum;
};
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i =0;i<size;i++){
        cin>>num[i];
    }
    cout<< getSum(size,num);
}