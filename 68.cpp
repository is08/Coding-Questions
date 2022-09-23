#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, b;
        cin>>n>>b;

        int ma = 0, flag = 0;

        for(int i = 0; i < n; i++){
            int w, h, p;
            cin>>w>>h>>p;

            if(p > b){
                flag++;
                continue;
            }

            int na = w * h;

            if(na > ma){
                ma = na;
            }

        }

        if(flag == n){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<ma<<endl;
        }
    }

    return 0;
}
