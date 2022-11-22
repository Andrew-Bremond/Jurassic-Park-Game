#include "../header/IanHammond.h"

IanHammond::IanHammond(){

}

void IanHammond::setup(){
    cout << "You've chosen Ian Malcolm and John Hammond! You are a chaos theorist and the creator of Jurassic Park." << endl;

    sceneOne();
}

void IanHammond::sceneOne()
{
    int val1;
    cout << "You were taking a tour of Jurassic Park and the cars stopped. Do you…" << endl;
    cout << "You are waiting in a car with Alan while Lex and Tim are in another car. The power is down so the security system goes down and so does the electric fence and T-Rex escapes. Do you…" << endl;
    cout << "1. Stay still and do not move." << endl;
    cout << "Or" << endl;
    cout << "2. Use the flare from the car to distract the T-Rex." << endl;
    cin >> val1;
    cout << " \n------------------------------\n";
    cout << endl;

    if (val1 == 1){
        int val2;
        cout << "The T-Rex goes towards Tim and Lex's car. You have to help them. Now do you…" << endl;
        cout << "1. Start running in circles around the T-Rex." << endl;
        cout << "Or" << endl;
        cout << "2. Yell and go towards Lex and Tim." << endl;
        cin >> val2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (val2 == 1){
            cout << "Game Over: The T-Rex eats you alive." << endl;
        }
        else if (val2 == 2){
            cout << "Game Over: The T-Rex eats you all alive." << endl;
        }
    }
    else if (val1 == 2){
        cout << "Doing that saves Alan, Tim, and Lex for now." << endl;
        cout << "Unfortunately, you now have the T-Rex's attention." << endl;
        cout << endl;

        int val3;
        cout << "The T-Rex now has you as your target. Do you…" << endl;
        cout << "1. Head in the opposite direction." << endl;
        cout << "Or" << endl;
        cout << "2. Lead the dinosaur back to the open fenced area." << endl;
        cin >> val3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (val3 == 2){
            int val4;
            cout << "The T-Rex knows what you are doing and doesn't fall for it. Now do you…" << endl;
            cout << "1. Head back to the car and hide." << endl;
            cout << "Or" << endl;
            cout << "2. Stay still and hope the T-Rex forgets." << endl;
            cin >> val4;
            cout << " \n------------------------------\n";
            cout << endl;
            if (val4 == 1){
                cout << "Game Over: The T-Rex eats the car and you so you die a quick death." << endl;
            }
            else if (val4 == 2){
                cout << "Game Over: The T-Rex swallows you alive." << endl;
            }
        }
        else if (val3 == 1){
            cout << "You lead the T-Rex towards the bathroom." << endl;
            cout << "The T-Rex takes it apart and finds someone in there and breaks it apart which falls on you." << endl;
            cout << endl;

            int val5;
            cout << "You are lying unconscious and Ellie arrives with the game warden Muldoon so they carry you to the jeep and the T-Rex reappears and starts chasing you. So do you…" << endl;
            cout << "1. Throw whatever you find in the jeep at the T-Rex." << endl;
            cout << "Or" << endl;
            cout << "2. Don't do anything." << endl;
            cin >> val5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (val5 == 1){
                int val6;
                cout << "You have angered the T-Rex and crashed into a tree. Now do you…" << endl;
                cout << "1. Look for a tree and climb up it." << endl;
                cout << "Or" << endl;
                cout << "2. Hide under the jeep." << endl;
                cin >> val6;
                cout << " \n------------------------------\n";
                cout << endl;
                if (val6 == 1){
                    cout << "Game Over: You are injured and don't make it up and are eaten alive." << endl;
                }
                else if (val6 == 2){
                    cout << "Game Over: The T-Rex picks it up and eats you alive." << endl;
                }
            }
            else if (val5 == 2){
                cout << "Not doing anything helps." << endl;
                cout << "You escape the T-Rex for now." << endl;
            }
        }
    }
}
