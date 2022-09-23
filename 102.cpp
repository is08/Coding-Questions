#include<iostream>
using namespace std;

string num_roman(int n){

    if(n == 1)
        return "I";
    if(n == 4)
        return "IV";
    if(n == 5)
        return "V";
    if(n == 9)
        return "IX";
    if(n == 10)
        return "X";
    if(n == 40)
        return "CL";
    if(n == 50)
        return "L";
    if(n == 90)
        return "XC";
    if(n == 100)
        return "C";
    if(n == 400)
        return "CD";
    if(n == 500)
        return "D";
    if(n == 900)
        return "CM";
    if(n == 1000)
        return "M";

}



int main(){
    int n;
    cin >> n;

    int arr[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    int i = 12;

    while(n > 0){
        int quo = n / arr[i];
        while(quo--){
            cout<<num_roman(arr[i]);
            n = n % arr[i];
        }
        i--;
    }


    return 0;
}
