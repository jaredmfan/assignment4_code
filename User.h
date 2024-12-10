// TO DO: #include all the standard libraries and your own libraries here

// To DO: define the class User with the necessary functions and data fields

// This is a function that allows you to compare two users based on their username and email address.  
// You may directly include it in your class definition. 
// You don't need to modify it but will have to put it inside your class. 
// Operator == overloading function prototype:

#ifndef USER_H
#define USER_H
    #include <iostream>
    #include <string>
    #include "LinkedBagDS/LinkedBag.h"
    #include "LinkedBagDS/Node.h"
    //#include "Post.h"
    

    class User{

        public:

            User();

            User(const std::string& username, const std::string& email, 
            const std::string& password, const std::string& bio, const std::string& profilePicture);

            std::string getUsername();

            ~User();


            void displayUserInfo();

            void modifyUserPassword(const std::string& password);


            std::string* displayKthPost(const int& k);

            bool operator==(const User& other) const;




        private:
            std::string username;
            std::string email;
            std::string password;
            std::string bio;
            std::string profilePicture;
            LinkedBag<std::string*> posts;

    };

#endif