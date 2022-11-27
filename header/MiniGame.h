#include <iostream>
#include <string>
using namespace std;

#ifndef __MINIGAME_H__
#define __MINIGAME_H__

class MiniGame{
 public:
    MiniGame();
    void Intro();
    string DinoGenerator(int n);
    bool Verification(string choice, int numChoice);
};

#endif
