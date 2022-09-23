#include<iostream>
using namespace std;

class emp{
private:
    string name;
    string company;
    int age;

public:
    emp(string name1, string company1, int age1){
        name = name1;
        company = company1;
        age = age1;
    }

    void setName(string name1){
        name = name1;
    }

    string getName(){
        return name;
    }

    void setCompany(string company1){
        company = company1;
    }

    string getCompany(){
        return company;
    }

    void setAge(int age1){
        if(age1 >= 18){
            age = age1;
        }
    }

    int getAge(){
        return age;
    }

    void intro(){
        cout << "name - " << name << endl;
        cout << "company - " << company << endl;
        cout << "age - " << age << endl;
    }
};

int main(){
    /*
    emp e1;
    e1.name = "isha";
    e1.company = "google";
    e1.age = 21;

    e1.intro();*/


    emp e2 = emp("Anupam", "ZS", 21);
    e2.intro();

    e2.setAge(35);

    cout << e2.getName() << " is " << e2.getAge() << " years old.";

    return 0;
}
