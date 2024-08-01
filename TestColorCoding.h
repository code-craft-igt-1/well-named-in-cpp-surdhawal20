#ifndef TESTCOLORCODING_H
#define TESTCOLORCODING_H

#include "ColorPair.h"

namespace TelCoColorCoder {

    class TestColorCoding {
    public:
        static void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
        static void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
        static void testAllColorNumberPair();
    };

}

#endif // TESTCOLORCODING_H