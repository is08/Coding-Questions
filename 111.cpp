#include<iostream>
using namespace std;

int main(){
    int test, n, k, flag  = 0;
    cin >> test;

    while(test--){
        int count = 0;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                count++;
            }
        }

        if(k == 0 && count == n)
            cout<<"NO"<<endl;
        else if(k <= count)
            cout<<"NO"<<endl;
        else
            cout<<"NO"<<endl;
    }



    return 0;
}
