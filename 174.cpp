#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        string s[n], input1 = "", input2 = "";
        int goal[2] = {0, 0};

        for(int i =0; i < n; i++){
            cin >> s[i];
        }

        for(int i = 0; i < n; i++){
            if(input1 == "" || input1 == s[i]){
                goal[0]++;
                input1 = s[i];
            }
            else if(input2 == "" || input2 == s[i]){
                goal[1]++;
                input2 = s[i];
            }
        }

        if(goal[0] > goal[1]){
            cout << input1 << endl;
        }
        else if(goal[1] > goal[0]){
            cout << input2 << endl;
        }
        else{
            cout << "Draw" << endl;
        }
    }

    return 0;
}
