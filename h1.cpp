#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;



void calcSum(int a, int b){
    cout << "summa: " << a + b;
}

void calcDiv(int a, int b){
    if(a == 0 || b == 0){
        cout << "\nnollalla ei voi jakaa!";
}
    else {
        cout << "\nosamaara: " << fixed << setprecision(2) << (float)a /b;
}
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (a == 0 ||b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a, b;

    cout << "Anna luku a: ";
    cin >> a;

    cout << "Anna luku b: ";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);

    try {
        float result = retDiv(a, b);
        cout << "\n" << a << "/" << b << " = "
             << fixed << setprecision(2) << result << endl;
    }
    catch (runtime_error& e) {
        cout << "\nError: " << e.what() << endl;
    }

    return 0;
}
