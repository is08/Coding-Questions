#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        long long int l[n], g[n];

        for(int i = 0; i < n; i++)
            cin >> l[i];

        for(int i = 0; i < n; i++)
            cin >> g[i];

        long long int count1 = 0, count2 = 0;


        for(int i = 0; i < n; i++){
            if(l[i] <= g[i]){
                count1++;
            }
            if(l[i] <= g[n - i - 1]){
                count2++;
            }
        }


        if(count1 == n && count2 != n){
            cout << "front" << endl;
        }
        else if(count2 == n && count1 != n){
            cout << "back" << endl;
        }
        else if(count1 == n && count2 == n){
            cout << "both" << endl;
        }
        else{
            cout << "none" << endl;
        }

    }

    return 0;
}
