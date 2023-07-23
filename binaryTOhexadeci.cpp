#include<iostream>
#include<math.h>
using namespace std;

int BinaryTOhexadeci(long long binarynum){
    int deci =0 , i=0 , rem;
    char hexadeci[100];
    while(binarynum != 0){
        deci = deci + (binarynum%10)*pow(2,i);
        i++;
        binarynum = binarynum / 10;
    }
    i =1;
    while(deci != 0){
        rem = deci%16;}

    if(rem < 10){
        hexadeci[i] = rem+48;
        i++;
     }
     else{
        hexadeci[i] = rem + 55;
        i++;
     }
     deci = deci / 16;
     int j = i-1;
    for(j=i-1;j>=0;j--){
        cout<< hexadeci[j];
    }
    return hexadeci[j];
}
int main(){
    long long binarynum;
    cout << "enter the binary num :"<<endl;
    cin>> binarynum;
    cout<< BinaryTOhexadeci(binarynum);
    return 0;
}