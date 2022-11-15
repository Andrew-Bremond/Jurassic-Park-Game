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

//sceneTwo starting here
void sceneTwo (){
    int choice1;
    cout << "You just finished turning on the power you're too quick to celebrate and a raptor appears right behind you." 
    << "You run past a fenced door with the raptor right behind your tail. You... \n1.Close the door to try and stop the raptor." 
    << "\n2. Focus on running ahead to try and outrun the raptor. \n3. Grab a nearby wrench and fight 1 on 1 with the raptor." << endl;
    cin >> choice1;
    cout << endl;

    if (choice1 == 1) {
        int choice2;
        cout << "You successfully close the door, but the fenced door is not enough to keep it closed. All of a sudden, you see Ray's arm land on your shoulder. " 
        << "You thought it was Ray's arm, but you didn't see a body attached to it. With the raptor biting through the fence you... \n"
        << "1. Throw the arm at the raptor and run away. \n2. Lean against the the fenced door." << endl;
        cin >> choice2;
        cout << endl;

        if (choice2 == 1){
            int choice3;
            cout << "That confused the raptor which buys you more time to escape, and just as you escape you meet face to face with another raptor eating Muldoon. "
            << "\n1. You hide in the bushes. \n2. You pretend to be dead. \n3. Running is futile, you attempt to high five Muldoon's remaining hand and go out in style." << endl;
            cin >> choice3;
            cout << endl;

            if (choice3 == 1){
                cout << "GAME OVER: The rustling in the bushes are heard, and the raptor get you. \nHINT: Don't throw the arm." << endl; 
            }
            else if (choice3 == 2){
                cout << "GAME OVER: The raptor comes closer to you. She seems suspicious of you and starts to sniff and lick you." 
                << "This somehow tickles you and you start to laugh. Your cover is blown. \nHINT: Don't throw the arm." << endl;
            }
            else if (choice3 == 3){
                cout << "GAME OVER: You died like a baller B) \nHINT: Don't throw the arm" << endl;
            }
        }
        else if (choice2 == 2){
            int choice3;
            cout << "Your leg gets injured but you manage to run away through the bunker door. Now that you're safe you decide to go and meet up with... "
            <<"\n1. Alan \n2.Muldoon" << endl;
            cin >> choice3;
            cout << endl;

            if (choice3 == 1){
                cout << "Good Job. You managed to survive the second scene, but are you ready for the next ones?" << endl;
            }
            else if (choice3 == 2){
                cout << "GAME OVER: You discover that Muldoon got eaten, and you are next." << endl;
            }
        }
    }
    else if (choice1 == 2) {
        int choice2;
        cout << "You run past the bunker door and close the door successfully running away from the raptor in the power room. You meet up with Muldoon.\n"
        << "1. Both you and Muldoon try to hunt and escape the raptors to meet up with the others. \n2. Climb a tree." << endl;
        cin >> choice2;
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: The BIG ONE comes from the bushes in an ambush and eats you. Clever Girl \nHINT: You can't outrun a raptor." << endl;
        }
        else if (choice2 == 2){
            cout << "GAME OVER: You accidently fall off a tree and the raptors get you. What a klutz. \nHINT: You can't outrun a raptor." << endl;
        }
    }
    else if (choice1 == 3) {
        choice2;
        cout << "You've been going the gym lately, and you think you can win this. You decide to swing first. \n"
        << "1. You swing for the head. \n2. You aim for the legs." << endl;
        cin >> choice2;
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: You go for a quick 1-2 followed by a hook, but as you go for the hook, the raptor bites your arm off. You put up a good fight though.\n"
            << "HINT: You can't beat a raptor in hand to hand combat." << endl;
        }
        else if (choice2 == 2){
            cout << "GAME OVER: The raptor was too quick for you to land a hit. Instead the raptor hits your legs for a slow and painful death. \n"
            << "HINT: You can't beat a raptor in hand to hand combat." << endl;
        } 
    }
}
//sceneTwo ends here

// Scene Four Starts Here
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
// Scene 4 Ends Here