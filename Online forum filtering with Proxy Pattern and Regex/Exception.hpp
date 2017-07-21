/*
*	Advanced C++11/14 with Multidisciplinary Applications
*
*	Level 5 - 5.5 Proxy Pattern
*
*	Pavlos Sakoglou
*
* ======================================================================================================================================================================
*
*	1. Access Proxy
*
*	Exception hierarchy 
*
*/

// Include guards
#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <string>
#include <iostream>

// Create a simple class Exception with no members
class Exception {
public:
	// Pure virtual message function to be implemented in the derived classes
	virtual std::string what() = 0;
};

// An exception class for bad word usage
class BadWordException : public Exception {
public: 
	std::string what() {
		return "Bad Word Exception!\n\n";
	}
};

// An exception class for dennied permission for further navigation in the forum
class NavigationRequestDennied : public Exception {
public: 
	std::string what() {
		return "Navigation Request Dennied!\n\n";
	}
};

// More exceptions here if you extend this application
// ...

#endif // !EXCEPTION_HPP
