
#include <iostream>
using namespace std;
int UniqueNumber(int arr[],int size){
    int ans=0;
    for(int i =0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans ;
}
int main() {
    
    int arr[]={2,2 ,3,4,4};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Unique number in arrays is "<<UniqueNumber(arr,size);
    
    

    return 0;
}