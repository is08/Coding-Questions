#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
       string s1[4], s2[4];

       for(int i = 0; i < 4; i++)
            cin >> s1[i];

       for(int i = 0; i < 4; i++)
            cin >> s2[i];

       int flag = 0;

       for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                cout<<"comparing "<<s1[i]<<" and "<<s2[j]<<endl;
                if(s1[i] == s2[j]){
                    flag++;
                }
            }
       }

       if(flag >= 2)
            cout<<"similar"<<endl;
       else
            cout<<"dissimilar"<<endl;


    }

    return 0;
}
