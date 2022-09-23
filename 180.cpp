#include<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        long long int arr[n];
        long long int sum = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum = sum + arr[i];
        }

        //in one operation, we can easily change the element to the required element that would make it divisible

        if(sum % k == 0){
            cout << "0" << endl;
        }
        else{
            cout << "1" << endl;
        }


    }

    return 0;
}
