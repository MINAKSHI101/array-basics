#include<iostream>
#include<stdio.h>
using namespace std;
 bool Unique(int arr[],int len){
           for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                if(arr[i]==arr[j]){
                return 0; 
              
                
            }
            }
           }
           return 1;
          
}
int CountUnique(int arr[],int len){
    int ans;
    if(Unique(arr,len) == 1){
        for(int i=0;i<len;i++){
            ans = arr[i];

        }
        
    }
    return ans;
};

   
int main(){
    int m;
    cin>>m;
    int len = 2*m+1;
    int arr[len];
    bool unique = 1;
    for(int i=0;i<len;i++){
        cin>>arr[i];

    }
     cout<<Unique(arr,len);
     cout<<CountUnique(arr,len);
}