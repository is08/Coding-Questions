#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        int a, b, chef_points = 0, morty_points = 0, temp1, temp2, rem;

        for(int i = 0; i < n; i++){
            cin >> a >> b;

            temp1 = 0, temp2 = 0;

            while(a){
                rem = a % 10;
                temp1 += rem;
                a = a/10;
            }

            while(b){
                rem = b % 10;
                temp2 += rem;
                b = b/10;
            }

            if(temp1 > temp2){
                chef_points++;
            }
            else if(temp2 > temp1){
                morty_points++;
            }
            else if(temp1 == temp2){
                morty_points++;
                chef_points++;
            }
        }

        if(chef_points > morty_points){
            cout << "0 " << chef_points << endl;
        }
        else if(morty_points > chef_points){
            cout << "1 " << morty_points << endl;
        }
        else if(chef_points == morty_points){
            cout << "2 " << chef_points << endl;
        }


    }

    return 0;
}
