#include<iostream>
using namespace std;

int main(){
    int t;
    long long int a, b, c, x, y;
    cin >> t;

    while(t--){
        cin >> a >> b >> c >> x >> y;

        long long int initial_stones = a + b + c;
        long long int final_stones = x + y;

        long long min_stones = min(min(a, b), c);

        if(final_stones == initial_stones && min_stones <= x && min_stones <= y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
