#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        long arr[n];

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        int m;
        cin >> m;

        long arr2[m];

        for(int i = 0; i < m; i++)
            cin >> arr2[i];


        int j = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == arr2[j]){
                j++;
                if(j == m)
                    break;
            }
        }
        if(j == m)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;





    }
    return 0;
}
