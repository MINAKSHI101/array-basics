#include<iostream>
#include<math.h>
using namespace std;
int OctTObinary(int octnum){
    int decinum = 0 ,i=0;
    long long binarynum = 0;
    while(octnum != 0){
        decinum = decinum + (octnum%10)*pow(8,i);
        i++;
        octnum = octnum/10;
    }
    i=1;
    while(decinum != 0){
        binarynum = binarynum + (decinum%2)*i;
        decinum = decinum / 2;
        i = i*10;
}
return binarynum;
    }
    int main(){
        int octnum;
        cout << "enter the octal num :"<<endl;
        cin>> octnum;
        cout << OctTObinary(octnum)<<"  in binary";
        return 0;
    }