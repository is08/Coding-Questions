#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, ele, min, cost = 0;
        cin>>n;
        cin>>ele;
        min = ele;

        for(int i = 1; i < n; i++){
            cin>>ele;
            if(ele < min){
                min = ele;
            }
            cost += min;
        }

        cout<<cost<<endl;
    }

    return 0;
}
