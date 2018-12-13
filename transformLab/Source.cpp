#include <iostream>
#include "MyMatrix3.h"
#include "MyVector3.h"

int main()
{
	MyVector3 test1{ 1,1,1 };
	MyVector3 test2{ 2,2,2 };
	MyVector3 test3{ 3,3,3 };

	MyMatrix3 testMatrix1{ test1,test2,test3 };

	system("pause");
	return 0;
}