#include<iostream>
using namespace std;

int fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}


int main(){
    int testcases, input;
    cin>>testcases;

    while(testcases--){
        cin>>input;
        int output = fact(input);
        cout<<output<<endl;
    }

    return 0;
}

