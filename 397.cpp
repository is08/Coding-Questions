#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string test="abcdefghijklmnop";
        for(int i=0 ; i<str.size() ;i+=4){
            int count=0;
            string temp=str.substr(i ,i+4);
            if(temp[0]=='1') {
                count+=8;}
            if(temp[1]=='1') {
                count+=4;}
            if(temp[2]=='1') {
                count+=2;}
            if(temp[3]=='1') {
                count+=1;}
            cout<<test[count];
        }
        cout<<endl;
    }
    return 0;
}
