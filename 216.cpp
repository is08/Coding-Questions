#include<iostream>
using namespace std;

int main(){
    int test;
    long long int s, n;
    cin >> test;

    while(test--){
        cin >> s >> n;
        int count = 0;

        for(int i = n; i > 0; i = i/2){
            count = count + s / i;
            s = s % i;
        }

        cout << count << endl;
    }

    return 0;
}
