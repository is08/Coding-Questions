#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, k, i;
        cin>>n>>k;

        int ans = 0;
        for(i = 1; i <= k; i++){
            ans = max(ans, n%i);
        }

        cout<<ans<<endl;
    }


    return 0;
}
