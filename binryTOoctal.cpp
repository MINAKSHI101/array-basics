#include<iostream>
#include<cmath>
using namespace std;
int binaryTOoctal(long long binarynum){
    int decinum =0, octnum=0,i=0;
    while(binarynum!=0){
        decinum = decinum + (binarynum%10)*pow(2,i);
        ++i;
        binarynum = binarynum/10;
    }
    i =1;
    while(decinum !=0){
        octnum = (decinum % 8)*i;
        decinum = decinum / 8 ;
        i *= 10;
    }
    return octnum;
}
    
int main(){
    long long binarynum;
    cout<< "enter binary number:"<<endl;
    cin >> binarynum;
    cout<< binaryTOoctal(binarynum)<<"  in octal";
    return 0;
}
   