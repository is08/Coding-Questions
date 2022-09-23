#include<iostream>
using namespace std;

int main(){
    int num, i;
    cin>>num;

    int arr[num];

    for(i=0; i<num; i++){
        cin>>arr[i];
    }

    for(i=0; i<num; i++){
        int first = arr[i];
        while(first >= 10){
            first = first/10;
        }
        int last = arr[i] % 10;

        cout<<(first+last)<<endl;
    }

    return 0;
}
