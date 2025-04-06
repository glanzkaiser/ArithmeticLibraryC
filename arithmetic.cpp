#include "arithmetic.h"
#include <iostream>


float algebra::add(float a, float b)
{
	std::cout << a << " + " << b << " = " << a+b << std::endl;
	return 0;
}

float algebra::subtract(float c, float d)
{
	std::cout << c << " - " << d << " = " << c-d << std::endl;
	return 0;
}

float algebra::multiply(float e, float f)
{
	std::cout << e << " * " << f << " = " << e * f << std::endl;
	return 0;
}

float algebra::divide(float g, float h)
{
	std::cout << g << " / " << h << " = "  << g / h << std::endl;
	return 0;
}