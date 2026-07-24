#include<iostream>
#include<string>
using namespace std;
int main(){
    int uppercase=0, lowercase=0, digit=0, special=0;
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    for(size_t i=0; i<str.length(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            uppercase++;

        }
        else if(str[i]>='a' && str[i]<='z'){
            lowercase++;
            }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;

        }
        else{
            special++;

        }
    }
    cout<<"these are the count"<<"\n"<<"uppercase:"<<uppercase<<"\n"<<"lowercase:"<<lowercase<<"\n"<<"digit:"<<digit<<"\n"<<"special:"<<special;
    return 0;
}