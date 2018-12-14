#ifndef TESTER_H
#define TESTER_H

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Helloer.h"

class HelloerTester : public CppUnit::TestCase
{
	public:
		void CheckHelloerNormalMessage() 
		{
			Helloer TestHelloer("Hello All The World!");
			CPPUNIT_ASSERT_EQUAL_MESSAGE("Helloer::constructor (arg === string): must write 'Hello All The World!' to console", TestHelloer.PrintMessage(), (string)"Hello All The World!");
		};
		void CheckHelloerEmptyMessage() 
		{
			Helloer TestHelloer;
		    CPPUNIT_ASSERT_EQUAL_MESSAGE("Helloer::constructor (arg === null): must write only CR to console", TestHelloer.PrintMessage(), (string)"");
		};
		
		CPPUNIT_TEST_SUITE( HelloerTester );
		CPPUNIT_TEST( CheckHelloerNormalMessage );
		CPPUNIT_TEST( CheckHelloerEmptyMessage );
		CPPUNIT_TEST_SUITE_END();
};

CPPUNIT_TEST_SUITE_REGISTRATION( HelloerTester );

#endif