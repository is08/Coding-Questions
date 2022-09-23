#include<iostream>
using namespace std;

int main(){

    int n, k, i, num, isdiv = 0;
    cin>>n>>k;

    for(i=0; i<n; i++){
        cin>>num;
        if(num%k == 0){
            isdiv++;
        }
    }


    cout<<isdiv;

    return 0;
}
