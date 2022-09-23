#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    char alphabet[26] = {'a' , 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while(t--){
        string s;
        cin >> s;
        int power = 0;

        sort(s.begin(), s.end());

        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < 26; j++){
                if(s[i] == alphabet[j]){
                    power += (i + 1) * (j + 1);
                    break;
                }
            }
        }

        cout << power << endl;
    }

    return 0;
}
