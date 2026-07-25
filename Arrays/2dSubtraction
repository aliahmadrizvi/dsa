
#include <iostream>
using namespace std;
void Create2d(int arr[][3],int row,int column){
    for(int i =0;i<row;i++){
        for(int j=0; j<column ;j++){
            
            cin>>arr[i][j];
        }
    }
    
}

void print(int arr[][3],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int a[3][3];
    int arow = 3;
    int acol= 3;
    int b[3][3];
    int brow=3;
    int bcol= 3;
    cout<<"Matrix A "<<endl;
    Create2d(a,arow,acol);
    print(a,arow,acol);
    cout<<"Matrix B"<<endl;
    Create2d(b,brow,acol);
    print(b,brow,bcol);
    
    int c[3][3];
    int n = 3;
    
    for(int i = 0; i<n;i++){
        for(int j=0;j<n;j++){
             c[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<endl<<"ANS IS : "<<endl;
    print(c,n,n);
    
    
    
    

    return 0;
}