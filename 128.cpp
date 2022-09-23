#include<iostream>
using namespace std;

int main(){
    int test, n, p;
    cin >> test;

    while(test--){
        cin >> n >> p;
        int cakewalk = 0, hard = 0, arr;

        for(int i = 0; i < n; i++){
            cin >> arr;

            if(arr <= p/10){
                hard++;
            }
            else if(p/2 <= arr){
                cakewalk++;
            }
        }


        if(cakewalk == 1 && hard == 2){
            cout << "yes" <<endl;
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
