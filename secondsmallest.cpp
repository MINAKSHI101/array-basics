
#include <bits/stdc++.h>

using namespace std;
int Sndsmallest(int n,int ans[]){
    int res;
    int i =0;
   res= ans[i+1];
     return res;
}
 int main(){
        int n,arr[100],ans[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

         sort(arr,arr+n);
    
       for(int i=0;i<n;i++){
        ans[i]= arr[i];
    }
    
  cout<< Sndsmallest(n,arr);

 }
   