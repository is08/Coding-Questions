#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, k;
        cin>>n>>k;

        while(n--){
            int ele;
            cin>>ele;

            if(ele <= k){
                k = k - ele;
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}
