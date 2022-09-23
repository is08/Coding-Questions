#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    string s;
    cin >> n;
    cin >> s;

    //except for the last digit, we check the longest occurence of 0s
    for(int i = n - 1; i > 0; i--){
        if(s[i] == '0'){
            count++;
        }
        else{
            break;
        }
    }


    cout << count << endl;

    return 0;
}
