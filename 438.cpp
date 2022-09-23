#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int R, G, B, M;
        cin >> R >> G >> B >> M;

        long long int r, g, b, maxR = -10e9, maxG = -10e9, maxB = -10e9;

        for(int i = 0; i < R; i++){
            cin >> r;
            maxR = max(r, maxR);
        }

        for(int i = 0; i < G; i++){
            cin >> g;
            maxG = max(g, maxG);
        }

        for(int i = 0; i < B; i++){
            cin >> b;
            maxB = max(b, maxB);
        }


        while(M--){

            if(maxR >= maxB && maxR >= maxG){
                maxR /= 2;
            }
            else if(maxB >= maxR && maxB >= maxG){
                maxB /= 2;
            }
            else if(maxG >= maxR && maxG >= maxB){
                maxG /= 2;
            }
        }

        if(maxR >= maxB && maxR >= maxG){
            cout << maxR << endl;
        }
        else if(maxB >= maxR && maxB >= maxG){
            cout << maxB << endl;
        }
        else if(maxG >= maxR && maxG >= maxB){
            cout << maxG << endl;
        }

    }

    return 0;
}
