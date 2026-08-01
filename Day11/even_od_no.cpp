#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int arr[n], even=0, odd=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Number of even numbers: "<<even<<endl;
    cout<<"Number of odd numbers: "<<odd<<endl;
    return 0;
}