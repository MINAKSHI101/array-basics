
#include<bits/stdc++.h>
using namespace std;
void DecTobinary(int num){
int arr[100];
int i =0;
while (num>0){
     arr[i]= num%2;
    num = num/2;
   i++;
}
for(int j=i-1;j>=0;j--){
        cout<<arr[j];
}
    };
int main(){
    int num;
    cin >> num;
 DecTobinary(num);
    return 0;

}
