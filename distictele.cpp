#include<iostream>
using namespace std;
int main(){
    int n,a[1000],b[1000];
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        
        if(a[i]!=-1){
            for(int j=i+1 ; j<n ; j++){
                if(a[i]==a[j]){
                    
                    a[j]=-1;
                }
            }}
            b[i]=a[i];
           
        
    }
    for(int i=0 ; i<n ; i++){
        if(b[i]!=-1){
            count++;}}
        cout<<count++;
        
        
    
    
    return 0;

}