#include<iostream>
using namespace std;

int main(){
    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        string s;

        int countc = 0, counto = 0, countd = 0, counte = 0, counth = 0, countf = 0;

        for(int i = 0; i < n; i++){
            cin >> s;

            for(int j = 0; j < s.length(); j++){
                if(s[j] == 'c'){
                    countc++;
                }
                else if(s[j] == 'o'){
                    counto++;
                }
                else if(s[j] == 'd'){
                    countd++;
                }
                else if(s[j] == 'e'){
                    counte++;
                }
                else if(s[j] == 'h'){
                    counth++;
                }
                else if(s[j] == 'f'){
                    countf++;
                }
            }

        }

        int count = 0;

        //cout << "counts are " << countc << " " << counto << " " << countd << " " << counte << " " << counth << " " << countf << endl;

        while(countc >= 2 && counto >= 1 && countd >= 1 && counte >= 1 && counth >= 1 && countf >= 1){
            count++;
            countc = countc - 2;
            counto = counto - 1;
            countd = countd - 1;
            counte = counte - 2;
            counth = counth - 1;
            countf = countf - 1;
        }

        cout << count << endl;

    }

    return 0;
}
