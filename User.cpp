// TO DO: #include needed standard libraries and your own libraries here

// TO DO: function implementations

// Operator == overloading implementation
#include <iostream>
#include <string>
#include "User.h"


#include "LinkedBagDS/LinkedBag.h"
#include "LinkedBagDS/Node.h"
#include <vector>
#include <memory>





User::User(){
	
}




User::User(const std::string& username, const std::string& email, const std::string& password, const std::string& bio, const std::string& profilePicture):
	username(username), email(email), password(password), bio(bio), profilePicture(profilePicture){

}

User::~User(){
	posts.clear();
}

std::string User::getUsername(){
	return User::username; 
}

void User::displayUserInfo(){
	std::cout << "Username: " << username << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Bio: " << bio << std::endl;
	std::cout << "Profile Picture: " << profilePicture << std::endl;
}

void User::modifyUserPassword(const std::string& password){
	User::password = password;
}



std::string* User::displayKthPost(const int& k){
	std::string* post = posts.findKthItem(k)->getItem();
	return post;
}

bool User::operator==(const User& other) const {
    return username == other.username && email == other.email;
}



std::ostream& operator<<(std::ostream& os, const User& user) {
    os << "Username: " << user.username << ", Email: " << user.email;
    return os;
}

