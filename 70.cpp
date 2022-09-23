#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        long long int n, b, m;
        long long int time = 0;
        cin >> n >> b >> m;

        while(n > 0){
            if(n % 2 == 0){
                time = time + m * n/2;
                n = n - n/2;
                m = m * 2;
                if(n > 0)
                    time = time + b;
            }
            else if(n % 2 == 1){
                time = time + m * (n + 1)/2;
                n = n - (n + 1)/2;
                m = m * 2;
                if(n > 0)
                    time = time + b;
            }
        }
        cout<<time<<endl;
    }

    return 0;
}
