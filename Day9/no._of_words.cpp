#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:";
    getline(cin,str);
    int count=0;
    for(size_t i=0; i<str.length(); i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"no. of words in the string are:"<<count+1;
    return 0;
  
}