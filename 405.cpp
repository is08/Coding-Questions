#include<iostream>
#include<map>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;
        string parent = a + b;

        cin >> n;

        string allNames, name;

        for(int i = 0; i < n; i++){
            cin >> name;
            allNames += name;
        }

        map<char, int> freq;

        for(int i = 0; i < parent.size(); i++){
            freq[parent[i]]++;
        }

        int flag = 0;

        for(int i = 0; i < allNames.size(); i++){
            if(freq[allNames[i]] > 0){
                freq[allNames[i]]--;
            }
            else{
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
