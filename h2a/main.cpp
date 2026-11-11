
#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // CAR
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    car.printData();

    cout << endl;

    // RECTANGLE
    Rectangle rectangle;

    rectangle.setWidth(5.0);
    rectangle.setHeight(3.0);

    cout << "Pinta-ala: "
         << rectangle.getArea() << endl;

    cout << "Ymparysmitta: "
         << rectangle.getCircum() << endl;

    cout << endl;

    // STUDENT
    unique_ptr<Student> student =
        make_unique<Student>();

    student->setName("Matti");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << "Nimi: "
         << student->getName() << endl;

    cout << "Opiskelijanumero: "
         << student->getStudentNumber() << endl;

    cout << "Keskiarvo: "
         << student->getAverage() << endl;

    return 0;
}
