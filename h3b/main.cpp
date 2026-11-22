
#include <iostream>
#include <memory>
#include <vector>
using namespace std;


class Animal {
public:
    virtual void callOut() {
        cout << "Eläin ääntelee" << endl;
    }

    virtual ~Animal() {
        cout << "Animal tuhoutuu" << endl;
    }
};


class Dog : public Animal {
public:
    void callOut() override {
        cout << "Koira haukkuu" << endl;
    }

    ~Dog() override {
        cout << "Dog tuhoutuu" << endl;
    }
};

int main() {

    Animal animal;
    animal.callOut();

    Dog dog;
    dog.callOut();

    unique_ptr<Animal> dogPtr = make_unique<Dog>();
    dogPtr->callOut();

    vector<unique_ptr<Animal>> animals;

    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Dog>());

    for (const auto& animal : animals) {
        animal->callOut();
    }

    return 0;
}
