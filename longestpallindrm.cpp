#include<iostream>
using namespace std;
int ispallindrome(int len){
   int rev=0,temp=len;
   while(temp>0){
    int rem=temp%10;
    rev = rev*10+rem;
    temp = temp/10;
   }
   if(len==rev){
    return 1;
   }
    return 0;

}
int main(){
    int arr[100];
    int len = sizeof(arr)/sizeof(arr[0]);
    int res = INT_MIN;
    for(int i=0 ; i<len ; i++ ){
        cin >> arr[i];
    }
    for(int i=0;i<len;i++){
        if(ispallindrome(arr[i]) &&res<arr[i]){
            res = arr[i];
        }
    }
    if(res==INT_MIN){
        res = -1;
    }
    cout << res;

}