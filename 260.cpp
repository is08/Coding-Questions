#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    int a1, a2, a3, c1, c2, c3;

    while(t--){
        cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
        int flag = 0;

        if(((a1 < a2) && (c2 < c1)) || ((a2 < a1) && (c1 < c2))){
            flag = 1;
        }
        else if((a2 < a3 && c3 < c2) || (a3 < a2 && c2 < c3)){
            flag = 1;
        }
        else if((a1 < a3 && c3 < c1) || (a3 < a1 && c1 < c3)){
            flag = 1;
        }
        else if(a1 == a2 && c1 != c2){
            flag = 1;
        }
        else if(a2 == a3 && c2 != c3){
            flag = 1;
        }
        else if(a1 == a3 && c1 != c3){
            flag = 1;
        }

        if(flag == 1){
            cout << "NOT FAIR" << endl;
        }
        else{
            cout << "FAIR" << endl;
        }


    }

    return 0;
}
