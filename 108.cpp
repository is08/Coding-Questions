#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    char uni[n];
    int freq[n];
    int index = 0;

    uni[0] = s[0];
    freq[0] = 1;


    for(int i = 1; i < n; i++){
        if(s[i] != uni[index]){
            ++index;
            uni[index] = s[i];
            freq[index] = 1;
        }
        else{
            freq[index] = freq[index] + 1;
        }
    }

    int count = 0;

    for(int i = 0; i <= index; i++){
        for(int j = 0; j < alpha.length(); j++){
            if(uni[i] == alpha[j]){
                count = count + pow(freq[i], j + 1);
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
