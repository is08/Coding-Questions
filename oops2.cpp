#include<iostream>
using namespace std;

class currency{
    private:
        string sign;
        unsigned long dollars;
        unsigned long cents;
    public:
        //constructor - parametrized
        currency(string s = "plus", unsigned long d = 0, unsigned int c = 0);
        //currency(string s, unsigned long d, unsigned int c);
        //destructor - releases the memory occupied by the object
        ~currency(){};
        bool Set(string s, unsigned long d, unsigned int c){
            if(c > 99)
                return false;

            sign = s;
            dollars = d;
            cents = c;
            return true;
        }
        bool Set(float a){
            if(a < 0){
                sign = "minus";
                a = -a;
            }
            else{
                sign = "plus";
            }
            dollars = a;
            cents = (a + 0.005 - dollars) * 100;
            return true;
        }
        string get_sign() const{
            return sign;
        }
        unsigned long get_dollars() const{
            return dollars;
        }
        unsigned int get_cents() const{
            return cents;
        }
        currency add(currency& x) const{
            long temp1, temp2, temp3;
            currency ans;

            temp1 = dollars * 100 + cents;
            if(sign == "minus")
                temp1 = -temp1;

            temp2 = x.dollars * 100 + x.cents;
            if(x.sign == "minus")
                temp2 = -temp2;

            temp3 = temp1 + temp2;

            if(temp3 < 0){
                ans.sign = "minus";
                temp3 = -temp3;
            }
            else{
                ans.sign = "plus";
            }

            ans.dollars = temp3 / 100;
            ans.cents = (temp3 - ans.dollars) * 100;

            return ans;
        }

        currency& increment(){
            dollars = dollars + 1;
            return *this;
        }
        void output() const{
            if(sign == "minus")
                cout << "-";
            cout << "$" << dollars << ".";
            if(cents < 0)
                cout << "0";
            cout << cents << endl;
        }
        void input(){
            string s;
            unsigned long d;
            unsigned int c;

            cout << "enter the sign: ";
            cin >> s;
            cout << "enter the dollar: ";
            cin >> d;
            cout << "enter the cents: ";
            cin >> c;

            sign = s;
            dollars = d;
            cents = c;
        }
        currency subtract(currency& x) const{
            long temp1, temp2, temp3;
            currency ans;

            temp1 = dollars * 100 + cents;
            if(sign == "minus")
                temp1 = -temp1;

            temp2 = x.dollars * 100 + x.cents;
            if(x.sign == "minus")
                temp2 = -temp2;

            temp3 = temp1 - temp2;

            if(temp3 < 0){
                ans.sign = "minus";
                temp3 = -temp3;
            }
            else{
                ans.sign = "plus";
            }

            ans.dollars = temp3 / 100;
            ans.cents = (temp3 - ans.dollars) * 100;

            return ans;
        }
        currency percentage(float x) const{
            long temp1, temp2;
            currency ans;

            temp1 = dollars * 100 + cents;
            if(sign == "minus")
                temp1 = -temp1;


            temp2 = (x / 100) * temp1;

            if(temp2 < 0){
                ans.sign = "minus";
                temp2 = -temp2;
            }
            else{
                ans.sign = "plus";
            }

            ans.dollars = temp2 / 100;
            ans.cents = (temp2 - ans.dollars) * 100;

            return ans;
        }
        currency multiply(float& x) const{
            long temp1, temp3;
            currency ans;

            temp1 = dollars * 100 + cents;
            if(sign == "minus")
                temp1 = -temp1;


            temp3 = temp1 * x;

            if(temp3 < 0){
                ans.sign = "minus";
                temp3 = -temp3;
            }
            else{
                ans.sign = "plus";
            }

            ans.dollars = temp3 / 100;
            ans.cents = (temp3 - ans.dollars) * 100;

            return ans;
        }
        currency divide(float& x) const{
            long temp1, temp3;
            currency ans;

            temp1 = dollars * 100 + cents;
            if(sign == "minus")
                temp1 = -temp1;


            temp3 = temp1 / x;

            if(temp3 < 0){
                ans.sign = "minus";
                temp3 = -temp3;
            }
            else{
                ans.sign = "plus";
            }

            ans.dollars = temp3 / 100;
            ans.cents = (temp3 - ans.dollars) * 100;

            return ans;
        }
};

currency::currency(string s, unsigned long d, unsigned int c){
    if(c > 99){
        cout << "cents should not be greater than 99 " << endl;
        exit(1);
    }
    sign = s;
    dollars = d;
    cents = c;
}


int main(){
    currency a, b, c("plus", 3, 50), d, e, res;
    a.Set("minus", 2, 25);
    d.Set(7.00);
    e = c.add(a);
    //b.input();
    res = d.percentage(50);
    res.output();
    return 0;
}
