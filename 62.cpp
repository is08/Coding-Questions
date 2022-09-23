#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        long long int a, b;
        int n;
        cin >> a >> b >> n;

        if(n % 2 != 0){
            a = a * 2;
        }

        cout <<max(a,b)/min(a,b)<<"\n";
    }

    return 0;
}
