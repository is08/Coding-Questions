#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int len, quant, cost;
    double tot;
    cin>>len;

    while(len--){
        cin>>quant>>cost;

        if(quant < 1000){
            tot = cost * quant;
        }
        else{
            tot = 0.9 * cost * quant;
        }
        cout<<fixed<<setprecision(6)<<tot<<endl;   //IMPORTANT TO USE SETPRECISION AND IOMANIP LIB

    }


    return 1;
}
