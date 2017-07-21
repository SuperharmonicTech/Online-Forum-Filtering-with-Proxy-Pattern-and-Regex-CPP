/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	User Profile derived class definition
*
*/

// Include guards
#ifndef USERPROFILE_HPP
#define USERPROFILE_HPP

#include "AdminProfile.hpp"
#include <memory>

// User proxy class
class UserProfile : public Profile {
public:
	// Constructor 
	UserProfile();

	// Virtual method inheritance
	void post(std::string message_);
	void navigate(); 

	// Destructor
	~UserProfile() = default;

private: 
	// A shared pointer of the base class
	std::shared_ptr<Profile> ptr;

	// Message
	std::string message;
};

#endif