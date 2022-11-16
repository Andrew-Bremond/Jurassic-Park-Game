//Ellie.h
#include<iostream>
#include <string>
#include "Character.h"
//#include "../main.cpp"

using namespace std;

#ifndef __ELLIE_H__
#define __ELLIE_H__

class Ellie: public Character{
 public:
    void setup();
    void sceneOne ();
    void sceneTwo ();
    void sceneThree ();
    void sceneFour ();

};

#endif
