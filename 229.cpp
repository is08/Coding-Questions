#include<iostream>
using namespace std;

int main(){
    int n, q;
    cin >> n;

    int arr[n], temp[n];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cin >> q;
    int query[q][3];

    for(int i = 1; i <= q; i++){
        cin >> query[i][1] >> query[i][2] >> query[i][3];
    }

    for(int i = 1; i <= q; i++){

        for(int i = 1; i <= n; i++){
            temp[i] = arr[i];
        }

        if(i % 2 == 1){
            for(int j = query[i][2] + 1; j <= query[i][3]; j++){
                temp[j] = 1 - max(temp[j], temp[j - 1]);
            }
            cout << temp[query[i][3]] << " ";
        }
        else if (i % 2 == 0){
            for(int j = query[i][2] + 1; j <= query[i][3]; j++){
                temp[j] = 1 - min(temp[j], temp[j - 1]);
            }
            cout << temp[query[i][3]] << " ";
        }
    }

    return 0;
}
