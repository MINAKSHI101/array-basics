#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map <int , int>mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    for(auto it=mp.begin();it!=mp.end();it++)
    cout<first<<"occurs"<second<<"times /n";
    
    
    return 0;
}
