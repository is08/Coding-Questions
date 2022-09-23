#include<iostream>
using namespace std;


int check(int a[3], int b[3], int c[3]){
    if((a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) && (b[0] >= c[0] && b[1] >= c[1] && b[2] >= c[2])){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[3], b[3], c[3], sum_a = 0, sum_b = 0, sum_c = 0;

        for(int i = 0; i < 3; i++){
            cin >> a[i];
            sum_a += a[i];
        }
        for(int i = 0; i < 3; i++){
            cin >> b[i];
            sum_b += b[i];
        }
        for(int i = 0; i < 3; i++){
            cin >> c[i];
            sum_c += c[i];
        }

        if((a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) || (b[0] == c[0] && b[1] == c[1] && b[2] == c[2]) || (a[0] == c[0] && a[1] == c[1] && a[2] == c[2])){
            cout << "no" << endl;
        }
        else{
            if(check(a, b, c) || check(a, c, b) || check(b, a, c) || check(b, c, a) || check(c, a, b) || check(c, b, a)){
                cout << "yes" << endl;
            }
            else{
                cout << "no" << endl;
            }
        }

    }

    return 0;
}
