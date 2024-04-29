#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;

    if(a%2==0 && a%3==0){
        cout<<"The number is divisible by both 2 and 3"<<endl;
    }
    else if(a%2==0){
        cout<<"The number is divisible by 2 only"<<endl;
    }
    else if(a%3==0){
        cout<<"The number is divisibe by 3 only"<<endl;
    }
    else{
        cout<<"Divisible by none"<<endl;
    }
    return 0;
}