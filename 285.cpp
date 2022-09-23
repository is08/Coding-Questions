#include<iostream>
using namespace std;

int main(){
    int t, n, a, b, c, d, p, q, y;
    cin >> t;

    while(t--){
        cin >> n >> a >> b >> c >> d >> p >> q >> y;
        int x[n];

        for(int i = 0; i < n; i++){
            cin >> x[i];
        }

        //two types of time -> feet, train
        //time_feet will be the time needed to travel from b to a on feet
        //time_train will be the time needed to travel on feet to c, then time on train from c to d, then time on feet from d to b


        int time_feet = abs(x[b - 1] - x[a - 1]) * p;

        int time_train = 0;

        if(abs(x[c - 1] - x[a - 1]) * p <= y){
            time_train += y + (abs(x[d - 1] - x[c - 1]) * q) + (abs(x[b - 1] - x[a - 1]) * p);
        }

        cout << min(time_feet, time_train);
    }

    return 0;
}
