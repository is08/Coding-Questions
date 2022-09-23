#include<iostream>
#include<string.h>
using namespace std;

long long int reverse2(long long int a){
    long long int temp = 0;
    while(a > 0){
        int rem = a % 10;
        temp = temp*10 + rem;
        a = a / 10;
    }
    return temp;
}

int main(){
    int test;
    cin >> test;

    while(test--){
        int a
        cin >> a;

        while(a != a.reverse()){
            a++;
        }

        cout<<a<<endl;
    }

    return 0;
}
