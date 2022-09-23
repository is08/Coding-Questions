#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, p;
    cin >> t;

    while(t--){
        cin >> p;
        int count = 0;

        for(int i = 11; i >= 0; i--){
            while(p >= pow(2, i)){
                p = p - pow(2, i);
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
