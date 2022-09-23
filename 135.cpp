#include<iostream>
using namespace std;

int main(){
    int test;
    double x1, x2, x3, v1, v2;
    cin >> test;

    while(test--){
        cin >> x1 >> x2 >> x3 >> v1 >> v2;

        double t1 = (x3 - x1) / v1;
        double t2 = (x3 - x2) / v2;

        if(t1 < 0)
            t1 = -t1;
        if(t2 < 0)
            t2 = -t2;

        if(t1 < t2){
            cout << "Chef" << endl;
        }
        else if(t2 < t1){
            cout << "Kefa" << endl;
        }
        else if(t1 == t2){
            cout << "Draw" << endl;
        }
    }

    return 0;
}
