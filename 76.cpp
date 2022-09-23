#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, m;
        cin >> n >> m;

        if(n%2 == 1 && m%2 == 1){
            cout<<"no"<<endl;
            break;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
