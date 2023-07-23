#include<iostream>
#include<stdio.h>
using namespace std;

   
    long long int Multiplesum(int x,int p,int q)
    { long long result;
        
        long long int a = x/p;
        long long int b = x/q;

        
           long long int m = a/2[2* p+(a-1)*p];
           long long int n = b/2[2 * q+(b-1)*q];
            result = m+n;
          
       
    return result;
    };

int main(){
    int w,u,v;
    cin>>w>>u>>v;
   cout<< Multiplesum( w,u,v);
}