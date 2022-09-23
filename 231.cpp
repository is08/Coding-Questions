#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int arr, int odd = 0, even = 0;

        for(int i = 1; i <= n; i++){
            cin >> arr;

            if(arr % 2 == 0){
                even++;
            }
            else if(arr % 2 == 1){
                odd++;
            }

        }

        //cout << "even is " << even << " odd is " << odd << endl;
        cout << min(even, odd) << endl;


    }

    return 0;
}

