#include "TestColorCoding.h"
#include <assert.h>

namespace TelCoColorCoder {

    void TestColorCoding::testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
        ColorPair colorPair = ColorOperations::getColorFromPairNumber(pairNumber);
        std::cout << "Pair Color is : " << colorPair.toString() << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void TestColorCoding::testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
        int pairNumber = ColorOperations::getPairNumberFromColor(major, minor);
        std::cout << "Pair Number is : " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    void TestColorCoding::testAllColorNumberPair()
    {
        for (int pairNumber = 1; pairNumber <= ColorOperations::numberOfMajorColors * ColorOperations::numberOfMinorColors; ++pairNumber) {
            ColorPair colorPair = ColorOperations::getColorFromPairNumber(pairNumber);

            MajorColor expectedMajor = static_cast<MajorColor>((pairNumber - 1) / ColorOperations::numberOfMinorColors);
            MinorColor expectedMinor = static_cast<MinorColor>((pairNumber - 1) % ColorOperations::numberOfMinorColors);

            assert(colorPair.getMajor() == expectedMajor && "Major color mismatch");
            assert(colorPair.getMinor() == expectedMinor && "Minor color mismatch");
        }
    }
}
