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
        count = 1;
        if(a[i]!=-1){
            for(int j=i+1 ; j<n ; j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
            }
            b[i]=count;
        }
    }
    for(int i=0 ; i<n ; i++){
    if(a[i]!=-1){
        if(b[i]>1){
            cout<<a[i];
        }
        cout<<endl;
    }
    }
    return 0;

}