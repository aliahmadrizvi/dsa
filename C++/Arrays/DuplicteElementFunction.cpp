#include<iostream>
using namespace std;
int DulipcateElement(int arr[],int size){
    int ans = 0;
    for(int i = 0 ; i<size;i++){
        ans = ans ^ arr[i];

    }
    for(int i = 1;i<size;i++){
        ans = ans ^ i ;
    }
    return ans ;
}
int main(){

    int arr[] = {2,4,5,1,3,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"dulipcate number is : "<<DulipcateElement(arr,size);
    return 0;
}