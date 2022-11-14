//Ellie.cpp
#include "header/Ellie.h"


void setup(){
    cout << "You've chosen Dr. Ellie Sattler!\n";
    cout << "\n after staying behind with the sick dinosaur to "

    //sceneOne();
}


void sceneOne (){



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