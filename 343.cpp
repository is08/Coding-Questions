#include<iostream>
using namespace std;

int main(){
    int N, H, x;


        cin >> N >> H >> x;
        int sum = x, T, flag = 0;


        while(N--){
            cin >> T;
            if((x + T) >= H){
                flag = 1;
            }
        }

        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    return 0;
}
