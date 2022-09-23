#include<iostream>
using namespace std;

int get_num(char c){

    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;

}



int main(){
    string s;
    cin >> s;
    int sum = 0, i = 0;
    int length = s.length();

    while(length--){

        if(get_num(s[i]) < get_num(s[i + 1])){
            sum = sum + get_num(s[i+1]) - get_num(s[i]);
            i = i + 2;
            length--;
            continue;
        }

        sum = sum + get_num(s[i]);
        i = i + 1;
    }

    cout<<sum<<endl;

    return 0;
}
