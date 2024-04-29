#include<iostream>
#include<string>
using namespace std;

int main(){
    string A;
    string B;
    cin>>A>>B;
    cout<<A+B<<endl;
    
    int P=A.size();
    int Q=B.size();
    cout<<P<<" "<<Q<<endl;

    char temp = A[0];
    A[0]=B[0];
    B[0]= temp;
    cout<<A<<" "<<B<<endl;

    return 0;
}