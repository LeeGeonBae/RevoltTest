#include "cTestClass.h"

cTestClass::cTestClass()
	: a(0)
	, b(1)
{

}

cTestClass::~cTestClass()
{
	a = 0;
	b = 0;
}
