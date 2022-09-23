#include<iostream>
using namespace std;

int main(){
    int test;
    string s;
    cin >> test;

    while(test--){

        cin>>s;
        int sum,mul,l;
        int ans = 10e7;
        for(int i = 0; i < s.size(); i++){
            mul = 1;
            sum = 0;
            for(int j = s.size()-1; j >=0; j--){
                if(j == i) continue;
                else{
                    l = s[j]-48;
                    sum+=l*mul;
                    mul*=10;
                }
            }
            ans = min(sum,ans);
        }
        cout<<ans<<"\n";
    }
}
