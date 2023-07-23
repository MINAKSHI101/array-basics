#include<iostream>
using namespace std;
int pallindrome_array(int a[],int n){
    for(int i=0;i<n;i++){
        int ans=0;
        int temp=a[i];
        while(temp>0){
            int rem = temp%10;
             ans = ans*10+rem;
             temp=temp/10;
        }
    if(ans!=a[i]){
        return 0;
    }
    }
    return 1;

}
int main(){
    int a[100];
    int n= sizeof a/sizeof a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << pallindrome_array(a,n);
    return 0;
}