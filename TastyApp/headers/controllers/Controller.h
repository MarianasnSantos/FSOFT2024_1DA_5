#ifndef LASTTEST_LOG_CONTROLLER_H
#define LASTTEST_LOG_CONTROLLER_H

#include <vector>
#include "View.h"
#include "GroupView.h"
#include "ProfileView.h"
#include "RatingView.h"
#include "RecipesView.h"
#include "UserView.h"
#include "Utils.h"
#include "App.h"


using namespace std;

class Controller {
public:
    Controller (App &app);
    void run();


private:
    App &model;
    View view;
    UserView userView;
    RecipesView recipesView;
    UserContainer userContainer;
    RecipeContainer recipeContainer;
    void runProfile();
    void runRecipes();
    void runGroups();
    void addUser(const User& user);
    void addRecipe(const Recipe& recipe);
    vector<User> getUsers() const;
    vector<Recipe> getRecipes() const;
};

#endif //LASTTEST_LOG_CONTROLLER_H
