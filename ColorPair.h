#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <iostream>
#include <string>

namespace TelCoColorCoder {
    enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    class ColorPair {
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor() const;
        MinorColor getMinor() const;
        std::string toString() const;

    private:
        MajorColor majorColor;
        MinorColor minorColor;
    };

    class ColorOperations{
    public:
        static constexpr int numberOfMajorColors = 5;
        static constexpr int numberOfMinorColors = 5;

        static ColorPair getColorFromPairNumber(int pairNumber);
        static int getPairNumberFromColor(MajorColor major, MinorColor minor);
    };
}

#endif // COLORPAIR_H
