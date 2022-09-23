#include<iostream>
using namespace std;


int main(){

    int len, rev, n;
    cin>>len;

    while(len--){
        cin>>n;
        int temp = n;
        rev = 0;
        while(n>0){
            rev = rev*10 + n%10;
            n = n/10;
        }
        if(temp == rev){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }

    return 0;
}
