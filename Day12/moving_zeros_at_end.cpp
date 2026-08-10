#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){

        if(arr[i] == 0){

            int temp = arr[i];

            for(int j = i; j < n - 1; j++){
                arr[j] = arr[j + 1];
            }

            arr[n - 1] = temp;

            i--;      
            n--;      
        }
    }

    cout << "Array after moving zeros to end: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}