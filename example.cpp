#include <iostream>

#include "output.hpp"

int main()
{
    std::cout << "A normal output without specific colors or modes!" << '\n';
    std::cout  << set_style(BOLD) << "Bold! " << set_color_output(RED, "Red color is cool!") << set_style(NORMAL)  << '\n';
    std::cout << "Ah Back to normal!" << std::endl;
    std::cout << set_specific_color({0, 255, 132}) << "RGB value: (0, 255, 132)" << std::endl;
    return 0;
}
