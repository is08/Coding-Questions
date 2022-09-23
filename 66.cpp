#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        char col[n];

        int red_c = 0, green_c = 0, blue_c = 0;

        for(int i = 0; i < n; i++){
            cin >> col[i];

            if(col[i] == 'R')
                red_c++;
            else if(col[i] == 'G')
                green_c++;
            else if(col[i] == 'B')
                blue_c++;

        }

        int arr[3] = {red_c, green_c, blue_c};
        sort(arr, arr+3);



        cout<<n-arr[2]<<endl;


    }

    return 0;
}
