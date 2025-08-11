#include<iostream>
using namespace std;

void deletion(int arr[],int &n, int t){
    for(int i=t;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
