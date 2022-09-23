#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        if(s.find("chef") != -1)
            count++;
        else if(s.find("che") != -1)
            count++;
        else if(s.find("hef") != -1)
            count++;
        else if(s.find("ch") != -1)
            count++;
        else if(s.find("he") != -1)
            count++;
        else if(s.find("ef") != -1)
            count++;

    }

    cout<<count<<endl;


    return 0;
}
