#include<iostream>
using namespace std;

int main(){
    int len, i, j;
    cin>>len;
    int arr[len];

    for(i=0; i<len; i++){
        cin>>arr[i];
    }

    for(i=0; i<len; i++){
        for(j=i; j<len; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<len; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
