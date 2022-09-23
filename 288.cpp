#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int finish, distancetoBolt, tigerAcceleration, boltSpeed;
        cin >> finish >> distancetoBolt >> tigerAcceleration >> boltSpeed;

        float timeTiger = sqrt(2*(finish + distancetoBolt) / tigerAcceleration);
        float timeBolt = finish / boltSpeed;

        if(timeTiger > timeBolt){
            cout << "Bolt" << endl;
        }
        else if(timeBolt > timeTiger){
            cout << "Tiger" << endl;
        }
    }

    return 0;
}
