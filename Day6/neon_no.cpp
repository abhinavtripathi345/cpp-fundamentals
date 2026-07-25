#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n==0){
        cout<<n<<" is not a neon number";
    }
    else{
        int sum=0;
        int square=n*n;
        while(square>0){
            sum=sum+square%10;
            square=square/10;
            
        }
        if(sum==n){
            cout<<n<<" is a neon number";
        }
        else{
            cout<<n<<" is not a neon number";
        }
    }
    return 0;
}