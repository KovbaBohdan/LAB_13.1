#include "dod.h"
#include "var.h" 

using namespace nsVar;

void nsDod::dod() 
{
	a *= (-2 * n * x * x + x * x) / (2 * n + 1);
}