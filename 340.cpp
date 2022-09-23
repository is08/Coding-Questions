#include<iostream>
#include<algorithm>
using namespace std;

int canLettersMakeChef(char c1, char c2, char c3, char c4){
    int arrayOfLetters = {c1, c2, c3, c4};
    sort(arrayOfLetters, arrayOfLetters + 4);

    if(arrayOfLetters[0] == 'c' && arrayOfLetters[1] == 'e' && arrayOfLetters[2] == 'f' && arrayOfLetters[3] == 'h'){
        return 1;
    }
    return 0;
}

int main(){
    int t, Count = 0;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        for(int i = 0; i < s.length() - 3; i++){
            Count += canLettersMakeChef(s[i], s[i + 1], s[i + 2], s[i + 3]);
        }

        if(Count == 0){
            cout << "normal" << endl;
        }
        else{
            cout << "lovely " << Count << endl;
        }

    }

    return 0;
}
