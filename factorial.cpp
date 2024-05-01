#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any positive integer:";
    cin>>n;
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    cout<<"The factorial of the given number is:"<<factorial;
    return 0;
}