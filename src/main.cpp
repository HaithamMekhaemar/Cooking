#include <iostream>

int main()
{
    try
    {

    }
    catch(std::exception const & e)
    {
        std::cerr << e.what() << std::endl;
        return -1;
    }

    return 0;
}
