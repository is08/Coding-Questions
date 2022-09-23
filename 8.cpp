#include<iostream>
using namespace std;

int main(){
    int len, i, rev, rem;
    cin>>len;
    int arr[len];

    for(i=0; i<len; i++){
        cin>>arr[i];
    }

    for(i=0; i<len; i++){
        int n = arr[i];
        int rev = 0;
        while(n != 0){
            rem = n % 10;
            rev = rev*10 + rem;
            n = n/10;
        }
        cout<<rev<<endl;
    }

    return 0;
}
