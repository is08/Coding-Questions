#include<iostream>
using namespace std;


int* processArray(int* arr, int index){
    for(int i = 0; i < index; i++){
        if(arr[i] % 11 == 0 && arr[i] % 5 == 0){
            arr[i] = -3;
        }
        else if(arr[i] % 11 == 0){
            arr[i] = -2;
        }
        else if(arr[i] % 5 == 0){
            arr[i] = -1;
        }
    }

    return arr;

}


int main(){
    int arr[30];
    int index = 0, input;

    while(1){
        cin >> input;
        if(input > 0){
            arr[index] = input;
            index++;
        }
        else{
            break;
        }
    }

    processArray(arr, index);

    for(int i = 0; i < index; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
