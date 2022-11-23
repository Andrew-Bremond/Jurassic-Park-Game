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


void IanHammond::sceneThree() {
    int choice1;
    cout << "Ellie has just arrived down to the electrical room to power on the park." << endl;
    cout << "1. Tell Ellie to go down the metal staircase." << endl;
    cout << "2. Tell Ellie to take a left." << endl;
    cout << "3. Tell Ellie to follow her heart." << endl;
    cin >> choice1;
    cout << " \n------------------------------\n";
    cout << endl;

    if (choice1 == 1) {
        int choice2;
        cout << "While Ellie wonders around the power room, she gets lost." << endl;
        cout << "1. Tell her to walk through the fenced door." << endl;
        cout << "2. Tell her to follow the main bundle of cables." << endl;
        cin >> choice2;
        cout << " \n------------------------------\n";
        cout << endl;
        
        if (choice2 == 1){
            int choice3;
            cout << "As Ellie walks through the fenced door she see Ray Arnold's ripped arm." << endl;
            cout << "Soon after Ellie encounters a raptor." << endl;
            cout << "1. Yell RUNNNN" << endl;
            cout << "2. Tough luck Ellie." << endl;
            cin >> choice3;
            cout << " \n------------------------------\n";
            cout << endl;

            if (choice3 == 1){
                cout << "You scream RUN at the top of your lungs for Ellie to start running." << endl;
                cout << "GAME OVER: Unfortunately, Ellie can't outrun a raptor." << endl;
                cout << "HINT: Try to follow the cables." << endl;
                
            }
            else if (choice3 == 2){
                cout << "GAME OVER: :(" << endl;
                cout << "HINT: Try to follow the cables." << endl;
            }
            else {
                cout << "invalid input, exiting game." << endl;
                exit(0);
            }

        }
        else if (choice2 == 2){
            int choice3;
            cout << "Ellie found the power box." << endl;
            cout << "Ellie needs to pump up the primer handle in order to get a charge." << endl;
            cout << "The primer handle is..." << endl;
            cout << "1. Large, Flat and Gray." << endl;
            cout << "2. Small, Round, and Red." << endl;
            cin >> choice3;
            cout << " \n------------------------------\n";
            cout << endl;

            if (choice3 == 1) {
                int choice4;
                cout << "Ellie pulls the switch and now she is at the last step." << endl;
                cout << "1. Under the words “Power Outage” there's a red button that says “Push to Open” " << endl;
                cout << "tell Ellie to push that one." << endl;
                cout << "2. Under the words “Contact Position” there's a green button that says “Push to Close " << endl;
                cout << "tell Ellie to push that one." << endl;
                cin >> choice4;
                cout << " \n------------------------------\n";
                cout << endl;

                if (choice4 == 1){
                    cout << "GAME OVER: Wrong button :(" << endl;

                }
                else if (choice4 == 2){
                    cout << "Congrats, the power is back on" << endl;
                }
            }
            else if (choice3 == 2) {
                cout << "GAME OVER: Ellie flipped the detonate switch and exploded." << endl;
            }
            else {
                cout << "invalid input, exiting game." << endl;
                exit(0);
            }
        }
        else {
            cout << "invalid input, exiting game." << endl;
            exit(0);
        }
    }
    else if (choice1 == 2) {
        int choice2;
        cout << "Confused Ellie tells you that there is no left turn and that she can only go down." << endl;
        cout << "As she walks down she makes another intersection." << endl;
        cout << "1. Tell Ellie to take a left." << endl;
        cout << "2. Tell Ellie to take a right." << endl;
        cin >> choice2;
        cout << " \n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: Ellie falls down a hole and meets her fate." << endl;
            cout << "HINT: Make sure to walk down the stairs in the first place." << endl;
        }
        else if (choice2 == 2){
            cout << "GAME OVER: Ellie stumbled upon a raptor." << endl;
            cout << "HINT: Make sure to walk down the stairs in the first place." << endl;
        }
        else {
            cout << "invalid input, exiting game." << endl;
            exit(0);
        }
    }
    else if (choice1 == 3) {
        int choice2;
        cout << "Tired of your mediocre jokes, Ellie goes downstairs. Ellie sees a raptor." << endl;
        cout << "1. Tell Ellie to fight it and keep her mission." << endl;
        cout << "2. Tell Ellie to sneak by and turn on the power." << endl;
        cin >> choice2;
        cout << " \n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: Despite your amazing speech, Ellie got beat by the raptor." << endl;
            cout << "HINT: Make sure to walk down the stairs in the first place." << endl;

        }
        else if (choice2 == 2){
            cout << "Game Over: Ellie got spotted by the raptor due to your loud walkie-talkie." << endl;
            cout << "HINT: Make sure to walk down the stairs in the first place." << endl;
        }
    }
    else {
        cout << "invalid input, exiting game." << endl;
        exit(0);
    }
}

