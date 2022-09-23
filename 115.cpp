#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, flag = 0, i = 0, d = 0;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        if(arr[0] != 1)
            flag = 1;
        if(n%2 == 0)
            flag = 1;

        for(int i = 1; i < n / 2; i++){
            if(arr[i] != arr[i - 1] + 1){
                i = 1;
                break;
            }
        }

        for(int i = n/2 + 1; i < n; i++){
            if(arr[i] != arr[i - 1] - 1){
                d = 1;
                break;
            }
        }

        if(i == 1 || d == 1 || flag == 1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }


    }

    return 0;
}
