#include<iostream>
using namespace std;

void deletion(int arr[],int &n, int t, int o){
    n++;
    for(int i=n-1;i>t;i--){
        arr[i]=arr[i-1];
    }
    arr[t]=o;
    
    
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =6;
    deletion(arr,n,3,99);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}