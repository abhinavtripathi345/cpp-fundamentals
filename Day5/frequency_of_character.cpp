#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    for(size_t i=0; i<str.length(); i++){
        int count=0;
        for(size_t j=0; j<str.length(); j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<"frequency of "<<str[i]<<" is "<<count<<"\n";
    }
    return 0;
}
