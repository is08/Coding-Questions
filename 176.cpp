#include<iostream>
using namespace std;

int main(){
    int n, div;
    cin >> n;

    for(int i = 1; i <= 10; i++){
        if(n % i == 0){
            div = i;
        }
    }

    cout << div << endl;

}
