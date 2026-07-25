
#include <iostream>
using namespace std;
void insertElement(int arr[],int *size,int pos,int value){
    for(int i = *size ; i >pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    (*size)++;
}

int main() {
    int arr[10]={1,2,3,76,1};
    int size = 5 ;
    int value = 25;
    int pos = 4;
    cout<<"Before insertion "<<endl;
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertElement(arr,&size,pos,value);
    cout<<"After insertion "<<endl;
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}