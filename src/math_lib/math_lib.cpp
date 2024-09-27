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