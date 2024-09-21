#include "math_lib.h"

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance)
    {
        return abs(a - b) <= tolerance;
    }

    template <typename T>
    double sqrt(T a)
    {
        if (a == 0)
            return 0;
        if (a < 0)
            throw std::invalid_argument("Cannot get the square root of a negative number");
        double x = a;
        double result;
        int count = 0;
        while (true)
        {
            count++;
            result = 0.5 * (x + (n / x));
            if (abs(result - x) < 0.00001)
                break;
            x = result;
        }
        return result;
    }
}