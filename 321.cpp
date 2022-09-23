#include <iostream>
using namespace std;

int main() {
    int t ; cin>> t ;

     while(t--){
    long long int n ;
    cin>>n;
    long long ans = 0 ;
    while(n){
        if(n%2==0)
           ans++;
        else
            break;
        n=n/2;
    }
    cout<<ans<<endl;
    }


	// your code goes here
	return 0;
}
