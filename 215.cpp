#include<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        char arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int index = n - 1;

        for(int i = 0; i < k; i++){
            cout << "index is " << index << endl;
            if(arr[index] == 'H'){
                for(int j = 0; j < index; j++){
                    if(arr[j] == 'H'){
                        arr[j] = 'T';
                    }
                    else if(arr[j] == 'T'){
                        arr[j] = 'H';
                    }
                }
            }
            index--;

        }

        int count = 0;

        for(int i = 0; i < index; i++){
            if(arr[i] == 'H'){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
