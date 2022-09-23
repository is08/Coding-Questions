#include<iostream>
using namespace std;

int num(int a){

switch(a){
    case 0: return 6;
    case 1: return 2;
    case 2: return 5;
    case 3: return 5;
    case 4: return 4;
    case 5: return 5;
    case 6: return 6;
    case 7: return 3;
    case 8: return 7;
    case 9: return 6;
}

}

int main(){
    int test;
    cin >> test;

    while(test--){
        int a, b, c, sum = 0;
        cin >> a >> b;
        c = a + b;

        while(c > 0){
            int rem = c % 10;
            sum = sum + num(rem);
            c = c / 10;
        }
        cout<<sum<<endl;
    }

    return 0;
}
