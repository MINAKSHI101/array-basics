#include<iostream>

using namespace std;
int getMin(int n, int arr[]){
    int min = __INT_MAX__;
    for(int i =0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
       
    return min;
}
int getMax(int n, int arr[]){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
      if(max<arr[i]){
        max = arr[i];
      }
    }
        

    
    return max;
};
int main()
{
int size;
cin>>size;
int num[100];
for(int i =0;i<size;i++){
    cin>>num[i];
}
 cout << getMin(size,num)<<endl;
 cout<< getMax(size,num);
}
   