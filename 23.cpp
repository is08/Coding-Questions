#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int len;
    cin>>len;

    while(len--){
        int length, i, j;
        cin >> length;

        int arr[length];

        for(i = 0; i < length; i++){
            cin>>arr[i];
        }

        sort(arr, arr + length);

        cout<<arr[0] + arr[1]<<endl;
    }

    return 1;
}
