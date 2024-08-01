#include "TestColorCoding.h"

int main() {
    using namespace TelCoColorCoder;

    TestColorCoding::testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
    TestColorCoding::testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

    TestColorCoding::testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
    TestColorCoding::testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);

    TestColorCoding::testAllColorNumberPair();

    return 0;
}