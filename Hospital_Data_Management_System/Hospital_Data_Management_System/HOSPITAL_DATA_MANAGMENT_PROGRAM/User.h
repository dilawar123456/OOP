#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
class User
{
    string username;
	string password;
    public:
    User(const string& username, const string& password);
    string getUsername() const;
    string getPassword() const;

	
};
#endif