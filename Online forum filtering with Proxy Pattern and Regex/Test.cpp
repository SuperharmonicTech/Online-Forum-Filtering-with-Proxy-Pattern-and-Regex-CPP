/*
*	© Superharmonic Technologies
*	Pavlos Sakoglou
*
* ================================================================
*
*	Online forum filtering with Proxy Pattern test
*
*/

#include <iostream>

#include "UserProfile.hpp"
#include "AdminProfile.hpp"
#include "Exception.hpp"

int main() {

	// Two users log-in
	UserProfile user1, user2;

	// Filter bad words
	try {
		user1.post("You are a badWord1!");
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// User1 tries to navigate after they attempted to post inappropriate stuff
	try {
		user1.navigate();
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// Regular conversation
	try {
		user1.post("Hello everyone, this is my first post!");
		user1.post("I like to travel, cook and experiment with food, and meet new people! What about you?");
		user2.post("Hi user1! I like traveling as well! I am planning a trip to Europe this summer!");
		user1.post("Oh cool! Where at?");
		user2.post("I am going to Belgium and The Netherlands!");
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// A fight in the forum gets prevented
	try {
		user1.post("I disagree with your opinion!");
		user2.post("I don't care! you are a badWord2 anyway!");
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// User2 tries to navigate in another thread of the forum, but fails
	try {
		user2.navigate();
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// User2 appologizes for the bad behavior
	try {
		user2.post("I am sorry for my uncivilized behavior. It won't happen again");
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	// User2 can now navigate again
	try {
		user2.navigate();
	}
	catch (Exception & e) {
		std::cout << e.what();
	}

	return 0;
}