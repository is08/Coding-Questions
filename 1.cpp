//what did i learn - use of setprecision


#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int amt;
    float curr, bal;

    cin>>amt;
    cin>>curr;

    if(amt%5 == 0 && curr > (amt+0.50)){
        bal = curr - amt - 0.50;
        cout<<fixed<<setprecision(2)<<bal;
    }
    else{
        cout<<fixed<<setprecision(2)<<curr;
    }




return 0;
}
