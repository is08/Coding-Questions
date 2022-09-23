#include<iostream>
using namespace std;

int main(){
    int test, year;
    cin >> test;

    while(test--){
        cin >> year;
        string days[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
        int count = 0;

        for(int i = 1900; i < year; i++){
            if(i % 4){
                count++;
            }
            else if(i % 100){
                count = count + 2;
            }
            else if(i % 400){
                count++;
            }
            else{
                count = count + 2;
            }
        }

        count = count % 7;

        cout << days[count] << endl;
    }
}
