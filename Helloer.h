#ifndef HELLOER_H
#define HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
	public:
	    Helloer(const string& aMessage);
	    Helloer();
		std::string PrintMessage();
	private:
		std::string Message;
};

#endif