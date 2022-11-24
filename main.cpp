#include "header/Character.h"
#include "header/Ellie.h"
#include "header/Story.h"
#include "header/AlanKids.h"
#include "header/IanHammond.h"
#include "header/Nedry.h"
#include "header/MiniGame.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
    Story * stories = new Story();
    stories -> intro();

    int input;
    cin >> input;

    while(input == 0 || input == 1 || input == 2 || input == 3 || input == 4 || input == 5){
        
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
        else if(input == 5){
            int gameInput;
            string question;
            string answer; 
            MiniGame *game = new MiniGame();
            game -> Intro();
            cin >> gameInput;
            question = game -> DinoGenerator(gameInput);
            cout << question << endl;
            cin >> answer;
            string miniGameChoice;
            if(game -> Verifciation(answer, gameInput) == true){
                cout << "Congratulations you successfully answered the question!." << endl;
                cout << "Would you like to play again 'r' or quit the game 'q'?" << endl;
                cin >> miniGameChoice;
                if (miniGameChoice == "r") {
                    stories -> intro();
                }
                else if (miniGameChoice == "q") {
                    exit(0);
                }
                else{
                    exit(0);
                }
            }
            else{
                cout << "You didn't answer correctly." << endl;
                cout << "Would you like to play again 'r' or quit the game 'q'?" << endl;
                cin >> miniGameChoice;
                if (miniGameChoice == "r") {
                    stories -> intro();
                }
                else if (miniGameChoice == "q") {
                    exit(0);
                }
                else{
                    exit(0);
                }
            }
        }
        else{
            exit(0);
        }

        cin >> input;
    }

    return 0;
}