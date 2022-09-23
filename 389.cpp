#include<iostream>
using namespace std;

int main(){
    int t, pc, pr;
    cin >> t;

    while(t--){
        cin >> pc >> pr;
        int digitsChef = 0, digitsRick = 0;

        digitsChef = pc/9;
        digitsRick = pr/9;

        if(pc % 9 != 0){
            digitsChef += 1;
        }
        if(pr % 9 != 0){
            digitsRick += 1;
        }

        if(digitsRick <= digitsChef){
            cout << "1 " << digitsRick << endl;
        }
        else if(digitsChef < digitsRick){
            cout << "0 " << digitsChef << endl;
        }

    }

    return 0;
}
