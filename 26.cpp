#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return(gcd(b, a%b));
    }

}

int main(){
    int len;
    cin>>len;

    while(len--){
        int num, i;
        cin>>num;

        int arr[num];

        for(i = 0; i < num; i++){
            cin>>arr[i];
        }

        int gcd1 = arr[0];
        for(i = 1; i < num; i++){
            gcd1 = gcd(arr[i], gcd1);
        }

        for(i = 0; i < num; i++){
            arr[i] = arr[i]/gcd1;
        }

        for(i = 0; i < num; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
    return 1;
}
