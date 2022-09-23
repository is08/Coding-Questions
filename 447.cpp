#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--){
	    int n,k,s;
	    cin >> n >> k >> s;

	    if(k > n){
            cout<<"-1"<<endl;
	    }
	    else if (s >= 7 && k > ((n-k)*6)){
            cout<<"-1"<<endl;
	    }
	    else{
	        if(n/k >= s){
                cout<<"1"<<endl;
	        }
	        else{
	            int a = n, count = 0;
                while(s>0){
                    count++;
                    s = s-a/k;
                    a = n+(a%k);
	        }
	        cout<<count<<endl;
	        }
	    }
	}
	return 0;
}
