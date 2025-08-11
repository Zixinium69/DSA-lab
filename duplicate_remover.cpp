#include<iostream>
#include "delete.cpp"
#include "sorting.cpp"
using namespace std;

void dup_del(int arr[],int &n){
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            deletion(arr,n,i+1);
        }
    }

}
int main(){
    int arr[8]={7,3,4,6,7,4,1,1};
    int n=8;
    dup_del(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

