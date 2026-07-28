#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n for n x n matrix";
    cin>>n;
    int arr[n][n];
    cout<<"enter the elements of array";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
            
        }
    }
    cout<<"the original array is"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the rotated array is"<<endl;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}