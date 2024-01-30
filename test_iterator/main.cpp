#include <iostream>
#include <list>

int main(int argc, char ** argv)
{
    std::list<int> data_l;

    data_l.push_back(1);
    data_l.push_back(2);
    data_l.push_back(3);

    //normal iterator
    for(auto data : data_l)
    {
        std::cout << data << ' ';
    }

    std::cout << std::endl;

    //normal iterator
    for(int data : data_l)
    {
        std::cout << data << ' ';
    }

    std::cout << std::endl;

    //reference iterator
    for(int &data : data_l)
    {
        data = data + 1;//increase the original data
    }

    //print data again
    for(int data : data_l)
    {
        std::cout << data << ' ';
    }

    std::cout << std::endl;

    //define iterator
    std::list<int>::iterator it;
    //use for loop
    for(it = data_l.begin(); it != data_l.end(); it ++)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}