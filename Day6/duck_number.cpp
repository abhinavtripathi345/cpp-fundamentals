#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the number";
    cin>>n;
    num=n;
    while(n>0){
        if(n%10==0){
            cout<<num<<" is a duck number";
        }
        n=n/10;
    }
    return 0;
}