#include<iostream>
using namespace std;

int main(){
    int test, n, s1;
    cin >> test;

    while(test--){
        cin >> n >> s1;
        int p[n], s[n];
        int for_fb = 1e5, def = 1e5;

        for(int i = 0; i < n; i++)
            cin >> p[i];

        for(int i = 0; i < n; i++)
            cin >> s[i];

        int diff = 100 - s1;

        for(int i = 0; i < n; i++){
            if(s[i] == 1){
                for_fb = min(for_fb, p[i]);
            }
            else if(s[i] == 0){
                def = min(def, p[i]);
            }
        }

        if(for_fb + def <= diff){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
