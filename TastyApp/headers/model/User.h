#ifndef FSOFT2024_1DA_5_USER_H
#define FSOFT2024_1DA_5_USER_H

#include <string>
#include <vector>
#include "Recipe.h"
#include "Profile.h"

using namespace std;
class User {
public:
    User(const string& name);
    void setName(const string& name);
    string getName() const;
    void addRecipe(const Recipe& recipe);
    void removeRecipe(const string &title);
    vector<Recipe> getRecipes() const;
    Profile& getProfile();

private:
    string name;
    vector<Recipe> recipes;
    Profile profile;
};

#endif //FSOFT2024_1DA_5_USER_H
