#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    while(testCases--){
        int dragonDSA, dragonTOC, dragonDM, slothDSA, slothTOC, slothDM;
        cin >> dragonDSA >> dragonTOC >> dragonDM;
        cin >> slothDSA >> slothTOC >> slothDM;

        int dragonSum = dragonDM + dragonDSA + dragonTOC;
        int slothSum = slothDM + slothDSA + slothTOC;

        if(dragonSum > slothSum){
            cout << "DRAGON" << endl;
        }
        else if(dragonSum < slothSum){
            cout << "SLOTH" << endl;
        }
        else if(dragonSum == slothSum){
            if(dragonDSA > slothDSA){
                cout << "DRAGON" << endl;
            }
            else if(dragonDSA < slothDSA){
                cout << "SLOTH" << endl;
            }
            else if(dragonDSA == slothDSA){
                if(dragonTOC > slothTOC){
                    cout << "DRAGON" << endl;
                }
                else if(dragonTOC < slothTOC){
                    cout << "SLOTH" << endl;
                }
                else if(dragonTOC == slothTOC){
                    if(dragonDM > slothDM){
                        cout << "DRAGON" << endl;
                    }
                    else if(dragonDM < slothDM){
                        cout << "SLOTH" << endl;
                    }
                    else if(dragonDM == slothDM){
                        cout << "TIE" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
