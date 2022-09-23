#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int len, i;
    cin>>len;
    int arr[len];

    for(i=0; i<len; i++){
        cin>>arr[i];
    }

    for(i=0; i<len; i++){
        int sq = sqrt(arr[i]);
        cout<<sq<<endl;
    }

    return 0;
}
