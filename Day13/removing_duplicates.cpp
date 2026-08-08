#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter thr value of n";
    cin>>n;
    int* arr = new int[n];
    cout<<"enter the element of the array";
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"array after removing duplicates is";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}