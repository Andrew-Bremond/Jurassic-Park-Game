#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

#ifndef __IANHAMMOND_H__
#define __IANHAMMOND_H__

class IanHammond: public Character{
 public:
    IanHammond();
    void setup();
    void sceneOne ();
    void sceneTwo ();
    void sceneThree ();
    void sceneFour ();

};

#endif