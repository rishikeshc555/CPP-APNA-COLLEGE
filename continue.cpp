#include<iostream>
using namespace std;
int main(){
    int pocketmoney=3000;
    
    for(int date=1;date<=31;date++){
        if(date%2==0){
         continue;
        }
        cout<<"go for shopping\n";
    }
}