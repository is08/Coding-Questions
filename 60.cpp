#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, mid, flag = 0;
        cin >> n;
        int temp = n;

        int arr[n] = {0};

        if(n % 2 == 0)
            mid = int(temp / 2) - 1;
        else
            mid = int(temp / 2);

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        if(arr[mid] == 7 && arr[0] == 1){
            for(int i = 0; i < mid; i++){
                if(arr[i] == arr[n - i -1] && (arr[i + 1] == arr[i] + 1 || arr[i + 1] == arr[i])){
                    continue;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }


    }

    return 0;
}
