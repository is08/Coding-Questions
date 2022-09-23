#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << floor(n / 2) * 3 << endl;
    }

    return 0;
}
