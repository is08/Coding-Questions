#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long int posSum = 0, negSum= 0;
        vector<long long int> neg, pos;

        for(int i = 0; i < n; i++){
            if(a[i] < 0){
                negSum += a[i];
                neg.push_back(a[i]);
            }
            else{
                posSum += a[i];
                pos.push_back(a[i]);
            }
        }

        long long int maxim = (posSum * pos.size()) + negSum;

        sort(neg.begin(), neg.end(), greater<int>());
        int length = pos.size();


        for(int i = 0; i < neg.size(); i++){
            length++;
            posSum += neg[i];
            negSum -= neg[i];

            long long int temp = (posSum * length) + negSum;

            maxim = max(maxim, temp);
        }

        cout << maxim << endl;

    }
    return 0;
}
