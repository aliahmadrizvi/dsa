#include<iostream>
using namespace std;
int main(){

    int user;
    cout<<"enter yout number ";
    cin>>user;

    int num = user; int ans  = 0 ; int pow =1;

    while(num>0){
        int last = num % 2;
        ans = ans + last*pow ;
        pow = pow * 10;
        num = num / 2;
        


    }
    cout<<ans;
}