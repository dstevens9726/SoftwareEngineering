#include <iostream>
using namespace std;


// Parent class Pet
class Pet {
protected:
    int _age;       // The underscore is a convention to remind us this is a protected member
    string _name;


public:
    Pet(string name, int age) {
        _age = age;
        _name = name;
        cout << "Constructor for Pet " << _name << endl;
    }

    void setAge(int newAge) { // this will update the age if it changes
        if ((newAge != _age)&&(newAge >= 0)&&(newAge <= 30)) {
            cout << "your pet " << _name << " has grown up.... or has it gotten younger * vsauce music *. no, probably not. It is now " << newAge << endl;
            _age = newAge; //updates the age variable with the new age
        }
    
    }
    int getAge() {
        return _age; //returns copy of age
    }
    void setName(string newName) {
        //Update the name, but only if it has changed
        if (newName != _name) {
            cout << "Names changed from << " << _name << " to " << _name << endl;
            _name = newName;
        }
    }

    string getName() {
        //Read only copy returned as = does a copy for string
        return _name;
    }
};


// Child class Dog
class Dog : public Pet {

public:
    Dog(string name, int age) : Pet(name, age)
    {
        //Further initialisation here
        cout << "Constructor for Dog " << name << endl;
    }

    void bark() {
        cout << _name << " says Woof" << endl;
    }
};


// Child class Cat
class Cat : public Pet {

public:
    Cat(string name, int age) : Pet(name, age) {
        //Further initialisation here
        cout << "Constructor for Cat " << name << endl;
    }

    void meow() {
        cout << _name << " says Woof" << endl;
    }
};



int main()
{
    Pet p1("Carrot", 2);
    Dog d1("Scrapper", 5);
    Cat c1("Furry", 3);

    c1.setAge(15);
}