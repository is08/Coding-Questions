#include<iostream>
using namespace std;

int main(){
    long long int test, n, a, b;
    cin >> test;

    while(test--){
        cin >> n >> a >> b;
        string s;
        long long int sarthak = 0, aniruddha = 0;

        for(int i = 0; i < n; i++){
            cin >> s;

            if(s[0] == 'E'|| s[0] == 'Q'|| s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
                sarthak += a;
            else
                aniruddha += b;
        }

        if(sarthak > aniruddha)
            cout << "SARTHAK" << endl;
        else if(aniruddha > sarthak)
            cout << "ANURADHA" << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}
