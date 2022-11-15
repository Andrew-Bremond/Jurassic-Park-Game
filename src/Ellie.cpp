//Ellie.cpp
#include "header/Ellie.h"


void setup(){
    cout << "You've chosen Dr. Ellie Sattler!\n";
    cout << "\n after staying behind with the sick dinosaur to "

    //sceneOne();
}


voidvoid Ellie::sceneOne(){
    int input1;
    cout << "You stayed behind with the sick dinosaur to check out its poop. "
    << "When you are done you head back to the headquarters to wait for the others "
    << "that went on to finish the tour. When they don’t come back and a storm "
    << "appears, you want to go and help. The power is out and the dinosaur fences "
    << "are down, do you…" << endl;

    //option one:
    cout << "1. Stay safe inside and wait out the storm?\n";
    cout << "Or \n";

    //option 2:
    cout << "2. Go out into the storm with Muldoon (the head of park safety). \n";
    cin >> input1;
    cout << endl;

    //option one choice:
    if (input1 == 1){
        int input2;
        cout << "You stay inside and watch the storm continue on. Theres no "
        << "sign of it calming down so you decide to… " << endl;
        cout << "1. Go out in a jeep yourself and try to find the others from the tour.\n";
        cout << "Or\n";
        cout << "2. Go onto the roof with binoculars to try and see the others. \n";
        cin >> input2;
        cout << endl;
        if (input2 == 1){
            cout << "Game Over: you waited too long and the jeep is stuck "
            << "in deep mud from the rain, youre trying to get the jeep out of "
            << "the mud when a Dilophosaurus sees you and hunts you down. Its venom kills you!\n";
            //call dies()
        }
        else if (input2 == 2){
            cout << "Game Over: While on the roof trying to see over the tree tops of the jungle, "
            << "the storm picks up. It is attracted to the tallest thing with metal and strikes "
            << "you and the binoculars!\n";
            //call dies()
        }
    } //option two choice:
    else if (input1 == 2){
        cout << "You arrive at the T-rex enclosure where the tour was last seen. "
        << "Its a wreck, the fence is torn, the cars are ripped apart, and it is "
        << "STILL dumping rain.\n" << endl;

        int input3;
        cout << "You realise you have two choices. What do you pick?" << endl;
        cout << "1. Look in the jeep wreckage on the road by the T-rex enclosure." << endl;
        cout << "Or" << endl;
        cout << "2. Walk down the road in hopes of finding Alan and the others nearby hiding and waiting. \n";
        cin >> input3;
        cout << endl;

        if (input3 == 2){
            int input4;
            cout << "You walk down the road for a bit and see a wrecked outhouse as "
            << " you walk. Suddenly the floor begins to shake from some dinosaur around "
            << "the corner. Do you... \n";
            cout << "1. Turn and run back the way you came." << endl;
            cout << "Or" << endl;
            cout << "2. Run into the jungle off the path and hide in the bushes." << endl;
            cin >> input4;
            cout << endl;
            if (input4 == 1){
                cout << "Game Over: The t-rex was making the sound and got your scent. "
                << "Sorry but you’re its next snack! \n";
            }
            else if (input4 == 2){
                cout << "Game Over: The t-rex isnt the only dangerous dinosaurs at the "
                << "park. The Dilong dinosaur was right behind the bush and waited "
                << "for you to sit down before taking a big bite!\n";
            }
        }
        else if (input3 == 1){
            cout << "You look in the jeep, no sign of Alan but there are foot prints "
            << "along with children footprints, they must be Hammond’s grandchildren. You hear "
            << "yelling from behind you on the road. \n";
            cout << "From here do you..." << endl;
            cout << endl;

            int input5;
            cout << "1. Go back up to the jeep to see what is happening.\n";
            cout << "Or" << endl;
            cout << "2. Continue into jungle following the steps ignoring the yells. \n";
            cin >> input5;
            cout << endl;

            if (input5 == 2){
                int input6;
                cout << "The foot steps take you further into the bush when you hear a "
                << "noise like someone walking. Do you... \n";
                cout << "1. Run towards the noise (It might be Alan!).\n";
                cout << "Or\n";
                cout << "2. Call out for Alan\n";
                cin >> input6;
                cout << endl;
                if (input6 == 1){
                    cout << "Game Over: That was not alan. You just ran into the raptors. Thanks for feeding them!\n";
                }
                else if (input6 == 2){
                    cout << "Game Over: Dinosaurs have ears - and sharp fangs. You run into some and never come out \n";
                }
            }
            else if (input5 == 2){
                cout << "You go into the jeep and see Ian yelling at you, you hear the T-rex "
                << "before you see it. You jump into the car with Ian and Muldoon and drive to safety.\n";
                //call lives()
            }
        }
    }
}
