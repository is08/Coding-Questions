#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return(gcd(b, a % b));
}

int main(){
    int test;
    cin >> test;

    while(test--){
        int len , bre ,nb, ratio;
        cin>>len>>bre;

        if(len % bre ==0)
            nb = len / bre ;
        else{
            ratio = gcd(len,bre);
            nb=(len/ratio)*(bre/ratio);
        }
        cout<<nb<<endl;
    }

    return 0;
}

