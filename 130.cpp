#include<iostream>
using namespace std;

int main(){
    int test, n, k;
    cin >> test;

    while(test--){
        cin >> n >> k;
        long long int sum = 0, min = 1e5, ele;
        string ans;

        for(int i = 0;i < n; i++){
            cin >> ele;
            sum = sum + ele;
        }

        for(long long int i=0; i < k; i++){
	        min = sum + 1;
	        if(min % 2 == 0)
	            ans = "even";
	        else
	            ans="odd";
	        sum = sum + min;
	    }

        cout << ans << endl;
    }

    return 0;
}
