/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Profile base class definition
*
*/

// Include guards
#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <string>
#include <regex>
#include <iostream>

// Profile base class
class Profile {
public:
	// Constructor
	Profile() = default;

	// Pure vitual methods that all profiles have
	virtual void post(std::string message) = 0;
	virtual void navigate() = 0;

	// Check if a post is appropriate by filterning the "bad words" via regex
	inline virtual bool isAppropriatePost(std::string message_) {
		std::regex bad_word("(badWord1)|(badWord2)");
		return !std::regex_search(message_, bad_word);
	}

	// Destructor
	~Profile() = default;
};

#endif // !PROFILE_HPP
