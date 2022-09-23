#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int num;
        cin>>num;

        int one = 0, zero = 0, rem;

        while(num > 0){
            rem = num % 10;

            if(rem == 1)
                one++;
            else if (rem == 0)
                zero++;

            num = num / 10;
        }

        if(one == 1 || zero == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
