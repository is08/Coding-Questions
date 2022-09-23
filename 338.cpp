#include<iostream>
using namespace std;

int main(){
    int t, sa, sb, posA, posB;
    string s;
    cin >> t;

    while(t--){
        cin >> s;
        cin >> sa >> sb;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                posA = i;
            }
            if(s[i] == 'B'){
                posB = i;
                break;
            }
        }

        if((posB - posA) % (sa + sb) == 0){
            cout << "unsafe" << endl;
        }
        else{
            cout << "safe" << endl;
        }

    }

    return 0;
}
