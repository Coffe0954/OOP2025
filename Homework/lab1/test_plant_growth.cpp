#include <gtest/gtest.h>
#include "plant_growth.h"

TEST(PlantGrowthTest, BasicCase) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 910), 10);
}

TEST(PlantGrowthTest, ReachesInFirstDay) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 50), 1);
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 100), 1);
}

TEST(PlantGrowthTest, ZeroDesiredHeight) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 0), 0);
}

TEST(PlantGrowthTest, NoNightDecrease) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 0, 500), 5);
}

TEST(PlantGrowthTest, LargeValues) {
    EXPECT_EQ(calculateDaysToReachHeight(10, 1, 100), 11);
}

TEST(PlantGrowthTest, EdgeCaseExactDayEnd) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 100), 1);
}

TEST(PlantGrowthTest, EdgeCaseJustBeforeNight) {
    EXPECT_EQ(calculateDaysToReachHeight(100, 10, 910), 10);
}