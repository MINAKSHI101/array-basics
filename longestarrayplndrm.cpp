#include<iostream>
using namespace std;
int pallindrome_array(int num){
   
        int ans=0;
        int temp=num;
        while(temp>0){
            int rem = temp%10;
             ans = ans*10+rem;
             temp=temp/10;
        }
        if(ans == num)
            return 1;
        
        return 0;
    }
int main(){
    int a[100];
    int n= sizeof a/sizeof a[0];
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        if(pallindrome_array(a[i])&& a[i]>res){
            res = a[i];
        }
    }
    if(res== INT_MIN)
{       res = -1;
}    
cout << res;
    return 0;
}