#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int arr[n];
        int arr2[n] = {1};

        for(int i = 0;i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i - 1]){
                arr2[i] = arr2[i - 1] + 1;
            }
            else{
                arr2[i] = 1;
            }
        }

        int area = 1, count = 0;
        for(int i = n-1; i >= 0; i--){
            if(arr2[i] == 2){
                cout<<"the side chosen is "<<arr[i]<<endl;
                area = area * arr[i];
                count++;
            }
            if(count == 2)
                break;
        }

        if(count == 2)
            cout << area << endl;
        else
            cout << -1 <<endl;
    }

    return 0;
}
