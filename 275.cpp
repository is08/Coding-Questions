#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++){
            //cout << "s[i] is " << s[i] << " and " << s[i] - 97 << endl;
            //character a has 97 value in ascii -> hence subtract 97 to get manageable indices that you can implement
            freq[s[i] - 97]++;
        }



        sort(freq, freq + 26);


        if(freq[25] >= 2){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }

    return 0;
}
