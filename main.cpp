#include "header/Character.h"
#include "header/Ellie.h"
#include "header/Story.h"
#include "header/AlanKids.h"
#include "header/IanHammond.h"
#include "header/Nedry.h"
#include <iostream>

using namespace std;


int main() {
    Story * stories = new Story();
    stories -> intro();

    int input;
    cin >> input;

    while(input == 0 || input == 1 || input == 2 || input == 3 || input == 4){
        
        while(input == 0){
            stories -> characterInfo();
            stories -> characterMenu();
            cin >> input;
        
        }
        if(input == 1){
            // AlanKids *alankids = new AlanKids();
            // alankids -> setup();
        }
        else if(input == 2){
            Ellie *ellie = new Ellie();
            ellie -> setup();
        }
        else if(input == 3){
            IanHammond *ianham = new IanHammond();
            ianham -> setup();
        }
        else if(input == 4){
            Nedry *nedry = new Nedry();
            nedry -> setup();
        }
        else{
            exit(0);
        }

        cin >> input;
    }

    return 0;
}