#include "triangle.h"

int main()
{
    Triangle triangle;

    try
    {
        triangle.run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
