#include "../header/Nedry.h"

Nedry::Nedry(){

}

void Nedry::setup(){
    cout << "You've chosen Dennis Nedry! You are working in the control room as a programmer.\n";

    sceneOne();
}

void Nedry::sceneOne(){
    int val1;
    cout << "You have financial issues and are dissatisfied at your job. So, when a rival company reaches out to you to steal dinosaur embryos you agree. The weather has turned for the worse as a storm approaches and the boat is leaving soon that would take you and the embryos to safety. In order to steal the embryos you must turn off the security system." << endl;
    cout << "You need to turn off the security system in the cold storage room without anyone knowing what you are doing. Do you…" << endl;
    cout << "1. Say that you are finished with your work." << endl;
    cout << "Or" << endl;
    cout << "2. Say that you are implementing bug fixes to the system which may cause delay in the system." << endl;
    cin >> val1;
    cout << " \n------------------------------\n";
    cout << endl;

    if (val1 == 1){
        int val2;
        cout << "Your coworkers and Hammond are suspicious. One of your coworkers starts following you. Now do you…" << endl;
        cout << "1. Run to the vending machine and buy snacks." << endl;
        cout << "Or" << endl;
        cout << "2. Don't care, head straight for the cold storage room." << endl;
        cin >> val2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (val2 == 1){
            cout << "Game Over: You took too long buying snacks to cover yourself, the boat left before you even got a chance to get the embryos." << endl;
        }
        else if (val2 == 2){
            cout << "Game Over: You aren't as fast as you think and your coworkers watch you go into the cold starage room and arrest you." << endl;
        }
    }
    else if (val1 == 2){
        cout << "You did what your boss told you to do which buys you time." << endl;
        cout << "Suspicions are low so you are able to escape to the cold storage." << endl;
        cout << endl;

        int val3;
        cout << "You are walking towards the room. The rooms all look the same and you forget where the embryos are stored. Do you…" << endl;
        cout << "1. Keep on walking." << endl;
        cout << "Or" << endl;
        cout << "2. Go back to your desk and find a map." << endl;
        cin >> val3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (val3 == 2){
            int val4;
            cout << "Your boss finds you and asks you where you were. Now do you…" << endl;
            cout << "1. Start muttering about the pay and how you hate your work to distract your boss." << endl;
            cout << "Or" << endl;
            cout << "2. Fake being sick." << endl;
            cin >> val4;
            cout << " \n------------------------------\n";
            cout << endl;
            if (val4 == 1){
                cout << "Game Over: You are given more work and can't leave. The dinosaurs from the lab escape and eat you alive as the system goes down." << endl;
            }
            else if (val4 == 2){
                cout << "Game Over: He makes you go home but you took too long and the dinosaurs from the lab escape and eat you alive as the system goes down." << endl;
            }
        }
        else if (val3 == 1){
            cout << "You make it to the cold storage room." << endl;
            cout << "No one is suspicious right now so you proceed." << endl;
            cout << endl;

            int val5;
            cout << "You finally make it and find the embryos. Now, you must take all of the embryos so you enter the room. Do you…" << endl;
            cout << "1. Stuff them in your pockets as there is no time before the boat leaves." << endl;
            cout << "Or" << endl;
            cout << "2. Take all of the embryos and place them in a shaving cream bottle container." << endl;
            cin >> val5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (val5 == 1){
                int val6;
                cout << "You have the embryos in your pockets. Now do you..." << endl;
                cout << "1. Head back to the lab with your extra time to finalize your cover." << endl;
                cout << "Or" << endl;
                cout << "2. Start speed walking towards the exit." << endl;
                cin >> val6;
                cout << " \n------------------------------\n";
                cout << endl;
                if (val6 == 1){
                    cout << "Game Over: The eggs break during your walk back and the embryos all fall out of your pocket. Security finds you." << endl;
                }
                else if (val6 == 2){
                    cout << "Game Over: It's too late and dinosaurs are now in the building. They eat you alive." << endl;
                }
            }
            else if (val5 == 2){
                cout << "Congrats, you were able to grab the embryos in time to still maybe make the boat!" << endl;
                cout << " Be careful though, the storm is becoming stronger and stronger." << endl;
                //call sceneTwo();
            }
        }
    }
}



