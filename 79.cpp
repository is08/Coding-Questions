#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, k, temp = 0;
        cin >> n >> k;

        while(n--){
            int mins, cost;
            cin >> mins >>cost;

            if(k > 0){
                if(mins - k < 0){
                    k = k - mins;
                    mins = 0;
                }
                if(mins - k >= 0){
                    mins = mins - k;
                    k = 0;
                }
            }


           temp = temp + mins * cost;

        }
         cout<<temp<<endl;
    }

    return 0;
}
