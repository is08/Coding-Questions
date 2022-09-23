#include<iostream>
using namespace std;

int main(){
    int t, n, k, ele, Count = 0;
    cin >> t;

    while(t--){
        cin >> n >> k;
        while(n--){
            cin >> ele;
            if(ele != 1){
                Count++;
            }
        }
        if(Count <= k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
