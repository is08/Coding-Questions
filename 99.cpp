#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, k;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        int sum = 0;

        for(int i = k; i < n - k; i++){
            sum = sum + arr[i];
        }

        cout<<fixed<<setprecision(6)<<(double)sum/(n-2*k)<<endl;

    }
    return 0;
}
