#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int len;
    cin >> len;

    while(len--){
        int size, i, j, sum = 0;
        cin>>size;

        int arr[size][size];

        for(i=0; i<size; i++){
            for(j=0; j < size; j++){
                arr[i][j] = 0;
            }
        }

        for(i=0; i<size; i++){
            for(j=0; j <= i; j++){
                cin>>arr[i][j];
            }
        }



        for(i=0; i<size; i++){
            int max = 0;
            for(j=0; j<size; j++){
                if ( arr[i][j] > max ){
                    max = arr[i][j];
                }
            }
            sum = sum + max;
        }

        cout<<sum<<endl;

    }

    return 1;
}
