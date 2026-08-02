#include<iostream>
using namespace std;
void Delete(int arr{},int *size,int pos){

    for(int i =pos;i<(*size)-1;i++){
        arr[i]=arr[i+1];
    }
    (*size)--;
}
int main(){
    int arr[10]={10,20,30,40,50};
    int size=5;
    int pos=2;
    delete(arr,&size,pos)
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}