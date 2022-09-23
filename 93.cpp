#include<iostream>
using namespace std;

int main(){
    int n, r;
    cin >> n >> r;

    while(n--){
        int R;
        cin >> R;

        if(R < r)
            cout<<"Bad boi"<<endl;
        else
            cout<<"Good boi"<<endl;
    }

    return 0;
}
