#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, i, height = 0;
        cin >> n;

        for(i = 1; i <= n; i++){
            if((n - i) >= 0){
                height++;
                n = n - i;
            }
        }

        cout<<height<<endl;
    }
    return 0;
}
