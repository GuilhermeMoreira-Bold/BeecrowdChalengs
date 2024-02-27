//
// Created by gulhe on 26/02/2024.
//
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    int radius;

    std::cin >> radius;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << (4.0/3) * 3.14159 * std::pow(radius,3) << std::endl;

    return 0;
}