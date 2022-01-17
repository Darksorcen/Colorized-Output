#include <iostream>

#include "output.hpp"


// A function that will return a string colored
// color  : a constant that will define the specific color (see enum Colors)
// to_add : a string that will be returned with a specific color
std::string set_color_output(const int color, const std::string& to_add)
{
    return "\033["+std::to_string(color)+"m"+to_add;
}

// A function that will return a string with a specific style
// style : a constant that will define the style to output (see enum Modes)
std::string set_style(const int style)
{
    return "\033["+std::to_string(style)+";"+std::to_string(WHITE)+"m";
}
