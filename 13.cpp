#include<iostream>
using namespace std;

int main(){

    int len, n, ceven = 0, codd = 0;
    cin>>len;

    while(len--){
        cin>>n;
        if(n%2 == 0){
            ceven++;
        }
        else{
            codd++;
        }
    }

    if(ceven > codd){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }




    return 0;
}
