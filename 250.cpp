#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int count = 0, flag = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 1){
                count++;
            }
            else if(a[i] == 0){
                count --;
            }

            if(count < 0){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "Invalid" << endl;
        }
        else if(flag == 0){
            cout << "Valid" << endl;
        }


    }
    return 0;
}
