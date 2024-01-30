#include <iostream>

int main(int argc, char **argv)
{
    long data_orig = -64;

    auto data_after = narrow_cast<char>(data_orig);//not working

    std::cout << sizeof(data_after) << std::endl;

    return 0;
}