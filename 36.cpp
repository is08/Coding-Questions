#include<iostream>
using namespace std;

int prime(int a){
    int i;
    for(i = 2; i < a/2; i++){
        if(a % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int test;
    cin>>test;

    while(test--){
        int a, b;
        cin>>a>>b;

        int sum = a + b;            //min value of c is 1, can't be 0

        while(++sum){
            if(prime(sum) == 1){
                cout<<sum - (a + b)<<endl;
                break;
            }
        }

    }

    return 0;
}
