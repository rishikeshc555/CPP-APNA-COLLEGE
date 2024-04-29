#include<iostream>
using namespace std;
int main(){
    int i=2;
    int j=3;
    int k;
      //2 //3 //2   //4    //3   //5
    k= i + j + i++ + ++i + j++ + ++j;
    cout<<k<<endl;
    return 0;
}