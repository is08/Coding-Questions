#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int head = 0, tail = n - 1, flag = 0;

        while(head < tail){
            if(arr[head] + arr[tail] == k){
                flag = 1;
                break;
            }
            else if(arr[head] + arr[tail] > k){
                tail--;
            }
            else if(arr[head] + arr[tail] < k){
                head++;
            }
        }

        if(flag == 1){
            cout << "Yes" << endl;
        }
        else if(flag == 0){
            cout << "No" << endl;
        }
    }

    return 0;
}