void IanHammond::sceneTwo(){
    int input1;
    cout << "Hammond (you) are sitting down eating icecream in the cafeteria. "
    << "You are surrounded by your lif’s work but you feel empty without your "
    << "grandchildren. You are worried sick. Ellie Sattler ssits down with you do you:" << endl;

    cout << "1. Start a conversation with her\n";
    cout << "OR\n";
    cout << "2. Ignore her and quietly eat ice cream \n";
    
    cin >> input1;
    cout << " \n------------------------------\n";
    //option one choice:
    if (input1 == 2){
        int input2;
        cout << "Ellie starts talking to you - you learn that Dr. Ian Malcolm is fine but you "
        << "still worry about your grandchildren. Do you:" << endl;
        cout << " 1. Start crying and give up \n";
        cout << "Or\n";
        cout << "2. Curse Ian’s name because he was saved and not your grandchildren\n";
        cin >> input2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (input2 == 1){
            cout << "Game Over: Giving up already?! You can still save your family!\n";
            dies();
        }
        else if (input2 == 2){
            cout << "Game Over: That helps nobody - calm down!\n";
            //call dies()
        }
    } //option two choice:
    else if (input1 == 1){
        cout << "You begin talking with Ellie. you discuss your thoughts and worries. "
        << "What do you talk about?\n" << endl;

        int input3;
        cout << "1. Why dinosaurs are so great!" << endl;
        cout << "Or" << endl;
        cout << "2. How worried you are for your grandchildren\n";
        cin >> input3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (input3 == 1){
            cout << "Game Over: Dinosaurs being great is not your true worry - "
            << "why not speak your truth?\n";
        }
        else if (input3 == 2){
            cout << "You mention your grandchildren. It is brought up that "
            << "they are with a dinosaur expert - Alan grant. This gives you "
            << "some peace of mind. From here you get sentimental.\n";
            cout << "Do you..." << endl;
            cout << endl;

            int input5;
            cout << "1. Talk about your flea circus that you made growing up and "
            << "how its similar to Jurassic Park \n";
            cout << "Or" << endl;
            cout << "2. Talk about how tight your shoes are on your feet \n";
            cin >> input5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (input5 == 2){
                cout << "Game over: You mention your shoes in a serious conversation "
                << "- Ellie slaps you. You've lost all respect from others - the park is not approved "
                << "and your grandchildren are still lost in the park. \n";
            }
            else if (input5 == 1){
                cout << "You continue on - rambling now about how the next dinosaur park "
                << "will be better. Less mistakes. More real like the Flea circus. Ellie stops "
                << "you and she yells at you. She states that your grandchildren lives "
                << "are on the line. This isnt a game. You hear her. Your next move is:\n";
                int input6;
                cout << "1. Agree with Ellie - and finish your ice cream\n";
                cout << "Or" << endl;
                cout << "2. Disagree and put the lives of your grandchildren at risk. \n";
                cin >> input6;
                cout << " \n------------------------------\n";
                cout << endl;

                if(input6 == 1){
                    cout << "Congrats, your talk with Ellie has heled you see the danger of the "
                    << "park and value the lives of your grandchildren over the possible money "
                    << "you could make. Good luck with your next challenge!";
                    sceneThree();

                }
                else if(input6 == 2){
                    cout << "Game Over: You put the lives of your grandchildren at risk and "
                    << "paid the ultimate price - losing the ones you love. Even the park is lost "
                    << "- there is no saving your dream \n";
                    dies();

                }
            }
        }
    }
}
//end scene two

