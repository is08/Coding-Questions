#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int length = 1;

        string s, new_s = "";
        cin >> s;
        new_s.push_back(s[0]);

        for(int i = 1; i < s.length(); i++){
            if(s[i] != s[i-1]){
                new_s.append(to_string(length));
                new_s.push_back(s[i]);
                length = 1;
            }
            else{
                length++;
            }
        }

        new_s.append(to_string(length));

        //cout << new_s.length() << " " << s.length() << endl;

        if(new_s.length() < s.length()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
