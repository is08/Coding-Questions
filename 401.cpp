#include<iostream>
#include<map>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        string w;
        int s, sizeOfDataSet = 0;

        map<string, pair<int, int>> dataSet;

        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> w;
            cin >> s;

            if(s == 1){
                dataSet[w].first++;
            }
            if(s == 0){
                dataSet[w].second++;
            }
        }

        for(auto mapping:dataSet){
            sizeOfDataSet += max(mapping.second.first, mapping.second.second);
        }

        cout << sizeOfDataSet << endl;
    }

    return 0;
}
