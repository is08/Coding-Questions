#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        string s;
        int num = 0;
        cin>>s;

        for(int i = 0; i < s.length(); i++){
            int count = 0;
            for(int j = 0; j < s.length(); j++){
                if(s[i] == s[j])
                    count++;
            }
            if(count > num)
                num = count;
        }

        if(s.length() - num == num)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
