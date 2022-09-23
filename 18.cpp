#include<iostream>
using namespace std;

int sum1(int d, int n){
    int i, j;

    for(j = 1; j <= d; j++){
        int sum = 0;
        for(i = 1; i <= n; i++){
            sum = sum + i;
        }
        n = sum;
    }
    return n;
}

int main(){
    int len, d, n;
    cin>>len;

    while(len--){
        cin>>d>>n;
        int ans = sum1(d, n);
        cout<<ans;
    }

    return 0;
}
