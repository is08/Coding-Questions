#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int arr[n][n];

        int c=1,k=0;
        while(c <= n*n){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(i + j == k){
                        arr[i][j] = c;
                        c++;
                    }
                }
            }
            k++;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
