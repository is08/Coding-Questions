#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, ans;
    cin >> a >> b;

    char c;
    cin >> c;

    if(c == '+'){
        cout << a+b;
    }
    else if (c == '-'){
        cout << a - b;
    }
    else if(c == '*'){
        cout << a * b;
    }
    else{
        cout<<fixed<<setprecision(6)<<(double)a/b;
    }

    return 0;
}
