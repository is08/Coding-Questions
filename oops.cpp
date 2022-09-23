//let's study oops - again why do i keep forgetting stuff :(
//represent real life entity in code
//class is building block of oops - user defined data type


#include<iostream>
using namespace std;

class abstractEmp{
    virtual void askForPromotion() = 0;
};



class Employee : abstractEmp{
private:
    string name;
    string company;
    int age;

public:
    void introduce(){
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }

    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }

    void set_name(string Name){
        name = Name;
    }

    string get_name(){
        return name;
    }

    void set_company(string Company){
        company = Company;
    }

    string get_company(){
        return company;
    }

    void set_age(int Age){
        if (Age >= 18){
            age = Age;
        }
        else{
            cout << "nopes can't dosville" << endl;
        }
    }

    int get_age(){
        return age;
    }

    void askForPromotion(){
        if(age > 30){
            cout << name << " got promoted!" << endl;
        }
        else{
            cout << "No promotion" << endl;
        }
    }

    void virtual work(){
        cout << name << " is checking email, task backlog" << endl;
    }
};


//Dev is child class AND Employee is parent class
class Dev: public Employee{
public:
    string favProgrammingLang;
    Dev(string Name, string Company, int Age, string favCoding)
        : Employee(Name, Company, Age)
    {
        favProgrammingLang = favCoding;
    }

    void fixed_bug(){
        cout << get_name() << " fixed bug using " << favProgrammingLang << endl;
    }

    void work(){
        cout << get_name() << " is writing code" << endl;
    }
};

class Teacher: public Employee{
public:
    string subject;

    Teacher(string Name, string Company, int Age, string Subject)
        :Employee(Name, Company, Age)
    {
        subject = Subject;
    }

    void prepare_lesson(){
        cout << get_name() << " is preparing for " << subject << endl;
    }

    void work(){
        cout << get_name() << " is teaching " << subject << endl;
    }
};

int main(){
    Employee employee1 = Employee("isha", "google", 22);
    //employee1.introduce();
    //employee1.askForPromotion();
    //employee1.set_age(31);
    //employee1.askForPromotion();

    Dev d1 = Dev("anupam", "amazon", 22, "C++");
    //d1.fixed_bug();

    Teacher t1 = Teacher("shriya", "dps", 23, "maths");
    //t1.prepare_lesson();

    Employee* e1 = &d1;
    Employee* e2 = &t1;

    e1->work();
    e2->work();

    return 0;
}
