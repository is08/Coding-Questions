#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, a, b, n;
    cin >> t;

    while(t--){
        cin >> a >> b >> n;

        if(n%2==0){
        if(abs(a) == abs(b))
            cout<<"0"<<endl;
        else if(abs(a)>abs(b))
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
        }
        else{
            if(a == b)
                cout<<"0"<<endl;
            else if(a > b)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }

    }



    return 0;
}
