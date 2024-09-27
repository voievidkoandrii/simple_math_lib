#include "math_lib.h"
#include "cmath"

namespace MathLib
{
	bool isEqual(double a, double b, double tolerance = 1.e-8f)
	{
		return abs(a - b) <= tolerance;
	}
	int GCD(int a, int b) {
		if (b == 0) return a;
		return GCD(b, a % b);
	}
}

#include <cmath>

namespace MathLib
{
    bool isEqual(double a, double b, double tolerance = 0.000000001)
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
            if (isEqual(result, x, 0.00001))
                break;
            x = result;
        }
        return result;
    }

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;        
        }
        return true;
    }

    int leastCommonMultiple(int a, int b)
    {
        int lcm = 1;
        int maxNum = std::max(a, b);
        for (int i = maxNum; i <= a * b; i += maxNum)
        {
            if (i % a == 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }
        return lcm;
    }
}

