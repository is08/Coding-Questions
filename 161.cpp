#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        int x[n], y[n];

        for(int i = 0; i < n; i++)
            cin >> x[i];

        for(int i = 0; i < n; i++)
            cin >> y[i];

        int time1 = 0, time2 = 0;

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                time1 = time1 + x[i];
            }
            else if(i % 2 == 1){
                time1 = time1 + y[i];
            }
        }

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                time2 = time2 + y[i];
            }
            else if(i % 2 == 1){
                time2 = time2 + x[i];
            }
        }


        if(time1 <= time2)
            cout << time1 << endl;
        else
            cout << time2 << endl;


    }

    return 0;
}
