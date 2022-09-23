#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int freq[n] = {0}, arr[n], cpy[n], flag = 0, flag2 = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            cpy[i] = arr[i];
            freq[arr[i] - 1]++;
        }

        sort(cpy, cpy + n);

        for(int i = 0; i < n; i++){
            if(freq[i] == 0){
                flag = 1;
                break;
            }
            if(arr[i] == cpy[i]){
                flag2++;
            }
        }

        if(flag == 1 || flag2 == n){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }

    return 0;
}

