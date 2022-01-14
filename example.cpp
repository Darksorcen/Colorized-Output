#include <iostream>

#include "output.hpp"

int main()
{
    std::cout << "A normal output without specific colors or modes!" << '\n';
    std::cout  << set_mode(BOLD) << "Bold! " << set_color_output(RED, "Red color is cool!") << set_mode(NORMAL)  << '\n';
    std::cout << "Ah Back to normal!" << std::endl;
    return 0;
}
