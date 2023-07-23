#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int visited[n];
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(visited[i]!=1){
            int count = 1;
            for(int j = i+1;j<n;j++){
                if(arr[i]== arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        }
    }
}