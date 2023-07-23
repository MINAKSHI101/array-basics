#include<iostream>
using namespace std;
void Bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
         bool swapped = true;
        for(int j = 0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        
    }
    if(swapped == false){
        break;}
}
for(int i =0;i<n;i++){
    cout<< arr[i]<<" ";
}
cout << endl;
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    bool swapped = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubblesort(arr,n);
}