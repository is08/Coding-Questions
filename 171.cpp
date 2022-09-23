#include<iostream>
using namespace std;

int main(){
    int n, r, index = 0;
    cin >> n >> r;
    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = 1;
    }

    while(arr[0]){
        int temp = r;

        while(temp){
            cout << "the number os rounds left is " << temp << endl;
            cout << "the current position of baton is " << index << endl;
            if(index >= n){
                index = 0;
            }
            if(arr[index] == 1){
                temp--;
                ++index;
            }
            else{
                ++index;
            }
        }

        arr[index] = 0;

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

        cout << endl;
    }



    return 0;
}
