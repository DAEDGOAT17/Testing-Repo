#include "raindrops.h"
#include <string>

namespace raindrops {

    std::string convert(int number) {
        std::string result = "";
        
        // 1. Check factors and build the string with proper capitalization
        if (number % 3 == 0) {
            result += "Pling";
        }
        if (number % 5 == 0) {
            result += "Plang";
        }
        if (number % 7 == 0) {
            result += "Plong";
        }
        
        // 2. If the string is still empty, it had no matching factors
        if (result.empty()) {
            return std::to_string(number);
        }

        return result;
    }

} // namespace raindrops