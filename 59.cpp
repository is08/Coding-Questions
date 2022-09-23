#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int a, b;
        cin >> a >> b;

        int i = 1;
        string turn = "limak";


        while(a >= 0 && b >= 0){
            if(i <= a && turn == "limak"){
                a = a - i;
                i++;
                turn = "bob";
                continue;
            }
            else if(i <= b && turn == "bob"){
                b = b - i;
                i++;
                turn = "limak";
                continue;
            }
            else if(a < i && turn == "limak"){
                cout<<"Bob"<<endl;
                break;
            }
            else if(b < i && turn == "bob"){
                cout<<"Limak"<<endl;
                break;
            }
        }

    }

    return 0;

}
