#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, k;
        cin>>n>>k;

        string arr[n];
        int arr2[n] = {0};

        for(int i = 0; i < n; i++)
            cin>>arr[i];

        while(k--){
            int l;
            cin>>l;

            while(l--){
                string word;
                cin>>word;

                for(int i = 0; i < n; i++){
                    if(arr[i] == word)
                        arr2[i] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
                if(arr2[i] == 1)
                    cout<<"YES ";
                else
                    cout<<"NO ";
        }
    }

    return 0;
}
