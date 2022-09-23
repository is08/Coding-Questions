#include<iostream>
using namespace std;

int main(){
    int test, x, y, z;
    cin >> test;

    while(test--){
        cin >> x >> y >> z;

        if(x + y == z){
            cout<<"yes"<<endl;
        }
        else if(y + z == x){
            cout<<"yes"<<endl;
        }
        else if(x + z == y){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }

    return 0;
}
