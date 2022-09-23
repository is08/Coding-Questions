#include<iostream>
using namespace std;

int main(){
    int len, i;
    cin>>len;


    int arr[len];

    for(i=0; i<len; i++){
        cin>>arr[i];
    }

    for(i=0; i<len; i++){
        int n = arr[i];
        int count = 0;
        while(n >= 1){
            int dig = n % 10;
            if(dig == 4){
                count++;
            }
            n = n/10;
        }
        cout<<count<<endl;
    }

    return 0;
}
