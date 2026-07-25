#include<iostream>
using namespace std;
int main(){
    int n,sum_odd=0,sum_even=0,position=1;  
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        if(position%2==0){
            sum_even=sum_even+n%10;
        }
        else{
            sum_odd=sum_odd+n%10;
        }
        n=n/10;
        position++;
    }
    cout<<"sum of odd position digits is "<<sum_odd<<endl;
    cout<<"sum of even position digits is "<<sum_even<<endl;
    return 0;
    
}