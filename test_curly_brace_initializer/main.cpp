#include <iostream>

int main(int argc, char **argv)
{
    int data_a {1};
    int data_b = {2};
    //float data_c = {data_a};/*will fail, since assign to another data type*/

    std::cout << data_a << std::endl;
    std::cout << data_b << std::endl;

    return 0;
}