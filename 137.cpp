#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int flag = 0;
        string s1;
        cin >> s1;

        for(int i = 0; i < s1.length() - 1; i++){
            if(s1[i + 1] >= s1[i]){
            }
            else{
                flag = 1;
                break;
            }
        }


        if(flag == 1){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }

    }

    return 0;
}
