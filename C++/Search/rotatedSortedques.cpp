#include<iostream>
using namespace std;


int getPivot(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end =mid;
        }
        mid = start + (end-start)/2;
    }
    return start;

}

int BinarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end = mid -1;
        }
       mid = start + (end-start)/2;
    }
    return -1;
}
int findPosition(int arr[],int size,int k){
    int Pivot = getPivot(arr,size);
    if(k>=arr[Pivot] && k<=arr[size-1]){
        return BinarySearch(arr,Pivot,size-1,k);

    }
    else{
        return BinarySearch(arr,0,Pivot-1,k);
    }
}

int main(){
    int arr[] = {7,9,1,2,3};
    int size = sizeof(arr)/sizeof(int);

    int target = 2;

    cout<<findPosition(arr,size,target);

    
}