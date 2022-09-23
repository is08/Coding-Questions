#include<iostream>
using namespace std;

//my answer was also correct but ig they wanted me to increase the value of the quantity instead of decreasing the value of the difference

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, m, k, diff = 0;
        cin>>n>>m>>k;

        while(k--){
            if(n > m)
                m++;
            else if (m > n)
                n++;
        }

        if(m >= n)
            diff = m - n;
        else if (n >= m)
            diff = n - m;

        cout<<diff<<endl;
    }

    return 0;
}
