#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        string first[n], last[n];

        for(int i = 0; i < n; i++){
            cin>>first[i]>>last[i];
        }

        for(int i = 0; i < n; i++){
            int flag = 0;
            for(int j = 0; j < n; j++){
                if(i != j && first[i] == first[j]){
                    flag = 1;
                }
            }
            if(flag == 1)
                cout<<first[i]<<" "<<last[i]<<endl;
            else
                cout<<first[i]<<endl;
        }

    }

    return 0;
}
