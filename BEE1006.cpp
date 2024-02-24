//
// Created by gulhe on 24/02/2024.
//
//https://judge.beecrowd.com/en/problems/view/1006
#include <iostream>
#include <iomanip>
int main(){
    double A,B,C;

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    std::cout << "MEDIA = "<< std::fixed << std::setprecision(1) << ((A * 2) + (B * 3) + (C * 5)) / (10) << std::endl;

    return 0;
}