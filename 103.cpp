#include<iostream>
using namespace std;

int main(){
    int price[8] = {3, 3, 5, 0, 0, 3, 1, 4};
    int length = 8, index = 0, minimum = 999, flag = 1, sum = 0;

    for(int i = 0; i < length - 1; i++){
        if(price[i] <= minimum){
            minimum = price[i];
            index = i;
        }
    }


    while(flag <= 2){

        if(index == length - 1)
            break;

        int buy_price = price[index];

        while(index < length - 1 && price[index + 1] >= price[index]){
            index++;
        }

        int sell_price = price[index];
        flag++;

        sum = sum + sell_price - buy_price;

        while(index < length - 1 && price[index + 1] <= price[index]){
            index++;
        }
    }

    cout<<sum<<endl;

    return 0;
}
