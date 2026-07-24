#include<iostream>
#include<string>
using namespace std;
int main(){
    string str, ans=" ";
    cout<<"enter the string";
    getline(cin,str);
    for(size_t i=0; i<str.length(); i++){
        if(str[i]!=' '){
            ans = ans +str[i];
        }
    }
    cout<<"string after removing gap is"<<"\n"<<ans;
    return 0;
}