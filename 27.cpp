#include<iostream>
using namespace std;

int main(){
    int len = 1;

    while(1){
        int n, i;
        cin>>n;

        if(n == 0)
            break;

        int arr[n];

        for(i = 1; i <= n; i++){
            cin>>arr[i];
        }

        int newarr[n];

        for(i = 1; i<=n; i++){
            newarr[arr[i]] = i;
        }


        int flag = 0;
        for(i = 1; i <= n; i++){
            if(arr[i] != newarr[i]){
                flag = 1;
            }
        }

        if(flag == 0)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
    return 1;
}
