#include <iostream>

#define MULTI_PARA  1

#if MULTI_PARA
template <typename...> class foo;
template <typename A, typename B, typename C>
class foo<A, B, C>
#else
template <typename A>
class foo
#endif
{
public:
    void output()
    {
#if MULTI_PARA        
        std::cout << a_ << b_ << c_ << std::endl;
#else        
        std::cout << a_ << std::endl;
#endif        
    }

    A a_;
#if MULTI_PARA    
    B b_;
    C c_;
#endif    
};

int main(int argc, char **argv)
{
#if MULTI_PARA      
    foo<int, int, int> bar;
    bar.a_ = 1;
    bar.b_ = 2;
    bar.c_ = 3;
#else    
    foo<int> bar;
    bar.a_ = 1;
#endif    

    bar.output();


    return 0;
}