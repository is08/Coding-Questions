#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int x, y;
        cin >> x >> y;

        if(x > y)
            cout<<x - y <<endl;
        else
            cout<<"0"<<endl;
    }

}
