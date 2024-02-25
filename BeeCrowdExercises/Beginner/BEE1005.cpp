
// Created by gulhe on 23/02/2024.

#include <iostream>
#include <iomanip>


int main(){
    float a,b;

    std::cin >> a;
    std::cin >> b;

    double result = (a * 3.5 + b  * 7.5) / (11);

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << result << std::endl;

    return 0;
}