#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, count = 1;
        cin >> n;
        long long arr[n], sa_length[n];
        sa_length[0] = 1;

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 1; i < n; i++){
            if(arr[i] > arr[i - 1]){
                sa_length[i] = sa_length[i - 1] + 1;
            }
            else{
                sa_length[i] = 1;
            }
            count = count + sa_length[i];
        }


        cout<<count<<endl;
    }

    return 0;
}
