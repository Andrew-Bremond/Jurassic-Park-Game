//Alan and the kids file for code
#include "../header/AlanKids.h"

AlanKids::AlanKids(){

}

void AlanKids::setup(){
    cout << "You've chosen Dr. Alan Grant, Lex, and Tim!\n";

    sceneOne();
}

void AlanKids::sceneFour(){
    int val1;
    cout << "You made it back to the visitor center however Alan goes to find the others so Tim and Lex head towards the buffet." << endl;
    cout << "Lex and Tim are eating at the dining tables after being attacked and out in the jungles all day and night. You feel like you can finally relax and are finally safe. Lex is eating and sees the shadow of a raptor behind Tim. Do you…" << endl;
    cout << "1. Work on figuring out how to restore the power to the security system for the park and communication." << endl;
    cout << "Or" << endl;
    cout << "2. Start screaming and yelling for help." << endl;
    cin >> val1;
    cout << "\n------------------------------\n";
    cout << endl;

    if (val1 == 2){
        int val2;
        cout << "You panicked and now you face off with the raptor. So, do you…" << endl;
        cout << "1. Start throwing food at the raptor." << endl;
        cout << "Or" << endl;
        cout << "2. Make a run for it and try to." << endl;
        cin >> val2;
        cout << "\n------------------------------\n";
        cout << endl;
        if (val2 == 1){
            cout << "Game Over: This angers the raptor even more and starts attacking you." << endl;
        }
        else if (val2 == 2){
            cout << "Game Over: You tried to escape however they were too fast for you and were attacked by the raptor." << endl;
        }
    }
    else if (val1 == 1){
        cout << "You go towards the kitchen and crouch down." << endl;
        cout << "For a moment the raptors don't know where you are." << endl;
        cout << endl;

        int val3;
        cout << "The raptors know how to open the doors and enters the kitchen and calls another raptor. The raptors have now entered the kitchen. Do you…" << endl;
        cout << "1. Crawl on the floor as the raptors move around." << endl;
        cout << "Or" << endl;
        cout << "2. Find a storage cabinet in the kitchen and hide." << endl;
        cin >> val3;
        cout << "\n------------------------------\n";
        cout << endl;

        if (val3 == 2){
            int val4;
            cout << "You grabbed the weapon but the door is unsteady. Now do you..." << endl;
            cout << "1. Start kicking and hitting the raptors." << endl;
            cout << "Or" << endl;
            cout << "2. Throw the pots and pans at the raptors." << endl;
            cin >> val4;
            cout << "\n------------------------------\n";
            cout << endl;
            if (val4 == 1){
                cout << "Game Over: You are unable to defend yourself and are eaten to bits." << endl;
            }
            else if (val4 == 2){
                cout << "Game Over: You are unable to defend yourself and are eaten to bits." << endl;
            }
        }
        else if (val3 == 1){
            cout << "The raptors catch up to what you are doing." << endl;
            cout << "Tim and Lex split off in the kitchen and to try to escape." << endl;
            cout << endl;

            int val5;
            cout << "The raptors are still coming after you. Now, you can't escape the kitchen without them still coming after you. Do you…" << endl;
            cout << "1. Take an opportunity and lure both of the raptors away from the door by throwing pots and pans." << endl;
            cout << "Or" << endl;
            cout << "2. See the open freezer and lure a raptor towards it." << endl;
            cin >> val5;
            cout << "\n------------------------------\n";
            cout << endl;

            if (val5 == 1){
                int val6;
                cout << "You are able to leave and close the door. Do you…" << endl;
                cout << "1. Run back to the buffet and hide under the dining tables." << endl;
                cout << "Or" << endl;
                cout << "2. Look for an exit." << endl;
                cin >> val6;
                cout << "\n------------------------------\n";
                cout << endl;
                if (val6 == 1){
                    cout << "Game Over: The raptors know how to open doors so they catch up and attack you." << endl;
                }
                else if (val6 == 2){
                    cout << "Game Over: The raptors from the kitchen called more raptors which come and eat you alive." << endl;
                }
            }
            else if (val5 == 2){
                cout << "So, trap the raptor and escape them." << endl;
                cout << "You meet up and find Alan and Ellie, soon the raptors get out however the T-Rex fights them off giving you a chance to escape." << endl;
            }
        }
    }
}