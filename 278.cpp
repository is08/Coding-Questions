#include<iostream>
using namespace std;

int main(){
    int t, n, x;
    cin >> t;

    while(t--){
        cin >> n >> x;
        int maxRating = -10e5, tempSpace, tempRating;

        while(n--){
            cin >> tempSpace >> tempRating;
            if(tempSpace <= x){
                maxRating = max(maxRating, tempRating);
            }
        }
        cout << maxRating << endl;
    }

    return 0;
}
