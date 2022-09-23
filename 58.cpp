#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0;

        for(int i = 0; i < n; i++){
            int sum = 0, prod = 1;
            for(int j = i; j < n; j++){
                sum = sum + arr[j];
                prod = prod * arr[j];

                if(sum == prod)
                    count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
