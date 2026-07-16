#include<iostream>
using namespace std;
void SwapArray(int arr[],int size){
    for(int i = 0 ; i<size;i++){
        for(int j = i + 1;j<size;j++){
            int temp  = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int main(){
    int arr[]={1,2,3,5,6,7};
    int size = sizeof(arr)/sizeof(int);

   SwapArray(arr,size);
   for (int  i = 0; i < size; i++){
    cout<<arr[i]<<" ";
   }

   
   

    return 0 ;
}