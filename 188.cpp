#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int end_letter = s.length(), start_letter = s.length();



    for(int i = s.length() - 1; i >=0; i--){
        if(s[i] == ' '){
            for(int j = start_letter; j < end_letter; j++){
                cout << s[j];
            }
            cout << " ";
            start_letter = i;
            end_letter = i;
        }
        else if(i == 0){
            for(int j = start_letter - 1; j < end_letter; j++){
                cout << s[j];
            }
        }
        else{
            start_letter--;
        }
    }

    return 0;
}
