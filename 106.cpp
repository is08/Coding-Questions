#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, flag1 = 0, flag2  = 0;
        cin >> n;

        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                continue;
            }
            else if(s[i] == 'H' && flag1 == 0){
                flag1 = 1;
                continue;
            }
            else if(s[i] == 'T' && flag1 == 1){
                flag1 = 0;
                continue;
            }
            else{
                flag2 = 1;
                break;
            }
        }

        if(flag2 == 1 ||flag1 == 1){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<"Valid"<<endl;
        }

    }

    return 0;
}
