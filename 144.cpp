#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test --){
        cin >> n;
        string input[n];
        int flag = 0;

        for(int i = 0; i < n; i++){
            cin >> input[i];
        }

        for(int i = 0; i < n - 1; i++){
            if(input[i] == "cookie" && input[i + 1] == "cookie"){
                flag = 1;
                break;
            }
        }

        if(input[n-1]=="cookie")
            flag = 1;

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }

    return 0;
}
