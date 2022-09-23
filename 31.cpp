#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int arr[4], i;

        for(i=0; i<4; i++)
            cin>>arr[i];

        sort(arr, arr + 4);

        if(arr[0] == arr[1] && arr[2] == arr[3])
            cout<<"YES"<<endl;
        else
            cout<<"NO";

    }

    return 0;
}
