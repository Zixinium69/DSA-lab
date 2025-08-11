#include<iostream>
using namespace std;

void invert_count(int arr[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag++;
        }
    }
    cout<<"Number of inversions: "<<flag;
}

 
 
