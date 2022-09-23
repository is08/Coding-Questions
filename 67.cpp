#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int length[n];
        int rating[n];

        for(int i = 0; i < n; i++)
            cin >> length[i];

        for(int i = 0; i < n; i++)
            cin >> rating[i];

        int rat = -99, maxi = -99, len = -99, index = -99;
        for(int i = 0; i < n; i++){
            int lr = length[i] * rating[i];

            if(lr > maxi){
                maxi = lr;
                index = i;
                rat = rating[i];
                len = length[i];
                continue;
            }
            else if(lr == maxi){
                if(rating[i] > rat){
                    index = i;
                    rat = rating[i];
                }
            }

        }
        cout<<index + 1<<endl;
    }

    return 0;
}
