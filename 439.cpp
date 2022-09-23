#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n <= 2){
            cout << "0\n";
        }
        else if(n == 3){
            cout << "10\n";
        }
        else{
            cout << pow(3,(n-3))*10*(n-2) << "\n";
        }
    }
    return 0;
}
