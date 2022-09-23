#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int x, count = 0, i;
        cin>>x;


        if(x % 10 == 0){
            cout<<"0"<<endl;
            continue;
        }
        else if(x % 5 == 0)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }

    return 0;
}
