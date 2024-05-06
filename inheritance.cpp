#include <iostream>
using std::string;

// Pillars of OOP:
// - Encapsulation => Bundling data (variables) and methods (functions) that operate on the data teoghter
//                    and hiding them from the outside world
//                    Then, only allowing access through specific methods (often called Getters and Setters).
//                    This helps in keeping the data safe from unintended changes/misuse
// - Abstraction => Abstraction is like using a TV remote. You don't need to know how the TV works internally; you just press a button, and it does what it's supposed to do.
//                  Similarly, abstraction allows you to focus on what an object does rather than how it does it.
//                  It hides the complex implementation details and provides a simplified interface for interacting with objects.
// - Inheritance =>
//                  We have a parent/base/super class.
//                  Then, we can have multiple child/derived classes.
// - Polymorphism =>

// Class that follows Encapsulation (attributes are all private) (getter and setter functions are created)

// Interface Class (we abstract the complex logic of askForPromotion() as it involves considering many various employee's characteristics)
// Classes that sign the Interface Class, must provide implementation for askForPromotion() method
class AbstractEmployee { // <= Abstract Class / Interface Class
public:
    virtual void askForPromotion() = 0; // abstract function
};

class Employee : AbstractEmployee {
public:
    Employee() {
        Name = "DefaultName";
        Company = "DefaultCompany";
        Age = 20;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void introduceYourself() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }

    void askForPromotion() {
        if (Age > 30) {
            std::cout << Name << " got promoted!" << std::endl;
        } else {
            std::cout << Name << ", sorry, no promotion for you!" << std::endl;
        }
    }

    string getName() {
        return Name;
    }

    void setName(string name) {
        Name = name;
    }

    string getCompany() {
        return Company;
    }

    void setCompany(string company) {
        Company = company;
    }

    int getAge() {
        return Age;
    }

    void setAge(int age) {
        if (age >= 18) { // Validation rules in Setter Method
            Age = age;
        }
    }

private:
    string Name;
    string Company;
    int Age;
};

int main() {
    Employee e1 = Employee("Artem", "Google", 25);
    e1.introduceYourself();

    Employee e2;
    e1.introduceYourself();

    e1.setName("John");
    e1.setCompany("Netflix");
    e1.setAge(99);
    e1.introduceYourself();

    e2.setName("Maria");
    e2.setCompany("Amazon");
    e2.setAge(16);
    std::cout << "Name: " << e2.getName() << std::endl;
    std::cout << "Company: " << e2.getCompany() << std::endl;
    std::cout << "Age: " << e2.getAge() << std::endl;

    e1.askForPromotion();
    e2.askForPromotion();
}