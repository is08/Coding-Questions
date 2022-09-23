#include<iostream>
using namespace std;

int main(){
    int test, n, ele;
    cin >> test;

    while(test--){
        cin >> n;
        int flag = 0, count = 0, flag2 = 0, index = 0;
        int arr[n];


        for(int i = 0; i < n; i++){
            cin >> ele;

            if(ele == 1){
                arr[index] = i;
                index++;
            }
        }

        for(int i = index - 1; i >= 1; i--){
            cout << arr[i] - arr[i - 1] << endl;
            if(arr[i] - arr[i - 1] < 6){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
