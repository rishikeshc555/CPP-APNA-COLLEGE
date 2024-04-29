#include<iostream>
using namespace std;

int main(){
     int saving;
     cin>>saving;

     if (saving>7000){
        if(saving>12000){
            cout<<"ROAD TRIP WITH SHWETA\n";
        }
        else{
        cout<<"SHOPING WITH SHWETA";
     }
}
     else if(saving>3000){
        cout<<"SHOPPING WITH RISHU";
     }
     else if(saving<3000){
        cout<<"ONLINE SHOPPING";
     }
     return 0;

}