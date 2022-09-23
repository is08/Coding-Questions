#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int len, length;
    cin>>len;
    string word;

    while(len--){
        string first, last;
        cin>>word;
        length = word.length();

        if(length%2 == 0){
            first = word.substr(0, length/2);
            last = word.substr(length/2, length);
        }
        else{
            first = word.substr(0, length/2);
            last = word.substr(length/2 + 1, length);
        }


        sort(first.begin(), first.end());
        sort(last.begin(), last.end());



        if(first.compare(last)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 1;
}
