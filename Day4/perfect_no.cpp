#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;

        }

    }
    if(sum==n){
        cout<<n<<"is a perfect no.";

    }
    else{
        cout<<n<<"is not a perfect no.";

    }
    return 0;
    

}