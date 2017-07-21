/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Admin class implementation
*
*/

#include "AdminProfile.hpp"
#include <iostream>

// Authorized post() method -- this actually posts messages in the forum
void AdminProfile::post(std::string message_) {
	std::cout << "Message approved by Admin!\n\n";

	// Store post message
	all_posts.push_back(message_);

	// Post in message in the forum (add HTML elements)
	// ...
}

// Method that processes all the messages to extract information 
// We do not provide implementation as this serves as a conceptual methods for demo purposes
// However, feel free to add functionality
void AdminProfile::process_messages() {
	// Try to find connectivity patterns from the stored messages etc.
}

// Allow user to navigate
void AdminProfile::navigate() {
	// Permission to the user for navigation
	std::cout << "Request approved! User navigates...\n\n";
}