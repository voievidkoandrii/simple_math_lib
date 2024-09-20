#include "math_lib.h"

namespace MathLib
{
	bool isEqual(double a, double b, double tolerance = 1.e-8f)
	{
		return abs(x - y) <= tolerance;
	}

    bool isPrime(int n){
        if(n <= 1) return false;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;        
        }
        return true;
    }
}
