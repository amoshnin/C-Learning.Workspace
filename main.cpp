#include <iostream>
using std::string;

// Object Oriented Programming (OOP)
// Used to represent real-life entities in the program
// (ex: represent a car with all its characteristics (attributes) and functions (methods))

// Int, Float Double, Character => built-in data types
// Class => user-defined data types (ex: to store a user with multiple attributes and methods)

class Employee
{
public: // <= Access Modifier (of attributes/methods below until next access modifier)

    // Attributes:
    string Name;
    string Company;
    int Age;

    // Constructors:
    Employee()
    { // (default constructor)
        Name = "DefaultName";
        Company = "DefaultCompany";
        Age = 20;
    }

    Employee(string name, string company, int age)
    { // (not a default constructor)
        Name = name;
        Company = company;
        Age = age;
    }

    // Methods:
    void introduceYourself()
    {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Company: " << Company << std::endl;
        std::cout << "Age: " << Age << std::endl;
    }
};

// Rules:
// By default, all members (attributes & methods) inside the class are 'private' by default

// Access Modifiers:
// **private** => whatever is private inside the class, it will not be accesible outside the class
// **public** => whatever is public inside the class, it will be accesible both (inside & outside) the class
// **protected* => whatever is public inside the class, is something in between (public and private)
//           => ... (to be explained)

// Constructor => special type of method that is invoked each time that an object of a class is created
// - Constructor Method initialises the Attributes of the Class
// - Constructor Method has No Return Type (doesn't return anything)
// - Constructor Method has the Same Name as the Class

int main()
{
    Employee e1 = Employee("Artem", "Google", 25);
    e1.introduceYourself();

    Employee e2;
    e2.introduceYourself();
}