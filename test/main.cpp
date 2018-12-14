#include <cstdlib>
#include <iostream>
#include "../Helloer.h"
#include "Tester.h"

int main(int argc, char* argv[]) 
{
	CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextTestRunner runner;
	runner.addTest(test);
	
	runner.run();
}