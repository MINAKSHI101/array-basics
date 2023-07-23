#include<bits/stdc++.h>
using namespace std;
void DecTooctal(int num){
int arr[100];
int i =0;
while (num>0){
     arr[i]= num%8;
    num = num/8;
   i++;
}
for(int j=i-1;j>=0;j--){
        cout<<arr[j];
}
    };
int main(){
    int num;
    cin >> num;
 DecTooctal(num);
    return 0;

}
