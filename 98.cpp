#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;
        int count = 0;


        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1' && count == 0){
                count++;
                continue;
            }
            if(count == 1 && s[i] == '1' && s[i-1] == '0'){
                count++;
            }
        }

        if(count == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

    return 0;
}
