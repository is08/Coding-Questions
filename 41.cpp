#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        string s;
        cin >> s;

        int a = 0, b = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a')
                a++;
            else if(s[i] == 'b')
                b++;
        }

        if (a == 0 || b == 0)
            cout<<"0"<<endl;
        else
            if (a < b)
                cout<<a<<endl;
            else if  (b < a)
                cout<<b<<endl;
            else if (a == b)
                cout<<a<<endl;
    }
    return 0;
}
