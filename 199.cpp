#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int c[n], t[n];

    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    long long int min_translator = 10e5, min_author = 10e5, min_both = 10e5;

    for(int i = 0; i < n; i++){
        if(t[i] == 1){
            min_translator = min(min_translator, c[i]);
        }
        else if(t[i] == 2){
            min_author = min(min_author, c[i]);
        }
        else if(t[i] == 3){
            min_both = min(min_both, c[i]);
        }
    }

    //cout << min_author << " " << min_translator << " " << min_both << endl;

    if(min_author + min_translator < min_both){
        cout << min_author + min_translator ;
    }
    else{
        cout << min_both;
    }


    return 0;
}
