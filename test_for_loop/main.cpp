#include <iostream>

int main(int argc, char ** argv)
{
    int count = 0;
    int list[] = {6, 7, 8, 9};

    for(count = 0; count < 5; count ++)
    {
        std::cout << count << ' ';
    }

    std::cout << std::endl;

    for(auto a:list)
    {
        std::cout << a << ' ';
    }

    std::cout << std::endl;

    return 0;
}