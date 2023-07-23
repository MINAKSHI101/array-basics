#include<iostream>
using namespace std;
void decTohexadeci( int n){
    
    int i =0;
    char hexadec[100];
    while( n != 0)
    { int temp =0;
    temp = n % 16;
    if(temp <10){
        hexadec[i]= temp+48;
        i++;
    }
    else{
        hexadec[i] = temp + 55;
        i++;
    }
    n = n / 16;
     }
     for(int j=i-1;j>=0;j--){
        cout<< hexadec[j];
     }
};
int main(){
    int n;
    cin>>n;
    decTohexadeci(n);
    return 0;
}