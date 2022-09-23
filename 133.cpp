#include<iostream>
using namespace std;

int main(){
    int test;
    string s;
    cin >> s;
    int c = 0, h = 0, e = 0, f = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'C')
            c++;
        else if(s[i] == 'H' && h < c)
            h++;
        else if(s[i] == 'E' && e < h)
            e++;
        else if(s[i] == 'F' && f < e)
            f++;
    }

    cout << f <<endl;

    return 0;
}
