#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int test, a, b, c;
    cin >> test;

    while(test--){
        cin >> a >> b >> c;

        double x1 = (-1*b + sqrt(pow(b, 2) - 4 * a * c))/2*a;
        double x2 = (-1*b - sqrt(pow(b, 2) - 4 * a * c))/2*a;

        cout<<fixed<<setprecision(6)<<x1<<endl;
        cout<<fixed<<setprecision(6)<<x2<<endl;
    }

    return 0;
}
