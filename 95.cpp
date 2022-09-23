#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int max_sum = 0;

        for(int i = 0; i < n; i++){
            for(int j = (i + 1); j < n; j++){
                int product = arr[i] * arr[j];
                int sum = 0;
                //cout<<"the product of "<<arr[i]<<" and "<<arr[j]<<" is "<<product<<endl;
                while(product > 0){
                    int rem = product % 10;
                    product = product / 10;
                    sum = sum + rem;
                }
                //cout<<"sum of digits of "<<product<<" is "<<sum<<" and maximum sum is "<<max_sum<<endl;
                if(sum > max_sum){
                    max_sum = sum;
                }
            }
        }

        cout<<max_sum<<endl;

    }

    return 0;
}
