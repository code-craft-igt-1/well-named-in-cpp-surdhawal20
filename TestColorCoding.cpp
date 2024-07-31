#include "TestColorCoding.h"
#include <assert.h>

namespace TelCoColorCoder {

    void TestColorCoding::testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
        ColorPair colorPair = ColorUtils::getColorFromPairNumber(pairNumber);
        std::cout << "Pair Color is : " << colorPair.toString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void TestColorCoding::testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
        int pairNumber = ColorUtils::getPairNumberFromColor(major, minor);
        std::cout << "Pair Number is : " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

}
