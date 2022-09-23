#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, m, k;
        cin >> n >> m >> k;

        int arr1[m];
        int arr2[k];

        for(int i = 0; i < m; i++)
            cin>>arr1[i];

        for(int i = 0; i < k; i++)
            cin >> arr2[i];

        int tr_ig = 0;

        for(int i = 0; i < m ; i++){
            for(int j = 0; j < k; j++){
                if(arr1[i] == arr2[j]){
                    tr_ig++;
                }
            }
        }

        cout<<tr_ig<<" "<<n + tr_ig - m - k<<endl;

    }
    return 0;
}
