#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        vector<int> v1;
        int a;

        while(1){
            cin >> a;
            v1.push_back(a);

            if(getchar() != ' ')
                break;
        }

        int n = v1.size();

        sort(v1.begin(), v1.end());

        if(v1[n - 1] != n - 1){
            cout<<v1[n - 1]<<endl;
        }
        else{
            cout<<v1[n - 2]<<endl;
        }


    }


    return 0;
}
