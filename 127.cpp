#include<iostream>
using namespace std;

int f(string a){
    int balance = 0, max_balance = 0;

    for(int i = 0; i < a.length(); i++){
        if(a[i] == '('){
            balance++;
        }
        if(a[i] == ')'){
            balance--;
        }
        max_balance = max(max_balance, balance);
    }

    return max_balance;
}



int main(){
    int test;
    cin >> test;

    while(test--){
        string a;
        cin >> a;

        int count  = f(a);

        for(int i = 0; i < count; i++)
            cout << "(";

        for(int i = 0; i < count; i++)
            cout << ")";
    }

    return 0;
}
