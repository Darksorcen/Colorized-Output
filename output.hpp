#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <string>
#include <array>

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

enum Styles
{
    NORMAL = 0,
    BOLD,
    UNDERLINE = 4,
};

std::string set_color_output(const int color, const std::string& to_add);
std::string set_style(const int mode);
std::string set_specific_color(const std::array<int, 3>& rgb);

#endif
