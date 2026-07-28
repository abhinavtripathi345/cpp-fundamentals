#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int count=1;
    for(size_t i=0; i<str.length(); i++){
        if(str[i]==str[i+1]){
            count++;
            
        }
        else{
            cout<<str[i]<<count;
            count=1;
        }
        }
    cout<<endl;
    return 0;
}

