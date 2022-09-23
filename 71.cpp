#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int c, d, l;
        cin>>c>>d>>l;

        int min_legs, max_legs = c*4 + d*4;

        if(c > d*2){
            min_legs = (c - (d * 2) + d)*4;
        }
        else{
            min_legs = d * 4;
        }

        if(l%4 == 0 || l>=min_legs && l<=max_legs){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}
