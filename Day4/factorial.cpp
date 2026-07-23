#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the number of which factorial you want";
    cin>>n;
    if(n==0){
        fact=1;
    }
    else{
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
}

    cout<<"the factorial is"<<fact;

    return 0;

