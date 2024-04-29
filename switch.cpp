#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"input a character"<<endl;
    cin>>button;
  
    switch(button){
        case 'a':
        cout<<"Namaste"<<endl;
        break;
        case 'b':
        cout<<"Hello"<<endl;
        break;
        case 'c':
        cout<<"Hola"<<endl;
        break;
        case 'd':
        cout<<"Ciao"<<endl;
        break;
        case 'e':
        cout<<"Salute"<<endl;
        break;
        default:
        cout<<"I am still learning"<<endl;
        break;
    }    
    return 0;
}