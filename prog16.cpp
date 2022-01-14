#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
//#include <boost/log/trivial.hpp>

enum Colors
{
    WHITE = 29,
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
};

// A function that will return a string colored
// color  : a constant that will define the specific color (see enum Colors)
// to_add : a string that will be returned with a specific color
std::string set_color_output(const int color, const std::string& to_add)
{
    return "\033["+std::to_string(color)+"m"+to_add;
}

enum Modes
{
    NORMAL = 0,
    BOLD,
    UNDERLINE = 4,
};

// A function that will return a string with a specific mode
// mode : a constant that will define the mode to output (see enum Modes)
std::string set_mode(const int mode)
{
    return "\033["+std::to_string(mode)+";37m";
}

int main()
{
    std::cout << "test" << std::endl;
    std::cout  << set_mode(BOLD) << "vbonh" << set_color_output(RED, "Bonjour") << set_mode(NORMAL)  << std::endl;
    return 0;
}
