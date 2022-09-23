#include<iostream>
using namespace std;

int main(){
    int len, i, j;
    cin>>len;
    int arr[len][4];

    for(i=0; i<len; i++){
        for(j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }

    for(i=0; i<len; i++){
        if(arr[i][0] > arr[i][1]){
            arr[i][2] = arr[i][0] - arr[i][1];
            arr[i][3] = 1;
        }
        else{
            arr[i][2] = arr[i][1] - arr[i][0];
            arr[i][3] = 2;
        }
    }

    int max = 0;
    int player;

    for(i=0; i<len; i++){
        if(arr[i][2]>max){
            max = arr[i][2];
            player = arr[i][3];
        }
    }

    cout<<player<<" "<<max;


    return 0;
}
