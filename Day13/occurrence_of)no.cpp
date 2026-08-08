#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int* arr = new int[n];
    cout<<"enter the element of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
        }
        cout<<"element "<<arr[i]<<" occurrence= "<<count<<endl;
    }
    return 0;
}
