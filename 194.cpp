#include<iostream>
using namespace std;

int main(){
    int test, ele, count = 0;
    cin >> test;

    while(test--){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                cin >> ele;

                if(ele <= 30){
                    count++;
                }
            }
        }

        if(count > 60){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }

    }

    return 0;
}
