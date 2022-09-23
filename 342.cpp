#include<iostream>
using namespace std;

int main(){
    int t, n, h, y1, y2, l;
    cin >> t;

    while(t--){
        int t, x, countOfBarriers = 0;
        cin >> n >> h >> y1 >> y2 >> l;

        while(n--){
            cin >> t >> x;


            if(t == 1){
                if(h - y1 <= x){
                    countOfBarriers++;
                }
                else{
                    if(l > 1){
                        l--;
                            countOfBarriers++;
                    }
                }
            }
            if(t == 2){
                if(y2 >= x){
                    countOfBarriers++;
                }
                else{
                    if(l > 1){
                        l--;
                        countOfBarriers++;
                    }
                }
            }
        }
        cout << countOfBarriers << endl;
    }

    return 0;
}
