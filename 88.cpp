#include<iostream>
using namespace std;

int main(){
    long long n;
    int j = 1;
    cin >> n;
    long long arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = j;
        j = j + 2;
    }

    for(int i =1; i <= n; i++){
        for(int k = 0; k < n; k++){
            if((k + 1)%i == 0){
                arr[k] = arr[k] + 1;
            }
        }
    }


    int count = 0;
    for(int i =0; i < n; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
