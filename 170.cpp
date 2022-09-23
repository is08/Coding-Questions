#include<iostream>
using namespace std;

int main(){
    int n, rem;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //in each for(i) iteration, we are sorting the whole array
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            int temp1 = arr[j], temp2 = arr[j + 1], sum1 = 0, sum2 = 0;

            //sum of digits of arr[j]
            while(temp1){
                rem = temp1 % 10;
                sum1 = sum1 + rem;
                temp1 = temp1 / 10;
            }

            //sum of digits of arr[j + 1]
            while(temp2){
                rem = temp2 % 10;
                sum2 = sum2 + rem;
                temp2 = temp2 / 10;
            }

            //if sum of digits of arr[j + 1] < arr[j]
            if(sum2 < sum1){
                int temp3 = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp3;
            }
            //if sum is equal, then sort according to the element
            else if(sum1 == sum2){
                if(arr[j] > arr[j + 1]){
                    int temp3 = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp3;
                }
            }
        }
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
