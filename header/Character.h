//character.h file

//#include "Ellie.h"
// #include "header/AlanKids.h"
// #include "header/Nedry.h"
// #include "header/IanHammond.h"
#include "Story.h"


#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__


class Character : public Story{

public:
    void dies();
    void lives();
    //void getInfo();


};

#endif