#include "../header/Nedry.h"

Nedry::Nedry(){

}

void Nedry::setup(){
    cout << "You've chosen Dennis Nedry! You are working in the control room as a programmer.\n";

    sceneOne();
}

void Nedry::sceneOne(){
    int val1;
    cout << "You have financial issues and are dissatisfied at your job. So, when a rival company reaches out to him to steal dinosaur embryos he agrees. The weather has turned for the worse as a storm approaches and the boat is leaving soon. In order to steal the embryos you must turn off the security system." << endl;
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
            cout << "Game Over: You took too long, the baby dinosaurs find you and eat you alive." << endl;
        }
        else if (val2 == 2){
            cout << "Game Over: You tripped before you got to the room and the baby dinosaurs found you and ate you alive." << endl;
        }
    }
    else if (val1 == 2){
        cout << "You did what your boss told you to do which buys you time." << endl;
        cout << "Suspicions are low so you are able to escape to the cold storage." << endl;
        cout << endl;

        int val3;
        cout << "You are walking towards the room. The rooms all look the same and forget where the embryos are stored. Do you…" << endl;
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
            cout << "2. Take all of the embryos and place them in a container." << endl;
            cin >> val5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (val5 == 1){
                int val6;
                cout << "You escape the raptor for now. Now do you..." << endl;
                cout << "1. Head back to the lab with your extra time to grab dinosaur eggs." << endl;
                cout << "Or" << endl;
                cout << "2. Start speed walking towards the exit." << endl;
                cin >> val6;
                cout << " \n------------------------------\n";
                cout << endl;
                if (val6 == 1){
                    cout << "Game Over: The eggs break and the embryos all fall out of your pocket. Security finds you." << endl;
                }
                else if (val6 == 2){
                    cout << "Game Over: It's too late dinosaurs are in the building and eat you alive." << endl;
                }
            }
            else if (val5 == 2){
                cout << "So, now you head outside towards the cars to head towards the dock." << endl;
                cout << "The storm is becoming stronger and stronger." << endl;
            }
        }
    }
}
