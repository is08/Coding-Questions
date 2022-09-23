#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int upcase = 0, lcase = 0, digit = 0, spec_char = 0, len = 0;

        if(s.size() >= 10){
            len = 1;
            //cout << "length > 10" << endl;
        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] > 'a' && s[i] < 'z'){
                lcase = 1;
                //cout << "lcase present: " << s[i] << endl;
            }
            if(s[i] > 'A' && s[i] < 'Z'){
                upcase = 1;
                //cout << "upcase present: " << s[i] << endl;
            }
            if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?'){
                spec_char = 1;
                //cout << "special character present: " << s[i] << endl;
            }
        }

        for(int i = 1; i < s.size() - 1; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                digit = 1;
                //cout << "digit present: " << s[i] << endl;
            }
        }

        if(lcase && upcase && spec_char && len && digit){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
