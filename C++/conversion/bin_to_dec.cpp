#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int user;
    cout<<"Enter the number : ";
    cin>>user;

    int i = 0 ; int ans= 0 ;
    while(user!=0){
        int digit = user % 10;
        if(digit==1){
            ans+=pow(2,i); 
            

        }
        user/=10;
        i++;
    }
    cout<<ans;


    return 0 ;
}
