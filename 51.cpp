#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n;
        cin>>n;

        int a[n];
        int b[n];

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
            cin>>b[i];

        int time = 0, count = 0;
        for(int i = 0; i < n; i++){
            if(b[i] <= a[i] - time)
                count++;
            time = a[i];
        }

        cout<<count<<endl;

    }
    return 0;
}
