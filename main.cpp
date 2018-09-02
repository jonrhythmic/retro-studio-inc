/********************************************************************************
|                             RETRO STUDIO INC                                  |
*********************************************************************************
| FILE:  main.cpp																|
| DATE:  03.09.18																|
| VERS:  <0. 0. 0> ALPHA														|
********************************************************************************/
#include <stdexcept>
#include <exception>
#include <stdio.h>
using namespace std::printf;

int main (int argc, char* argv[]) try 
{
	try {
		
	} 
	catch (std::exception &e) {
		printf("Exception was thrown in main. \nErrormessage: %s", e.what());
	}	
} catch (const std::exception &e) 
{
	cerr << "Program failed to create 'C'. \nErrormessage: " << e.what();
} // END main
