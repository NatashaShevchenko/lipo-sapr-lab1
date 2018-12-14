#include "Helloer.h"

Helloer::Helloer(const string& aMessage)
{
	Message = (std::string)aMessage;
}

Helloer::Helloer()
{
	Message = (std::string)"";
}

string Helloer::PrintMessage()
{
	return (std::string) "" + Message;
}