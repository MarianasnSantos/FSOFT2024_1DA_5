#ifndef TASTYAPP_PROFILEVIEW_H
#define TASTYAPP_PROFILEVIEW_H

#include <string>
#include "User.h"

using namespace std;

class ProfileView {
public:
    ProfileView();

    int menuProfile();
    User getUser();
    void printUserAdded(const User& user);
    void printUserUpdated(const User& user);
    void printUserRemoved(const string& username);
    void printUserNotFound(const string& username);
};

#endif //TASTYAPP_PROFILEVIEW_H
