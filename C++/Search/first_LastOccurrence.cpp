#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid= start +(end-start)/2;
    int ans =-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end= mid-1;
        }
        mid= start + (end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid= start +(end-start)/2;
    int ans =-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;

        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end= mid-1;
        }
        mid= start + (end-start)/2;
    }
    return ans;
}

int main(){
    int even[]={1,2,2,2,3,5};
    int odd[]={1,2,2,3,3};

    cout<<"First occurrence"<<" : "<<firstocc(even,6,2);
    cout<<endl;
    cout<<"Last Occurrence : "<<lastocc(odd,5,2);
}