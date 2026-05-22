#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int count = line.find(":");
    return line.substr(count+2);
}

std::string log_level(std::string line) {
    // return the log level
    int count = line.find(":");
    return line.substr(1,count-2);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return (message(line)+" "+"("+log_level(line)+")");
}
}  // namespace log_line
