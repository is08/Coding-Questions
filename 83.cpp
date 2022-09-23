#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s;
        cin >> s;
        int flag =  0;

        for(int i = 0; i < s.length(); i = i+2){
            if(s[i] != s[i+1]){
                flag = 0;
            }
            else if(s[i] == s[i + 1]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }

    return 0;
}
