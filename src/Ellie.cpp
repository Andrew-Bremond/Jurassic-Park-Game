//Ellie.cpp
#include "header/Ellie.h"


void Ellie::setup(){
    cout << "You've chosen Dr. Ellie Sattler!\n";
    cout << "\n after staying behind with the sick dinosaur to "

    //sceneOne();
}


void Ellie::sceneOne (){



//made it call scene 2();
//else call dies();
    return ;
}

void Ellie::sceneFour(){
    int input1;
    cout << "You, Grant, and the kids are crawling through the vents and come to a "
    "grate directly above the T-Rex skeleton in the main lobby of the museum. Do you . . ." << endl;
    cout << "1. Remove the grate and try and lower yourself and the children to the ground." << endl;
    cout << "Or" << endl;
    cout << "2. Continue running down the vents." << endl;
    cin >> input1;
    cout << endl;

    if(input1 == 1){
        int input2;
        cout << "You move the great aside and and climb onto the scaffolding adjacent to the T-rex skele"
        "tons. Just then a velociraptor appears on the second floor, the same height you are on the scaffolding. Do you . . ." << endl;
        cout << "1. Climb back up the scaffolding into the vents to escape." << endl;
        cout << "Or" << endl;
        cout << "2. Leap over the scaffolding and climb down the skeleton of the "
        "suspended T-rex inorder to get you, Grant, and the children to the ground. " << endl;
        cin >> input2;
        cout << endl;

        if(input2 == 1){
            int input3;
            cout << "Your group scurries up the scaffolding barely escaping the raptor back into the vents. Do you . . ." << endl;
            cout << "1. Run back to the kitchen where you escaped previously" << endl;
            cout << "Or" << endl;
            cout << "2. Run in a different direction down the vents." << endl;
            cin >> input3;
            cout << endl;
            
            if(input3 == 1){
                cout << "The two raptors are waiting for you in the kitchen. They quickly and very painfully kill you." << endl;
                cout << "GAME OVER" << endl;
            }
            else if(input3 == 2){
                cout << "You run for 100 yards down the vent until you reach a large spinning fan. "
                "You can't get through. You die as the velociraptor is behind you and violently ends you." << endl;
                cout << "GAME OVER" << endl; 
            } 
        }
        else if(input2 == 2){
            int input4;
            cout << "You and the group successfully get down the skeleton even with the "
            "velociraptor attacking you. Just then another velociraptor appears. Do you . . . " << endl;
            cout << "1. Huddle together back to back to never lose sight of the velociraptors waiting patiently." << endl;
            cout << "Or" << endl;
            cout << "2. Grab the fallen skeleton bones and attempt to fight the velociraptors." << endl;
            cin >> input4;
            cout << endl;

            // CORRECT OUTPUT
            if(input4 == 1){
                cout << "Patience is a virtue. The brief moment of huddling allowed for a T-rex to come in and kill all the velociraptors "
                "allowing you to escape." << endl;
            }
            else if(input4 == 2){
                cout << "Though valiant, you are no match for a dinosaur. "
                "You all get mauled to death. Hint: probably shouldn't have tried to take a dino head on dumbass. " << endl;
                cout << "GAME OVER" << endl;
            }
        }
        
    }
    else if(input1 == 2){
        int input5;
        cout << "You run for 100 yards down the vent until you reach a large spinning fan. You can’t get through. Do you . . ." << endl;
        cout << "1. Turn around and try and hed back to the previous vent." << endl;
        cout << "Or" << endl;
        cout << "2. Run through the fan and take your chances with physics." << endl;
        cin >> input5;
        cout << endl;

        if(input5 == 1){
            cout << "You turn around and see the velociraptor snuck up behind you. He mauls you to death." << endl;
            cout << "GAME OVER" << endl;
        }
        else if(input5 == 2){
            cout << "Death by large spinning fan." << endl;
            cout << "GAME OVER" << endl;
        }
    }
}