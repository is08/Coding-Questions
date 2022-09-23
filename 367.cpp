#include<iostream>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        string s;
        int consecutiveStars = 0, maxConsecutiveStars = -1;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == '*' ){
                consecutiveStars++;
            }
            else{
                maxConsecutiveStars = max(consecutiveStars, maxConsecutiveStars);
                consecutiveStars = 0;
            }
        }

        if(maxConsecutiveStars >= k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
