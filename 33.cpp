#include<iostream>
#include<string>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        string s1, s2;
        cin>>s1>>s2;

        int max = 0, min = 0, i;

        int l = s1.length();

        for(i = 0; i < l; i++){
            if(s1[i]=='?' || s2[i]=='?')
                max++;
            else if(s1[i]!=s2[i])
            {
                max++;
                min++;
            }
        }

        cout<<min<<" "<<max<<endl;
    }

    return 0;
}
