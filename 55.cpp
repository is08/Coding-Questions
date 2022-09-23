#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n;
    cin>>n;

    while(n--){
        string word;
        int count = 0;
        cin>>word;

        for(int i = 0; i < word.length(); i++){
            for(int j = 0; j < s.length(); j++){
                if(word[i] == s[i]){
                    count++;
                }
            }
        }

        if(count == word.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }

    return 0;
}
