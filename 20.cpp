#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int len, base;
    cin>>len;

    while(len--){
        cin>>base;
        base = base - 2;
        base = floor(base/2);

        cout<<base * (base + 1) / 2<<endl;
    }

    return 1;
}
