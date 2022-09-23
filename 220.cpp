//recursive code for fibonacci

#include<iostream>
using namespace std;

int main(){
    int n, b1 = 0, b2 = 1, sum;
    cin >> n;

    if(n == 0){
        sum = b1;
    }
    else if(n == 1){
        sum = b2;
    }
    else{
        while(n - 1){
            sum = b1 + b2;
            b1 = b2;
            b2 = sum;
            //cout << "b1 and b2 is " << b1 << " " << b2 << endl;
            n--;
        }
    }

    cout << sum << endl;
    return 0;
}

