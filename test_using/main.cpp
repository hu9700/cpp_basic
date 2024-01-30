#include <iostream>
#include <vector>

using pfunc = int (*)(int, int);
using user_int = int;

template<typename T>
using user_vector = std::vector<T>;

int add(int a, int b)
{
    return (a + b);
}

int main(int argc, char **argv)
{
    user_vector<int> vector_data;

    vector_data.push_back(1);

    std::cout << vector_data[0] << std::endl;

    pfunc ofunc = add;

    std::cout << ofunc(2, 3) << std::endl;

    return 0;
}