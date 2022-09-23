#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int res=0;
        int n;
        cin>>n;

        while(n--){

            string s;
            cin>>s;

            int deci = stoi(s, 0, 2); //converting binary to decimal
            //cout << deci << endl;

            res=res^deci;
            //cout << res << endl;

        }

        int count=0;
        while(res>0){
            res=res&(res-1);
            //cout << "res in while is " << res << endl;
            count++;
        }


cout<<count<<endl;





}

return 0;
}
