#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int len, base;
    cin>>len;

    while(len--){
        int da = 0, hra = 0;
        float gross;

        cin >> base;

        if(base < 1500){
            hra = 0.1 * base;
            da = 0.9 * base;
        }
        else if(base >= 1500){
            hra = 500;
            da = 0.98 * base;

        }

        gross = base + da + hra;
        cout<<fixed<<setprecision(2)<<gross<<endl;

    }


    return 1;
}
