#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n,m;
	    cin>>n>>m;

	    long long int t=(n/(__gcd(n,m)));

	    if(t==n){
	        cout<<"Yes\n";
	    }else{
	        cout<<"No "<<t<<"\n";
	    }

    }

    return 0;
}
