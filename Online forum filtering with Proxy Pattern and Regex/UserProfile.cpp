/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	User Profile derived class implementation
*
*/

#include "UserProfile.hpp"
#include <iostream>
#include "Exception.hpp"

// Default constructor links the user profile to the admin profile via a smart pointer
// Initialize the message to empty string by default
UserProfile::UserProfile() {
	ptr = std::make_shared<AdminProfile>(AdminProfile());
	message = "";
}

// User tries to post
void UserProfile::post(std::string message_) {
	
	message = message_;
		
	// Here the Proxy pattern is taking place
	// The shared pointer invokes the "authorization" class
	// Users can only use the "proxy" profile
	if (Profile::isAppropriatePost(message_)) {
		ptr->post(message_);
	}
	else {
		// throw exception
		throw BadWordException();
	}
}

// Proxy pattern in action below
void UserProfile::navigate() {
	std::cout << "User requests permission to navigate!\n";
	if (Profile::isAppropriatePost(message)) {
		ptr->navigate();
	}
	else {
		throw NavigationRequestDennied();
	}
}