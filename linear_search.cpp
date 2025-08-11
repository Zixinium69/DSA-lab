#include<iostream>
using namespace std;

void lin_sec(int arr[], int n, int t){
    for(int i = 0; i<n;i++){
        if(arr[i]==t){
            cout<<"Number found at: "<<i;
            break;
        }
    }
    
}

void bin_sec(int arr[], int n, int t){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>t){
            high=mid-1;
        }
        else if(arr[mid]<t){
            low=mid+1;
        }
        else if(arr[mid]==t){
            cout<<"Element found at: "<<mid;
            break;
        }
        else{
            cout<<"ELEMENT NOT FOUND!!!!";
            break;
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    lin_sec(arr,6,4);
}