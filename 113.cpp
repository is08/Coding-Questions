#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int a, b;
        cin >> a >> b;

        if(a + b >= 10){
            cout<<a + b - 10<<endl;
        }
        else{
            cout<<a + b<<endl;
        }
    }

    return 0;
}
