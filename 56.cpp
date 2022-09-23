#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int p;

        for(int i = 0; i < n; i++){
            int count = 1;

            if(arr[i] > 0)
                p = 1;
            else
                p = 0;


            for(int j = (i+1); j < n; j++){
                if(arr[j] < 0 && p == 1){
                    count++;
                    p = 0;
                }
                else if(arr[j] > 0 && p == 0){
                    count++;
                    p = 1;
                }
                else
                    break;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
