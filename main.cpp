#include "header/Character.h"
#include "header/Ellie.h"
#include "header/Story.h"
#include <iostream>

using namespace std;


int main() {
    Story * test2 = new Story();
    test2 -> intro();

    Ellie *test = new Ellie();
    test->setup();


    return 0;
}