#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    for(size_t i=str.length();i>0;i--){
        cout<<str[i-1];
    }
    cout<<endl;
    return 0;

}