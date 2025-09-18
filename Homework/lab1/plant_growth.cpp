#include "plant_growth.h"

int calculateDaysToReachHeight(int upSpeed, int downSpeed, int desiredHeight) {
    if (desiredHeight <= 0) return 0;
    if (upSpeed >= desiredHeight) return 1;
    int currentHeight = 0;
    int days = 0;
    while (currentHeight < desiredHeight) {
        days++;
        currentHeight += upSpeed;
        
        if (currentHeight >= desiredHeight) {
            return days;
        }
        currentHeight -= downSpeed;
    }
    return days;
}