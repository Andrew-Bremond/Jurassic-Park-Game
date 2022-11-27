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
                dies();
            }
            else if(input3 == 2){
                cout << "Game Over: This attempt to blind a dinosaur was really ineffective and resulted in death" << endl;
                dies();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
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
                cout << "You make the heroic decision to put the kid's life before your own and save them successfully. "
                "The car is thrown off road by the T-rex and you escape down from the road. " << endl;
                sceneTwo();
            }
            else if(input4 == 2){
                cout << "Game Over: Your selfishness blinded you from making the correct decisions. "
                "The T-rex ate you as you made rash-jerky movements in your escape. " << endl;
                dies();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
            }
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
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
            dies();
        }
        else if(input5 == 2){
            cout << "Game Over: The T-rex senses movement. Your running made the T-rex run after you and eat you up as a snack." << endl;
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
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
            dies();
        }
        else if(input6 == 2){
            cout << "Game Over: The T-rex decided to check out the bathroom. He rips off the roof and sees you guys. "
            "He eats you and becomes satisfied by his meal. " << endl;
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else {
        cout << "invalid input, exiting game" << endl;
        exit(0);
    }
}

//start of scene two:

void AlanKids::sceneTwo(){
    int input1;
    cout << "The t-rex has flipped the jeep with the kids inside it. "
    << "So after you lure it away, Ian takes over and brings the dinosaur "
    << "even further away. You manage to get Lex out of the car when suddenly "
    << "the t-rex comes back. After protecting yourself and Lex with the "
    << "detached car door, you flee down the side of the road, clinging to "
    << "the wire to not fall off the edge of the road. However the jeep with "
    << "Tim inside gets thrown off the cliff.\n Do you:" << endl;

    cout << "1. Hold onto the wire with lex and try to climb back up to the road.\n";
    cout << "OR\n";
    cout << "2. Descend with lex to go and find the jeep.\n";
    
    cin >> input1;

    cout << " \n------------------------------\n";

    //option one choice:
    if (input1 == 1){
        int input2;
        cout << "You climb back up to the road but the t-rex hasn't left. Your next move is... " << endl;
        cout << "1. Stop moving, hope it doesn't see your movements.\n";
        cout << "Or\n";
        cout << "2. Try and sneak by, staying out of its sight. \n";
        cin >> input2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (input2 == 1){
            cout << "Game Over: You freeze but luck is against you when the t-rex catches "
            << "your scent. You're dino dinner.\n";
            dies();
            
        }
        else if (input2 == 2){
            cout << "Game Over: The t-rex turns around and sees you both sneaking, you're now a dino snack.\n";
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    } //option two choice:
    else if (input1 == 2){
        cout << "You descend to the jungle floor with Lex. Following the car smoke "
        << "you find Tim and the car in the top of a tree.\n Do you…" << endl;

        int input3;
        cout << "1. Climb the tree to save Tim even though it's at the top" << endl;
        cout << "Or" << endl;
        cout << "2. Try and talk to Tim to get him to climb down to safety/you\n";
        cin >> input3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (input3 == 2){
            cout << "As you talk to Tim, the car shifts and crashes to the floor, Tim still inside.\n";
            cout << "Game Over: You've failed to keep the kids safe, they are top priority! \n";
            dies();
            
        }
        else if (input3 == 1){
            cout << "You manage to get to Tim and the car in the tree. As you reach to "
            << "get Tim, you bump the steering wheel and the car shifts, it starts "
            << "to fall. \n Do you... \n";
            cout << endl;

            int input5;
            cout << "1. Hold out a vine for Tim to grab.\n";
            cout << "Or" << endl;
            cout << "2. Reach down unsteadily and grab Tim. \n";
            cin >> input5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (input5 == 1){
                cout << "Game Over: The vine breaks! Tim falls with the car. \n";
                dies();
            }
            else if (input5 == 2){
                int input6;

                cout << "You manage to grab Tim as the car falls. You climb back down to safety. It's now becoming night, do you:\n";
                
                cout << "1. Try to make your way back to the road to find your way to the buildings.\n";
                cout << "Or\n";
                cout << "2. Try to find a safe place to sleep for the night. \n";
                cin >> input6;
                cout << " \n------------------------------\n";
                cout << endl;
                
                if (input6 == 1){
                    cout << "Game Over: Traveling by foot at night is dangerous and you don't see the dinosaurs as they come up and eat you!";
                    dies();
                }
                else if (input6 == 2){
                    cout << "You find a tree to climb into with Lex and Tim. You stay "
                    << "up and keep watch, safe and sound for the night. In the morning "
                    << "you climb down and try and make your way to the main buildings of the "
                    << "park, but first you have to make it over the electric fence. Good luck!\n";
                    cout << "\n------------------------------\n";
                    sceneThree();
                }
                else {
                    cout << "invalid input, exiting game" << endl;
                    exit(0);
                }
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
            }
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else {
        cout << "invalid input, exiting game" << endl;
        exit(0);
    }
}





//end of scene two

void AlanKids::sceneThree(){
    int choice1;
    cout << "You see the huge electric fence with a warning sign of 10000 volts." << endl;
    cout << "As you approach it to climb to get on the other side, you throw a stick to see if it is turned on." << endl;
    cout << "Nothing happened to the stick, and you see the great opportunity to prank the kids by pretended to be electrocuted." << endl;
    cout << "Do you..." << endl;
    cout << "1. Play the joke" << endl;
    cout << "2. Don't play the joke" << endl;
    cout << "3. Use the element of surprise to run away from the kids" << endl;
    cin >> choice1;
    cout << "\n------------------------------\n";
    cout << endl;

    if (choice1 == 1){
        int choice2;
        cout << "Tim loves your jokes, but Lex doesn't." << endl;
        cout << "As you hear a dinosaur's roar, you decide to..." << endl;
        cout << "1. Doubtful of the fence, you try to find away way to slip by." << endl;
        cout << "2. Climb the Fence." << endl;
        cin >> choice2;
        cout << "\n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            int choice3;
            cout << "As you take your time to find a hole through the fence, " << endl;
            cout << "you hear the alarms for the power to come back on." << endl;
            cout << "You only have a few seconds to climb the fence..." << endl;
            cout << "1. You hurry to climb the fence." << endl;
            cout << "2. Keep looking for a hole in the fence." << endl;
            cin >> choice3;
            cout << "\n------------------------------\n";
            cout << endl;

            if (choice3 == 1){
                cout << "GAME OVER: You manage to hop the fence with ease, but the kids didn't make it on time and got shocked." << endl;
                cout << "HINT: Try climbing the fence before electricity comes back on." << endl;
                dies();
            }
            else if (choice3 == 2){
                cout << "GAME OVER: A wild dinosaur comes out of nowhere and attacks." << endl;
                cout << "HINT: Try climbing the fence before electricity comes back on." << endl;
                dies();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
            }
        }
        else if (choice2 == 2){
            int choice3;
            cout << "You hear beeping, the power will soon turn back on." << endl;
            cout << "Both you and Lex manage to get off but Tim is lagging behind." << endl;
            cout << "1. Time gets electrocuted." << endl;
            cout << "2. Tim jumps on time." << endl;
            cin >> choice3;
            cout << "\n------------------------------\n";
            cout << endl;
            
            if (choice3 == 1){
                cout << "Thankfully the shock was not that bad, and you all manage to live." << endl;
                sceneFour();
        
            }
            else if (choice3 == 2){
                cout << "GAME OVER: Tim isn't that guy. He is not him."  << endl;
                dies();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
            }
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else if (choice1 == 2){
        int choice2;
        cout << "Wow that's lame... the children really needed that brief humor relief." << endl;
        cout << "In any case, even though the kids are gloomy you guys still need to escape." << endl;
        cout << "1.Climb fence." << endl;
        cout << "2. Saw your way through the fence." << endl;
        cin >> choice2;
        cout << "\n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: The climbing is slow due to the gloomy ambiance." << endl;
            cout << "The electricity comes back on earlier than expected and gets the best of you." << endl;
            cout << "HINT: Play the joke." << endl;
            dies();
        }
        else if (choice2 == 2){
            cout << "GAME OVER: Where's the saw coming from? Behind your ear? No." << endl;
            cout << "HINT: Should've play the clown move earlier." << endl;
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else if (choice1 == 3){
        int choice2;
        cout << "You don't need kids. You climb the fence as fast as possible and ran somewhere far away." << endl;
        cout << "1. Take a random jeep and drive off" << endl;
        cout << "2. Conquer your fear and ride a dinosaur to victory." << endl;
        cin >> choice2;
        cout << "\n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: There is no nearby functional jeep and a dinosaur catches you off-guard." << endl;
            cout << "HINT: Don't abandon the kids." << endl;
            dies();
        }
        else if (choice2 == 2){
            cout << "GAME OVER: That was pretty silly. You got eaten." << endl;
            cout << "HINT: Don't abandon the kids." << endl;
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else {
        cout << "invalid input, exiting game" << endl;
        exit(0);
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
            dies();
        }
        else if (val2 == 2){
            cout << "Game Over: You tried to escape however they were too fast for you and were attacked by the raptor." << endl;
            dies();
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
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
                dies();
            }
            else if (val4 == 2){
                cout << "Game Over: You are unable to defend yourself and are eaten to bits." << endl;
                dies();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
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
                    dies();
                }
                else if (val6 == 2){
                    cout << "Game Over: The raptors from the kitchen called more raptors which come and eat you alive." << endl;
                    dies();
                }
                else {
                    cout << "invalid input, exiting game" << endl;
                    exit(0);
                }
            }
            else if (val5 == 2){
                cout << "So, trap the raptor and escape them." << endl;
                cout << "You meet up and find Alan and Ellie, soon the raptors get out however the T-Rex fights them off giving you a chance to escape." << endl;
                lives();
            }
            else {
                cout << "invalid input, exiting game" << endl;
                exit(0);
            }
        }
        else {
            cout << "invalid input, exiting game" << endl;
            exit(0);
        }
    }
    else {
        cout << "invalid input, exiting game" << endl;
        exit(0);
    }
}