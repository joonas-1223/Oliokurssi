
#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    void printData();
    void setBrand(string newBrand);
    void setModel(string newModel);
    void setYearModel(int newYear);
};

#endif
