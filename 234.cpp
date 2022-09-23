#include<iostream>
using namespace std;

int main(){
    int test, xa, xb, Xa, Xb;
    cin >> test;

    while(test--){
        cin >> xa >> xb >> Xa >> Xb;
        cout << Xa/xa + Xb/xb << endl;
    }

    return 0;
}
