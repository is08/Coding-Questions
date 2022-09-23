#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        int sum_a = 0, sum_b = 0;
        cin >> n;

        int a[n], b[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a+n);
        sort(b, b+n);



        for(int i = 0; i < (n - 1); i++){
            sum_a = sum_a + a[i];
            sum_b = sum_b + b[i];
        }


        if(sum_b > sum_a){
            cout<<"Alice"<<endl;
        }
        else if(sum_a > sum_b){
            cout<<"Bob"<<endl;
        }
        else if(sum_a == sum_b){
            cout<<"Draw"<<endl;
        }
    }
}
