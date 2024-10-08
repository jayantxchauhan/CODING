// C++ program to Count the number of objects 
// using the Static member function 
#include <iostream> 
using namespace std; 
class test { 
	int objNo; 
	static int objCnt; 

public: 
	test() 
	{ 
	objNo = ++objCnt; 
	} 
	~test() 
	{ 
	--objCnt; 
	} 
	void printObjNumber(void) 
	{ 
		cout << "object number :" << objNo << "\n"; 
	} 
	static void printObjCount(void) 
	{ 
		cout << "count:" << objCnt<< "\n"; 
	} 
}; 
int test::objCnt; 
int main() 
{ 
	test t1, t2; 
	test::printObjCount(); 

	test t3; 
	test::printObjCount(); 

	t1.printObjNumber(); 
	t2.printObjNumber(); 
	t3.printObjNumber(); 
	return 0; 
} 
