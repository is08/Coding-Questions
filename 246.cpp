#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        n++;
        int temp, flag = 0;

        while(flag == 0){
            temp = n;
            int count = 0;

            while(temp > 0){
                int rem = temp % 10;

                if(rem == 3){
                    count++;
                }

                temp = temp / 10;

            }

            if(count == 3){
                flag = 1;
                break;
            }

            n++;
        }

        cout << n << endl;

    }
    return 0;
}
