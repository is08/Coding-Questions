#include<iostream>
using namespace std;

int main(){
    int test, ele, one = 0;
    cin >> test;

    while(test--){
        for(int i = 0; i < 30; i++){
            cin >> ele;

            if(ele == 1)
                one++;
            else if(ele == 0 && one <= 5)
                one = 0;

            cout << "the number of consecutive ones is " << one << endl;
        }

        if(one > 5)
            cout << "#coderlifematters" << endl;
        else
            cout << "#allcodersarefun" << endl;
    }

    return 0;
}
