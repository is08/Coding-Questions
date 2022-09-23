#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        long long int height;
        long long int max_height = -1e6;


        while(n--){
            cin >> height;
            max_height = max(max_height, height);
        }

        cout << max_height << endl;
    }
}
