# Online Forum Filtering with Proxy Pattern and Regex

**Description**

Mini application that demonstrates how the Proxy Pattern works in C++, by emulating a nano version of an online forum, where the users' profile activity (proxy) is being checked before a post is made. If someone uses profanity or has bad behavior, the admin class (authority profile) will deny access to the community temporarily. This application is quite limitted and only serves as a demonstration of the proxy concept.

**Usage**

Download and compile. No extra dependencies, only STL.

**The Proxy Pattern**

**Intent**

Provide a surrogate or placeholder for another object to control access to it. 

*Structure*

**Profile class**

Is the "subject" class of the pattern. This class is the base class of both the Admin's profile and the user's (proxy) profile. 

**Admin class**

Is the authorization class. Has same (or more extended) functionality from user's class that is used once authorized by a process. The user's profile class delegates its functionality to the Admin class, for filtering.

**User class**

Is the interface that the user uses to post or naviage in the forum. Once they decice to post or navigate, they go throw an extra check internally, and then either throw an exception if something illegal happens, or invoke the admin's functionality to go through their request. 

**Exception hierarchy**

Polymorphic behavior of exceptions in order to organize the "bad behavior" messages and inform the user of their status. For every illegal behavior we can create a derived exception class with its own error message. Alternatively, we can use the Template Method Pattern with universal function wrappers so we can avoid over population of derived classes. 


