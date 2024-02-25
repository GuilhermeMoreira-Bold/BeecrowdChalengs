//
// Created by gulhe on 25/02/2024.
//
#include <iostream>
#include <iomanip>

int main(){

    int employeeNumber, workedHours;
    float amount;

    std::cin >> employeeNumber;
    std::cin >> workedHours;
    std::cin >> amount;
    std::cout << "NUMBER = " << employeeNumber << "\nSALARY = U$ " <<std::fixed << std::setprecision(2) << amount * workedHours << std::endl;


    return 0;
}