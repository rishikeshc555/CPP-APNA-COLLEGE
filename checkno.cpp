#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input the number: ";
    cin>>n;

    if(n>10){
        cout<<"The number is more than 10"<<endl;
    }
    else if(n<10){
        cout<<"The number is less than 10"<<endl;
    }
    else{
        cout<<"Equal to 10"<<endl;
    }
    return 0;
}