#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <string>

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

std::string set_color_output(const int color, const std::string& to_add);

enum Styles
{
    NORMAL = 0,
    BOLD,
    UNDERLINE = 4,
};

std::string set_style(const int mode);

#endif
