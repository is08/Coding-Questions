#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        string s1;
        cin >> s1;
        int chef_count = 0, player_count = 0, flag = 0;

        for(int i = 0; i < s1.length(); i++){
            if(s1[i] == '1')
                chef_count++;
            else if(s1[i] == '0')
                player_count++;

            if(chef_count == 10 && player_count == 10){
                int chef_lead = 0, player_lead = 0;
                for(int j = i+1; i < s1.length(); i++){
                    if(s1[j] == '1')
                        chef_lead++;
                    else if(s1[j] == '0')
                        player_lead++;

                    if(chef_lead == 2){
                        flag = 1;
                        break;
                    }
                    else if(player_lead == 2){
                        flag = 2;
                        break;
                    }
                }
            }
        }

        if(flag == 1){
            cout << "WIN" << endl;
        }
        else if(flag == 2){
            cout << "LOSE" <<endl;
        }
        else{
            if(chef_count > player_count)
                cout<<"WIN"<<endl;
            else
                cout<<"LOSE"<<endl;
        }

    }

    return 0;
}
