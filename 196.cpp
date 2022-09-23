#include<iostream>
using namespace std;

int main(){
    int test, n;
    string s;
    cin >> test;

    while(test--){
        cin >> n;
        int count = 0;

        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                count++;
            }
        }

        cout << "present days in 50 days is " << count << endl;

        count = count + (120 - n);

        cout << "present days if chef attends all the rest days " << count << endl;

        double per = count / 120 * 100;

        cout << "percentage is " << per << endl;

        if(per >= 75){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }

    return 0;
}

