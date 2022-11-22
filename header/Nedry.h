#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

#ifndef __NEDRY_H__
#define __NEDRY_H__

class Nedry: public Character{
 public:
    Nedry();
    void setup();
    void sceneOne ();
    void sceneTwo ();
    void sceneThree ();
    void sceneFour ();

};

#endif
