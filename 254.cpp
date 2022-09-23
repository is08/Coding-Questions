#include<iostream>
using namespace std;

int main(){
    int n, m, c;
    cin >> n;
    cin >> m >> c;

    int x, y, p, left = 0, right = 0;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> p;

        int val = y - (m * x) - c;

        if(val > 0){
            right = right + p;
        }
        else{
            left = left + p;
        }
    }

    cout << max(right, left) << endl;


    return 0;
}
