#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int M, x, y, left, right;
        cin>>M>>x>>y;

        int arr[M];
        int house[100] = {0};

        for(int i = 0; i < M; i++){
            cin>>arr[i];

            left = arr[i] - (x * y);
            right = arr[i] + (x * y);

            if(left <= 0)
                left = 1;

            if(right > 100)
                right = 100;

            for(int i = left; i <= right; i++){
                house[i] = 1;
            }

        }

        int count = 0;
        for(int i = 1; i <= 100; i++){
            if (house[i] == 1){
                count++;
            }
        }

        cout<<100-count<<endl;

    }
    return 0;
}
