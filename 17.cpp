#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int i, smaller, gcd = 0;


    if(n1 < n2){
        smaller = n1;
    }
    else if(n2 < n1){
        smaller = n2;
    }
    else{
        return n1;
    }

    for(i = 1; i <= smaller; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    return gcd;
}

/*int rgcd(int n1, int n2){
    if(n1 == 0)
        return n2;
    else if (n2 == 0)
        return n1;
    else
        rgcd(n2, n1 % n2);
}*/

int lcm(int n1, int n2){
    return (n1 * n2)/gcd(n1, n2);
}

int main(){
    int len, n1, n2;
    cin>>len;

    while(len--){
        cin>>n1>>n2;
        cout<<gcd(n1, n2)<<" "<<lcm(n1, n2)<<endl;
        //cout<<rgcd(n1, n2)<<endl;
    }

    return 0;
}
