//displaying the array according to frequency

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int arr[n][2] = {0};
        int freq[n][2] = {0};

        for(int i = 0; i < n; i++)
            cin >> arr[i][0];

        int freq_index = 0;


        for(int i = 0; i < n; i++){
            int count = 1;
            if(arr[i][1] == 1)
                continue;
            for(int j = (i+1); j < n; j++){
                if(arr[i][0] == arr[j][0]){
                    arr[j][1] = 1;
                    count++;
                }
            }
            freq[freq_index][0] = arr[i][0];
            freq[freq_index][1] = count;
            freq_index++;
        }

        for(int i = 0; i < n; i++){
            if(freq[i][0] == 0)
                break;
            while(freq[i][1]--)
                cout<<freq[i][0]<<" ";
        }

    }

    return 0;
}
