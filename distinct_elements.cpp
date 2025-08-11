#include<iostream>
#include"sorting.cpp"
using namespace std;

void dis_count(int arr[],int n){
    bubble_sort(arr,n);
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            flag++;
        }
    }
    cout<<"Number of elements: "<<flag;
}



