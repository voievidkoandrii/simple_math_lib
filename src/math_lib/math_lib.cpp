#include "math_lib.h"

namespace MathLib
{
	bool isEqual(double a, double b, double tolerance = 1.e-8f)
	{
		return abs(x - y) <= tolerance;
	}
}