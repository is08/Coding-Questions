#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int c[n];

        for(int i = 0; i < n; i++){
            cin >> c[i];
        }

        // we pick the dish with max cooking time first so that we don't encounter any issue in the end
        sort(c, c + n, greater<int>());

        //a, b are time for burner1 and burner2
        int a = 0, b = 0;
        for(int i = 0; i < n; i++)
        {
            //we look which burner has less time on it
            //we add the new time on the burner that has dish with less cooking time
            if(a <= b)
                a+=c[i];
            else
                b+=c[i];

        }
        cout<<max(a,b)<<endl;

    }

    return 0;
}
