#include<iostream>
using namespace std;
void ascdesfuc(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    
        for(int j=n/2;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout <<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ascdesfuc(arr,n);
    
}