#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    string day[7] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};

    while(test--){
        int w, index;
        string s;
        cin >> w >> s;

        int freq[7] = {4, 4, 4, 4, 4, 4, 4};

        for(int i = 0; i < 7; i++){
            if(day[i] == s){
                index = i;
                break;
            }
        }

        for(int i = 0; i < w % 7; i++){
            if(index == 7){
                index = 0;
            }
            freq[index] = freq[index] + 1;
            index++;
        }

        for(int i = 0; i < 7; i++){
            cout << freq[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
