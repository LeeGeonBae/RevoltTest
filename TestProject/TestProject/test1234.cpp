#include "test1234.h"
#include <iostream>

using namespace std;

test1234::test1234()
	:a(3), b(5)
{
}


test1234::~test1234()
{
}

void test1234::test()
{
	cout << a + b << endl;
}
