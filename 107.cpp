#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, s, j, count = 0;
        cin >> n;

        while(n--){
            cin >> s >> j;

            if(j - s > 5){
                count++;
            }

        }

        cout<<count<<endl;
    }


    return 0;
}