void Nedry::sceneTwo(){
    int input1;
    cout << "You now have the embryos in your sealed container. The container only has limited "
    << "cold time to keep the embryos safe AND the boat leaves any minute. "
    << "You are looking for the jeeps from the embryo room. Do you…" << endl;

    cout << "1. Go back to your office to find directions from your co-workers\n";
    cout << "OR\n";
    cout << "2. Head to the right and hope to find a map while you move\n";
    
    cin >> input1;
    cout << " \n------------------------------\n";
    //option one choice:
    if (input1 == 1){
        int input2;
        //went to office track:
        cout << "You make it to the office without getting lost. You quickly tell "
        << "your coworkers an excuse to leave again. You tell them..?" << endl;
        cout << "1. That you have to reset the computers manually in another room.\n";
        cout << "Or\n";
        cout << "2. You have to go to the vending machine. \n";
        cin >> input2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (input2 == 2){
            cout << "Game Over: You've already used this excuse once! "
            << "They catch onto your sneaky plan and arrest you.\n";
            //Character.dies()
        }
        else if (input2 == 1){
            cout << "Game Over: You walk down twards the jeeps but had forgotten "
            << "about the security camera in the other parts of the buildings. "
            << "You go down a hallway that still has its cameras on and is caught. \n";
            //Character.dies()
        }
    } //option two choice:
    else if (input1 == 2){
        cout << "You walk down the hallway to an intersection and find a map. It directs you towards the jeeps. "
        << " You can either pass by the empty cafeteria or the crowded science labs, which way do you go? \n" << endl;

        int input3;
        cout << "1. Crowded science lab" << endl;
        cout << "Or" << endl;
        cout << "2. Empty cafeteria \n";
        cin >> input3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (input3 == 1){
            int input4;
            cout << "Passing by the science lab some coworkers call out to you for some advice. Do you... \n";
            cout << "1. Hastily go and help them." << endl;
            cout << "Or" << endl;
            cout << "2. Pretend like you don't hear them and keep walking." << endl;
            cin >> input4;
            cout << " \n------------------------------\n";
            cout << endl;
            if (input4 == 1){
                cout << "Game Over: Your coworkers corner you and ask pressing "
                << "questions after noticing your shifty behavior. Your plan is revealed and you are caught.\n";
            }
            else if (input4 == 2){
                cout << "Game Over: Your coworkers call security after noticing how nervous you walk by. You are caught.\n";
            }
        }
        else if (input3 == 2){
            cout << "You walk by the quiet cafeteria without running into anybody. You hear some noises from the kitchen. Do you... \n";
            cout << endl;

            int input5;
            cout << "1. Go look in the kitchen, you could use a snack for on the road.\n";
            cout << "Or" << endl;
            cout << "2. Continue speed walking down th hallway worred about time. \n";
            cin >> input5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (input5 == 1){
                cout << "Game Over: Your snack break took too long, it would be impossible to drive to the boat ontime. \n";
            }
            else if (input5 == 2){
                cout << "You make it to the jeeps in time. Now to drive through the storm, Good luck!\n";
                cout << "\n------------------------------\n";
                sceneThree();
            }
        }
    }
}
//end scene two






void Nedry::sceneFour(){
    int input1; 
    cout << "You crashed your car while not staying focused on the road. "
    "All by yourself how will you survive and bring the eggs back. Do you. . ." << endl;
    cout << "1. Get out of the car and use the winch to try and unstuck the Jeep." << endl;
    cout << "Or" << endl;
    cout << "2. Stay in the car and wait for potential help to show up." << endl;
    cin >> input1; 
    cout << " \n------------------------------\n";
    cout << endl;

    if(input1 == 1){
        int input2; 
        cout << "You climb out of the Jeep and grab the winch. While trying to tie the winch "
        "around a large tree you spot a solo dinosaur. Do you. . . " << endl;
        cout << "1. Fight the dinosaur" << endl;
        cout << "Or" << endl;
        cout << "2. Try and calmly walk away from the dinosaur back to your vehicle." << endl;
        cin >> input2; 
        cout << " \n------------------------------\n";
        cout << endl;

        if(input2 == 1){
            int input3;
            cout << "You square up towards the dinosaur ready for a fight. "
            "Next to you, you see the winch and a large wooden stick. How do you defend yourself? Do you. . ." << endl;
            cout << "1. Grab the winch and use it as a whip." << endl;
            cout << "Or" << endl;
            cout << "2. Use the large stick as a baton." << endl;
            cin >> input3;
            cout << " \n------------------------------\n";
            cout << endl;

            if(input3 == 1){
                cout << "Game Over: You, even with a weapon, are no competition for a dinosaur. "
                "He spits on your face and you die painfully." << endl;
            }
            else if(input3 == 2){
                cout << "Game Over: You, even with a weapon, are no competition for a dinosaur. "
                "He spits on your face and you die painfully." << endl;
            }
        }
        else if(input2 == 2){
            int input4; 
            cout << "You try and act unafraid of the dinosaur. You quickly, but calmly walk towards your vehicle. "
            "However, when you look back, the dinosaur quietly caught up to you. Do you. . ." << endl;
            cout << "1. Grab a stick and attempt to throw it as a distraction to the dinosaur." << endl;
            cout << "Or" << endl;
            cout << "2. Run as fast as you can from the dinosaur." << endl;
            cin >> input4;
            cout << " \n------------------------------\n";
            cout << endl;

            if(input4 == 1){
                cout << "Game Over: the dinosaur is not a dog and didn't fall for your trick. "
                "Instead it spits acid like liquid on your face. He blinds you and kills you." << endl;
                cout << "Though this is what happens in the movie, stealing is never "
                "tolerated and punishment will be inflicted - by dinos" << endl;
            }
            else if(input4 == 2){
                cout << "Game Over: You trigger the dinosaurs' predatory instincts and he chases you down and rips out your neck." << endl;
            }
        }
    }
    else if(input1 == 2){
        int input5;
        cout << "You stayed in the car for several hours now with no sign of the storm letting up or help coming. Do you. . ." << endl;
        cout << "1. Get out and look for help by going back." << endl;
        cout << "Or" << endl;
        cout << "Stay in the car and continue to wait for help." << endl;
        cin >> input5;
        cout << " \n------------------------------\n";
        cout << endl;

        if(input5 == 1){
            cout << "Game Over: A dinosaur strolling by notices you stumbling in the rain and quickly consumes you as dinner." << endl;
        }
        else if(input5 == 2){
            cout << "Game Over: A curious pack of compies, chicken size dinosaurs,  spotted the car and broke in. They painfully eat you alive." << endl;
        }
    }
}
