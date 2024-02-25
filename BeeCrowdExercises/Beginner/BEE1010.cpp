//
// Created by gulhe on 25/02/2024.
//
#include <iostream>
#include <iomanip>

int main(){

    int product1[2] = {};
    int product2[2] = {};
    float priceProd1;
    float priceProd2;

    for(int i = 0; i < 2; i ++){
        std::cin >> product1[i];
    }
    std::cin >> priceProd1;
    for(int i = 0; i < 2; i ++){
        std::cin >> product2[i];
    }
    std::cin >> priceProd2;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << product1[1] *priceProd1 + product2[1] * priceProd2 << std::endl;

    return 0;
}