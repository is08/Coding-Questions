#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t, tr, dr, ts, ds;
    cin >> t;

    while(t--){
        cin >> tr;
        int Tr[tr];

        for(int i = 0; i < tr; i++){
            cin >> Tr[i];
        }

        //sort(Tr, Tr + tr);

        cin >> dr;
        int Dr[dr];

        for(int i = 0; i < dr; i++){
            cin >> Dr[i];
        }

        //sort(Dr, Dr + dr);

        cin >> ts;
        int Ts[ts];

        for(int i = 0; i < ts; i++){
            cin >> Ts[i];
        }


        //sort(Ts, Ts + ts);

        cin >> ds;
        int Ds[ds];

        for(int i = 0; i < ds; i++){
            cin >> Ds[i];
        }

        //sort(Ds, Ds + ds);

        int flag1 = 0, flag2 = 0;

        for(int i = 0; i < ts; i++){
            for(int j = 0; j < tr; j++){
                if(Ts[i] == Tr[j]){
                    flag1++;
                    break;
                }
            }
        }

        for(int i = 0; i < ds; i++){
            for(int j = 0; j < dr; j++){
                if(Ds[i] == Dr[j]){
                    flag2++;
                    break;
                }
            }
        }

        //cout << "flag1 & ts is " << flag1 << " & " << ts << " and flag2 & ds is " << flag2 << " & " << ds << endl;

        if(flag1 == ts && flag2 == ds){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
