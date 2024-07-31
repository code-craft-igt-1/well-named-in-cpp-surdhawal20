#include "ColorPair.h"
#include <array>

namespace TelCoColorCoder {

    constexpr std::array<const char*, 5> MajorColorNames = { "White", "Red", "Black", "Yellow", "Violet" };
    constexpr std::array<const char*, 5> MinorColorNames = { "Blue", "Orange", "Green", "Brown", "Slate" };

    ColorPair::ColorPair(MajorColor major, MinorColor minor)
        : majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() const {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const {
        return minorColor;
    }

    std::string ColorPair::toString() const {
        return std::string(MajorColorNames[static_cast<int>(majorColor)]) + " " + MinorColorNames[static_cast<int>(minorColor)];
    }

    ColorPair ColorUtils::getColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int ColorUtils::getPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
    }

    void ColorUtils::printColorCoding() {
        for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; ++pairNumber) {
            ColorPair colorPair = ColorUtils::getColorFromPairNumber(pairNumber);
            std::cout << "Pair Number: " << pairNumber << " - " << colorPair.toString() << std::endl;
        }
    }
}