#include<iostream>
using namespace std;
void insertionsort(int n, int arr[]){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            arr[j+1] = temp;
        }
    }
}
void ascdingANDdecending(int s,int e,int arr[],int n){
    int mid = s+e/2;
    while(s>=e) {
        swap (arr[mid+1]= arr[e]);
        (mid+1)++;
        e--;
    }
    for(int i = 0;i<n;i++){
        cout << arr[i];
    }
    }
int main(){
    int n,s = 0,e=n-1;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(n,arr);
    ascdingANDdecending(s,e,arr,n);
}