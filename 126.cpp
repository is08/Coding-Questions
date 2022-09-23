#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
       string s;
       int trans = 0;
       cin >> s;

       for(int i = 1; i < s.length(); i++){
            if(s[i] != s[i - 1]){
                trans++;
            }
       }

       if(s[0] != s[s.length() - 1]){
            trans++;
       }

       if(trans <= 2){
            cout << "uniform" << endl;
       }
       else{
            cout << "non-uniform" << endl;
       }


    }

    return 0;
}
