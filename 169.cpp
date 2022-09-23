#include<iostream>
using namespace std;

int main(){
    int n, rem, d, temp2;
    cin >> n >> d;
    int new_num = 0, flag = 0;
    int temp = n;

    //reversing the number
    while(temp){
        rem = temp % 10;
        new_num = new_num * 10 + rem;
        temp = temp / 10;
    }

    //finding d in the reversed number
    while(new_num){
        rem = new_num % 10;
        if(rem == d){
            temp2 = new_num / 10;
            flag = 1;
            break;
        }
        new_num = new_num / 10;
    }

    int maximum = -1e6;

    if(flag == 0){
        cout << "Digit is not present" << endl;
    }

    //find the maximum digit
    while(temp2 && flag == 1){
        rem = temp2 % 10;
        if(rem > maximum){
            maximum = rem;
        }
        temp2 = temp2 / 10;
    }

    if(flag == 1){
        cout << maximum << endl;
    }

    return 0;
}
