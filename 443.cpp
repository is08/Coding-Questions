#include<iostream>
typedef long long int ll;
const ll mod = 1000000007;
using namespace std;

int main(){
    ll n;
    cin >> n;

    ll a[n], sum = 0;

    for(ll i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    ll q, x;
    cin >> q;

    while(q--){
        cin >> x;
        sum = ((sum % mod) + (sum % mod)) % mod;
	    if(sum < 0){
	        sum=(sum % mod + mod) % mod;
	    }
	    cout << sum << "\n";
    }
    return 0;
}
