#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n][2];

        for(int i = 0; i < n; i++)
            cin >> arr[i][0]>>arr[i][1];

        int ans = 0;
	    for(int i=1;i<=n;i++)
            ans^=i;

	    cout<<ans<<endl;

    }
    return 0;
}
