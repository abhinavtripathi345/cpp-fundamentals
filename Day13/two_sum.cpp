#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int* arr= new int[n];
    cout<<"enter the element of the array";
    for(int i= 0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"enter the target no.";
    int target;
    cin>>target;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"the pair is "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}