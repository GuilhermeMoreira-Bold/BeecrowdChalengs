//
// Created by gulhe on 25/02/2024.
//
#include <iostream>
#include <iomanip>
#include <string>

int main(){

    std::string employeeName = "";
    double salary, bonus;

    std::cin >> employeeName;
    std::cin >> salary;
    std::cin >> bonus;

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salary + (bonus * 0.15) << std::endl;

    return 0;
}