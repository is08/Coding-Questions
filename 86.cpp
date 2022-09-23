#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        long long count = 0;
        cin >> n;

        for(int i = 1; i <= n; i = i + 2){
            count = count + ((n - i + 1) * (n - i + 1));
        }

        cout<<count<<endl;
    }

    return 0;
}
