#include<iostream>
using namespace std;
void Createarray(int arr[],int size){
    for(int i = 0 ; i<size;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];

    }
    
}
void PrintArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    Createarray(arr,size);
    PrintArray(arr,size);

    
    return 0;
}