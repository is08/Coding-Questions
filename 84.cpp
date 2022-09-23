#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s1, s2;
        cin >> s1 >> s2;

        int flag = 0;

        //need to match one character

        for(int i = 0; i < s1.length(); i++){
            for(int j = 0 ; j < s2.length(); j++){
                if(s1[i] == s2[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                break;
        }

        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
