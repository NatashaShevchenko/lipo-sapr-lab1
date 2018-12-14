#include <cstdlib>
#include <iostream>
#include "Helloer.h"

int main(int argc, char* argv[]) {
	// Switch to argc for preventing segmentation fault
	if (argc == 2) {
		Helloer HelloWorld(argv[1]);
		std::cout << HelloWorld.PrintMessage() << std::endl;
	}
	else if (argc == 1) {
		Helloer EmptyMessage;
		std::cout << EmptyMessage.PrintMessage() << std::endl;
	}
}