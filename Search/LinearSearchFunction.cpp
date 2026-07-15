#include<iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    int found = 0;
   
    for(int i = 0 ; i<size; i++){
        if(key == arr[i]){
            found = 1;
            
        }

        
    }
    return found;
}
int main(){
    int arr[100]={1,2,99,45,3,23,4};
    int size = 7;
    int key = 44;

    int ans = LinearSearch(arr,size,key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}