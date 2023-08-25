#include <iostream>
#include <string>

using namespace std;

struct Car {

    string make;
    string model;
    int year;
    double price;
};

int main() {

    const int NUM_CARS = 3;
    Car cars[NUM_CARS];

    for(int i = 0; i < NUM_CARS; i++) {

        cout << "Car " << i+1 << " Information:" << endl;

        cout << "Enter car make: ";
        cin >> cars[i].make;

        cout << "Enter car model: ";
        cin >> cars[i].model;

        cout << "Enter car year: ";
        cin >> cars[i].year;

        cout << "Enter car price: ";
        cin >> cars[i].price;
    }

    double total_price = 0;

    for(int i = 0; i < NUM_CARS; i++) {

        cout << "Car " << i+1 << ":" << endl;
        cout << "Make: " << cars[i].make << endl;
        cout << "Model: " << cars[i].model << endl;
        cout << "Year: " << cars[i].year << endl;
        cout << "Price: $" << cars[i].price << endl;
        cout << endl;

        total_price += cars[i].price;

    }

    cout << "Total price of all cars: $" << total_price << endl;

    return 0;

}