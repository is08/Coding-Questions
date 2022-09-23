#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a,a + n);
        int peopleAtParty = 0;

        for(int i = 0; i < n; i++){
            if(a[i] <= peopleAtParty){
                peopleAtParty++;
            }
        }

        cout << peopleAtParty << endl;
    }

    return 0;
}
