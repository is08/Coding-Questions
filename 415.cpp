#include<iostream>
using namespace std;

int main(){
    int t, x, y;
    cin >> t;

    while(t--){
        cin >> x >> y;
        string s;
        cin >> s;
        int countOfWorkingDays = 0, maximumLongestWorking = -1, temp = 0;

        if(s[0] == '1'){
            countOfWorkingDays++;
        }

        for(int i = 1; i < s.size(); i++){

            if(s[i] == '1'){
                countOfWorkingDays++;
                temp++;
            }
            else if(s[i] == '0' && s[i - 1] == '1'){
                maximumLongestWorking = max(maximumLongestWorking, temp);
                temp = 0;
            }
        }

        cout << "total working days is " << countOfWorkingDays << endl;
        cout << "temp is " << temp << endl;
        cout << (countOfWorkingDays * x) + (maximumLongestWorking * y) << endl;
    }

    return 0;
}
