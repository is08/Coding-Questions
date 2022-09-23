#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n, k, count = 0;
        cin>>n>>k;

        while(n--){
            int character;
            cin>>character;

            character = character + k;

            if(character % 7 == 0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
