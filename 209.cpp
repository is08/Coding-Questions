#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r[n];
    int freq[n + 1] = {0};

    for(int i = 0; i < n; i++){
        cin >> r[i];
        freq[r[i]] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(freq[i] == 0){
            cout << i << " ";
        }
    }

    //cout << endl;


    return 0;
}
