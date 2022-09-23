#include<iostream>
using namespace std;

int main(){
    int t, n, u, d;
    cin >> t;

    while(t--){
        cin >> n >> u >> d;
        int h[n];

        for(int i = 0; i < n; i++){
            cin >> h[i];
        }

        int pos = 0, parachute = 1;
        //cout << "initial position is " << pos << endl;

        for(int i = 0; i < n - 1; i++){
            if(h[i] == h[i + 1]){
                pos++;
                //cout << "height of the hills are same + new pos is " << pos << endl;
            }
            if(h[i + 1] > h[i]){
                //cout << "taller" << endl ;
                if((h[i + 1] - h[i]) <= u){
                    pos++;
                    //cout << "updated position is " << pos << endl;
                }
                else{
                    break;
                }
            }
            if(h[i + 1] < h[i]){
                //cout << "samller" << endl ;
                if((h[i] - h[i + 1]) <= d){
                    pos++;
                    //cout << "updated position is " << pos << endl;
                }
                else if(parachute){
                    parachute = 0;
                    pos++;
                    //cout << "used parachute " << endl;
                    //cout << "updated position is " << pos << endl;
                }
                else{
                    break;
                }
            }

        }

        cout << pos + 1<< endl;
    }
    return 0;
}
