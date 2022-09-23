#include<iostream>
using namespace std;

int main(){

    int size1;
    cout << "Input the size of the array: ";
    cin >> size1;
    int arr[size1];

    for(int i = 0; i < size1; i++)
    {
        cin >> arr[i];
    }

    cout << arr[0] << " ";

    for(int i = 0; i < size1 - 1; i++){
        if(arr[i] % 7 == 0){
            cout << arr[i + 1] << " ";
        }
    }

    return 0;
}
