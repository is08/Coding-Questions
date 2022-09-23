#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, temp;
        vector<int> c, h;

        cin >> n >> m;

        for(int i = 0; i < n; i++){
            cin >> temp;
            h.push_back(temp);
        }

        int currHeight = h[n - 1];

        for(int i = 0; i < n; i++){
            cin >> temp;
            c.push_back(temp);
        }

        unordered_set<int> distinctColors;
        distinctColors.insert(c[n - 1]);

        for(int i = (n - 1); i >= 0; i--){
            if(h[i] > currHeight){
                distinctColors.insert(c[i]);
                currHeight = h[i];
            }
        }

        cout << distinctColors.size() << "\n";
    }
    return 0;
}
