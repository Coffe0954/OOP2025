#include <iostream>
#include "plant_growth.h"

int main() {
    std::cout << "PLANT GROWTH" << std::endl;
    std::cout << "============" << std::endl;
    
    int upSpeed, downSpeed, desiredHeight;
    
    std::cout << "Enter daily growth speed (m/day): "; //рост днем
    std::cin >> upSpeed;
    
    std::cout << "Enter nightly decrease speed (m/night): ";// падение ночью
    std::cin >> downSpeed;
    
    std::cout << "Enter desired height (m): ";// жлелаемая высота
    std::cin >> desiredHeight;
    
    if (upSpeed <= 0 || downSpeed < 0 || desiredHeight <= 0) {
        std::cout << "Error: value must be greater than zero" << std::endl;
        return 1;
    }
    
    int days = calculateDaysToReachHeight(upSpeed, downSpeed, desiredHeight);
    
    std::cout << "============" << std::endl;
    std::cout << "result:" << std::endl;
    std::cout << "rastenie dostignet height " << desiredHeight << "m" << std::endl;
    std::cout << "in " << days << " days" << std::endl;
    
    return 0;
}