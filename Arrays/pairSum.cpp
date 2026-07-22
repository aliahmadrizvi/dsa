
#include <iostream>
using namespace std;
void pairSum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<target<<endl;
            }
            
        }
    }
}

int main() {
    
   int arr[]={1,2,3,3,4,7};
    int size=sizeof(arr)/sizeof(int);
    
    int target=6;
    
    pairSum(arr,size,target);

    return 0;
}