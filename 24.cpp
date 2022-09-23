#include<iostream>
using namespace std;

int main(){
    int len;
    cin>>len;

    while(len--){
        int hardness, tensile, grade;
        float carbon_content;

        cin>>hardness>>carbon_content>>tensile;

        if(hardness > 50 && carbon_content < 0.7 && tensile > 5600){
            grade = 10;
        }
        else if(hardness > 50 && carbon_content < 0.7){
            grade = 9;
        }
        else if(carbon_content < 0.7 && tensile > 5600){
            grade = 8;
        }
        else if(hardness > 50 && tensile > 5600){
            grade = 7;
        }
        else if(hardness > 50 || carbon_content < 0.7 || tensile > 5600){
            grade = 6;
        }
        else{
            grade = 5;
        }

        cout<<grade<<endl;

    }

    return 1;
}
