#include<iostream>
using namespace std;
int main(){
    int a = 89 , b = 60 , c = 445 ;

    if(a>b && a>c){
        printf("%d is the largest number.",a);
    }
    if(b>a && b>c){
        printf("%d is the largest number.",b);
    }
    if(c>a && c>b){
        printf("%d is the largest number.", c);
    }
    return 0;
}