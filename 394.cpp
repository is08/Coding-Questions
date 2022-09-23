#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 1 || n == 0){
        return 1;
    }
    else{
     return n*factorial(n - 1);
    }

}

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;

        int fact = factorial(n);

        cout << fact << endl;
    }

    return 0;
}
