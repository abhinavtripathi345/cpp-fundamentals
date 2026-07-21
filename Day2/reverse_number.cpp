#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the year"<< endl;
    cin >>n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    cout <<"Reversed number is"<<rev<<endl;
    return 0;
    
}