//Alan and the kids file for code
#include "../header/AlanKids.h"

AlanKids::AlanKids(){

}

void AlanKids::setup(){
    cout << "You've chosen Dr. Alan Grant, Lex, and Tim!\n";

    sceneOne();
}

void AlanKids::sceneOne(){
    int input1; 
    cout << "You and the kids are in the broken down Jeeps. As you wait for the power to "
    "come on, you hear the sounds of giant footsteps. Suddenly you see the T-rex and he breaks through the electric fence. Do you. . ." << endl;
    cout << "1. Stay in the car." << endl;
    cout << "Or" << endl;
    cout << "2. Get out of the car to try and quickly fix the car." << endl;
    cout << "Or" << endl;
    cout << "3. Follow the lawyer, Mr. Gennaro, to the bathroom and try and get safety." << endl;
    cin >> input1; 
    cout << " \n------------------------------\n";
    cout << endl;

    if(input1 == 1){
        int input2;
        cout << "You stay in the car even after the lawyer abandons "
        "you to save himself. The T-rex looks around the cars to try and understand his new environment. Do you. . ." << endl;
        cout << "1. Shine a bright flashlight to try and scare the T-rex off." << endl;
        cout << "Or" << endl;
        cout << "2. Stay absolutely still." << endl;
        cin >> input2;
        cout << " \n------------------------------\n";
        cout << endl;

        if(input2 == 1){
            int input3; 
            cout << "The bright light of the flashlight causes the T-rex to come over to you. Do you. . ." << endl;
            cout << "1. Turn the light off and run out of the car to try and get to safety." << endl;
            cout << "Or" << endl;
            cout << "2. Shine the light in the dinosaurs' eyes in an attempt to blind him." << endl;
            cin >> input3; 
            cout << " \n------------------------------\n";
            cout << endl;
            
            if(input3 == 1){
                cout << "Game Over: The T-rex walks over to you and quickly and effortlessly pops you in his mouth to never be seen again." << endl;
            }
            else if(input3 == 2){
                cout << "Game Over: This attempt to blind a dinosaur was really innefective and resulted in death" << endl;
            }
        }
        else if (input2 == 2){
            int input4;
            cout << "The T-rex senses movement so by staying still the T-rex didn't see you. " 
            "However the kids weren't as smart and got the T-rex chasing after them. Do you. . ." << endl;
            cout << "1. Save the kids and escape from the outside of the road." << endl;
            cout << "Or" << endl;
            cout << "2. Leave the scene with Ian and try and make a rescue call to try and save the kids." << endl;
            cin >> input4;
            cout << " \n------------------------------\n";
            cout << endl;

            if(input4 == 1){
                cout << "You make the heroic decision to put the kids life before your own and save them successfully. "
                "The car is thrown off road by the T-rex and you escape down from the road. " << endl;
                sceneTwo();
            }
            else if(input4 == 2){
                cout << "Game Over: Your selfishness blinded you from making the correct decisions. "
                "The T-rex ate you as you made rash-jerky movements in your escape. " << endl;
            }
        }
    }
    else if(input1 == 2){
        int input5;
        cout << "You creep out of the car and pop the hood You look around to see what the problem is with the car. "
        "The T-rex pauses and looks around his new environment. Do you. . ." << endl;
        cout << "1. Try and quickly diagnose the problem with the cars and fix it." << endl;
        cout << "Or" << endl;
        cout << "2. Book it out of there as fast as you can." << endl;
        cin >> input5;
        cout << " \n------------------------------\n";
        cout << endl;

        if(input5 == 1){
            cout << "Game Over: Trying to fix a car is not the smartest decision when a hungry T-rex is mere yards away. Death by T-rex." << endl;
        }
        else if(input5 == 2){
            cout << "Game Over: The T-rex senses movement. Your running made the T-rex run after you and eat you up as a snack." << endl;
        }
    }
    else if(input1 == 3){
        int input6;
        cout << "You and the lawyer are hiding in the bathroom. Suddenly you hear running. "
        "The sounds of the T-rex are getting scarily loud. Do you. . ." << endl;
        cout << "1. Escape the bathroom from the entrance you came in from." << endl;
        cout << "Or" << endl;
        cout << "2. Hope the T-rex avoids the bathroom and continues on its path." << endl;
        cin >> input6;
        cout << " \n------------------------------\n";
        cout << endl;

        if(input6 == 1){
            cout << "Game Over: You run out of the bathroom straight into the wide open jaws of a hungry T-rex." << endl;
        }
        else if(input6 == 2){
            cout << "Game Over: The T-rex decided to check out the bathroom. He rips off the roof and sees you guys. "
            "He eats you and becomes satisfied by his meal. " << endl;
        }
    }
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