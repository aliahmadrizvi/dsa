
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return 1;
        }
        if (arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }

    return 0;
}

int main() {
    
    int arr[]={1,2,3,4,5,10,17,34};
    int size= sizeof(arr)/sizeof(int);
   int  target=65;
  int ans = BinarySearch(arr,size,target);
  
  if(ans!=1){
      cout<<"not found the num :"<<target<<endl;
      
      
  }
  else{
      cout<<"found the num :"<<target;
  }
    return 0;
}