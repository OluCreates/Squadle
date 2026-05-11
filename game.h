#pragma once
#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD
#include "team.h"
#include "Hint.h"
=======
#include "Team.h"
#include "Hint.h"

>>>>>>> b7adea741a36a870b3e9fdeffa77a8c713e5c76d
using namespace std;

class Game {
public:
<<<<<<< HEAD
    Game();
    bool hasWon(string guessedTeam);
    bool turnLogic(string guessedTeam);
    int getGuessesLeft();
=======

Game();

bool hasWon(string guessedTeam);

bool turnLogic(string guessedTeam);

int getGuessesLeft();


>>>>>>> b7adea741a36a870b3e9fdeffa77a8c713e5c76d

private:
    vector<Team> allTeams;
    int guessesLeft;
    Team* answer;
};