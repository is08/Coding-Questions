#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a, sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a;
            sum += a;
        }

        int uniqueElements = 1;

        while(2*sum >= (uniqueElements+2)*(uniqueElements+1)){
            uniqueElements++;
        }

        cout << uniqueElements << endl;

    }

    return 0;
}
