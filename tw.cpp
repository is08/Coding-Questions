#include<iostream>
using namespace std;


class GoFood{
private:
    string SpecialDay;
    string peakHour;
    string nightOrder;
    int final_amt;
public:
    void getOrder(){
        cout << "SpecialDay: ";
        cin >> SpecialDay;
        cout << "Peak Hour: ";
        cin >> peakHour;
        cout << "Night Order: ";
        cin >> nightOrder;


        int input, pizza_cost = 150, burger_cost = 100, coke_cost = 50, brownies_cost = 60;
        final_amt = 0;
        while(1){
            cout << "***Items***" << endl;
            cout << "For pizza, press 1." << endl;
            cout << "For Burger, press 2. " << endl;
            cout << "For Coke, press 3. " << endl;
            cout << "For Brownies, press 4." << endl;
            cout << "To exit press 5. ";
            cin >> input;

            if(input == 1){
                final_amt += pizza_cost;
            }
            else if(input == 2){
                final_amt += burger_cost;
            }
            else if(input == 3){
                final_amt += coke_cost;
            }
            else if(input == 4){
                final_amt += brownies_cost;
            }
            else if(input == 5){
                break;
            }
            else{
                cout << "invalid input, please check the menu" << endl;
            }

        }
    }
    void calculateBill(){
        int tax = 0, peakHourCost = 30, specialDayCost = 50, nightOrderCost = 20, normalDeliveryCost = 20, tempPeakHourCost = 0, tempSpecialDayCost = 0, tempNightOrderCost = 0;

        /*
        if(SpecialDay == "Yes"){
            tax += specialDayCost;
        }
        if(peakHour == "Yes"){
            tax += peakHourCost;
        }
        if(nightOrder == "Yes"){
            tax += nightOrderCost;
        }
        if(SpecialDay != "Yes" && peakHour != "Yes" && nightOrder !=  "Yes" && final_amt < 150){
            tax += normalDeliveryCost;
        }*/


        if(SpecialDay == "Yes"){
            tempSpecialDayCost = specialDayCost;
        }
        if(peakHour == "Yes"){
            tempPeakHourCost = peakHourCost;
        }
        if(nightOrder == "Yes"){
            tempNightOrderCost = nightOrderCost;
        }

        int tempMax = max(tempSpecialDayCost, tempPeakHourCost);
        tax += max(tempMax, tempNightOrderCost);

        if(SpecialDay != "Yes" && peakHour != "Yes" && nightOrder !=  "Yes" && final_amt < 150){
            tax += normalDeliveryCost;
        }






        float gst = 0.05 * final_amt;
        float bill_amt = final_amt + gst + tax;

        cout << "Total Bill: " << bill_amt << endl;
    }
};


int main(){
    GoFood g1;
    g1.getOrder();
    g1.calculateBill();
}
