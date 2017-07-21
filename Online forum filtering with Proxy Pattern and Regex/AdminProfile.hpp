/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Admin base class definition
*
*/

// Include guards
#ifndef ADMINPROFILE_HPP
#define ADMINPROFILE_HPP

#include "Profile.hpp"
#include <memory>
#include <vector>

// Admin "authorization" class
class AdminProfile : public Profile {
public:
	// Constructor 
	AdminProfile() = default;

	// Virtual method inheritance
	void post(std::string message_);
	void navigate();

	// Other methods
	void process_messages();

	// Destructor
	~AdminProfile() = default;

private:
	// Vector that stores all messages posted
	std::vector<std::string> all_posts;
};

#endif