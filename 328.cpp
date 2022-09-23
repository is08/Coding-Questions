#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int t, l, r, k;
    cin >> t;

    while(t--){

        cin >> l >> r >> k;
        int numberOfOddElements = 0;

        if(l == r){
            if(l == 1){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{

            for(int i = l; i <= r; i++){
                if(i % 2 == 1){
                    numberOfOddElements++;
                }
            }

            if(numberOfOddElements <= k){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}
