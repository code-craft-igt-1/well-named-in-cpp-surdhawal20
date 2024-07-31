#ifndef TESTCOLORCODING_H
#define TESTCOLORCODING_H

#include "ColorPair.h"

namespace TelCoColorCoder {

    class TestColorCoding {
    public:
        static void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
        static void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
    };

}

#endif // TESTCOLORCODING_H