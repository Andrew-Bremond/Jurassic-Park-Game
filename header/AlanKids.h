#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

#ifndef __ALANKIDS_H__
#define __ALANKIDS_H__

class AlanKids: public Character{
 public:
    AlanKids();
    void setup();
    void sceneOne ();
    void sceneTwo ();
    void sceneThree ();
    void sceneFour ();

};

#endif
