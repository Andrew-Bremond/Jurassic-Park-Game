
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
            Character.dies();
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
                    Character.dies();

                }
            }
        }
    }
}
//end scene two