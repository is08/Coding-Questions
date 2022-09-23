#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l, b;
    cin>>l>>b;

    int arr[l][b];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < b; j++){
            cin>>arr[i][j];
        }
    }

    int source;
    cin>>source;

    int per[l][b];

    for(int j = 0; j < b; j++){
        per[0][j] = 100;
    }

    for(int i = 1; i < l; i++){
        for(int j = 0; i < b; j++){
            if(arr[i][j] == 0){
                per[i][j] = per[i - 1][j];
                cout<<"lol";
                for(int k = 0; k < l; k++){
                    for(int m = 0; m < b; m++){
                        cout<<per[i][j]<<" ";
                    }
                    cout<<endl;
                }
                cout<<endl;
            }
            else if(arr[i][j] == 1){
                per[i][j] = 0;
                per[i + 1][j] = 0;
                cout<<"lol2";
                if((i + 1) < l && (j + 1) < b){
                    per[i + 1][j + 1] = per[i][j] / 2;
                    cout<<"lol3";
                }
                else if((j - 1) >= 0){
                    per[i-1][j - 1] = per[i][j] / 2;
                    cout<<"lol4";
                }
            }
        }
    }

    for(int i =0; i < b; i++){
        cout<<per[l-1][i]<<" ";
    }

    cout<<endl;

    return 0;
}
