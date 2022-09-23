#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int a_count = 0, b_count = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '.'){
                char prev = s[i - 1];
                int j = i;
                while(s[j] == '.'){
                    j++;
                }
                if(s[j] == prev){
                    s[i] = prev;
                }
            }
        }

        for(int i = 0; i <s.size(); i++){
            if(s[i] == 'A'){
                a_count++;
            }
            else if(s[i] == 'B'){
                b_count++;
            }
        }
        cout << a_count << " " << b_count << endl;
    }
}
