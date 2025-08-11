#include<iostream>
using namespace std;

void deletion(int arr[],int &n, int t){
    for(int i=t;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =6;
    deletion(arr,n,3);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}