#include<iostream>
using namespace std;
int main(){
    int n, rev=0, num=0;
    cout<<"enter the number";
    cin>> n;
    num=n;
    while(num!=0){
        int digit=num%10;
        rev=rev*10 + digit;
        num = num/10;

    }
    if(n==rev){
        cout<<"number is palindrom";
    }
    else{
        cout<<"number is not palindrome";

    }
    return 0;

}