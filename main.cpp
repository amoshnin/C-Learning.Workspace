#include <iostream>
using std::string;

// Object Oriented Programming (OOP)
// Used to represent real-life entities in the program
// (ex: represent a car with all its characteristics (attributes) and functions (methods))

// Int, Float Double, Character => built-in data types
// Class => user-defined data types (ex: to store a user with multiple attributes and methods)

class Employee
{
public:
    string Name;
    string Company;
    int Age;

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

int main()
{
    Employee e1;

    e1.Name = "Artem";
    e1.Company = "Google";
    e1.Age = 21;

    e1.introduceYourself();
}