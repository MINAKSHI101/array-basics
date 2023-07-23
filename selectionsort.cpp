#include<iostream>
using namespace std;
void Selectionsort(int arr[],int n){
    
 for(int i = 0 ;i<n-1;i++){
    int minindex = i;
    for(int j = i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex = j;
        }
        if(minindex != i){
            swap(arr[minindex],arr[i]);
    }
 }   }} 
 void printArray(int arr[],int n){
    int i;
    for(i=0; i<n;i++){
        cout<<arr[i] << " ";
         }
         cout << endl;
 }
 int main(){
    int n ;
    cin>>n;
    int arr[100];
    for(int i =0;i<n;i++){
        cin >> arr[i] ;   }
    Selectionsort(arr,n);
    printArray(arr,n);
       
    return 0;

}