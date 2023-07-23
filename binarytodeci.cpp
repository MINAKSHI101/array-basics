#include<iostream>
#include<math.h>
using namespace std;
void BinrytoDeci(int num){
    int rem,temp,deci = 0,i=0;
    temp = num;
    while(temp>0){
        rem = temp%10;
        deci = deci + rem * pow(2,i);
        i++;
        temp = temp/10;
    }
    cout<< deci;
}
int main(){
    int num;
    cin>> num;
    BinrytoDeci(num);
}