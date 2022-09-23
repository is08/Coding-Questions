#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, temp, count = 0;
        vector<int> a;
        unordered_set<int> b;

        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> temp;
            a.push_back(temp);
            b.insert(temp);
        }

        for(int i = 0; i < n; i++){
            if(b.find(a[i] - 1) == b.end() && b.find(a[i] + 1) == b.end()){
                count++;
                if(b.find(a[i] - 2) != b.end()){
                    b.insert(a[i] - 1);
                }
                else{
                    b.insert(a[i] + 1);
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
