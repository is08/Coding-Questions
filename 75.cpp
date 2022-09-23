#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, m;
        cin >> n >>m;

        int ans = (n - 1)*(m - 1);

        cout<<ans<<endl;
    }

    return 0;
}
