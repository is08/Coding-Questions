#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int paid_or_not[n];

        for(int i = 0; i < n; i++){
            cin >> paid_or_not[i];
        }

        int total = 0, fine = 0;

        for(int i = 0; i < n; i++){
            if(paid_or_not[i] == 0){
                fine = fine + 100;
            }
            else{
                total = total + 1000;
                if(fine){
                    fine = fine + 100;
                }
            }
        }

        cout << n*1000-total+fine<<endl;

    }
    return 0;
}
