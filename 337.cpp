#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, countOfLeftShoes = 0, countOfRightShoes = 0;
        cin >> a >> b >> c;

        if(a == 0){
            countOfLeftShoes++;
        }
        if(a == 1){
            countOfRightShoes++;
        }
        if(b == 0){
            countOfLeftShoes++;
        }
        if(b == 1){
            countOfRightShoes++;
        }
        if(c == 0){
            countOfLeftShoes++;
        }
        if(c == 1){
            countOfRightShoes++;
        }

        if(countOfLeftShoes > 0 && countOfRightShoes > 0){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }

    return 0;
}
