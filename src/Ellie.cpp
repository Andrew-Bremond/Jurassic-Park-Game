//Ellie.cpp
#include "../header/Ellie.h"

Ellie::Ellie(){

}

void Ellie::setup(){
    cout << "You've chosen Dr. Ellie Sattler!\n";

    sceneOne();
}



void Ellie::sceneOne(){
    int input1;
    cout << "You stayed behind with the sick dinosaur to check out its poop. "
    << "When you are done you head back to the headquarters to wait for the others "
    << "that went on to finish the tour. When they don’t come back and a storm "
    << "appears, you want to go and help. The power is out and the dinosaur fences "
    << "are down, do you…" << endl;

    cout << "1. Stay inside where is is nice and warm\n";
    cout << "OR\n";
    cout << "2. Go out to try and find the others in the storm. \n";
    
    cin >> input1;
    cout << " \n------------------------------\n";
    //option one choice:
    if (input1 == 1){
        int input2;
        cout << "You stay inside and watch the storm continue on. Theres no "
        << "sign of it calming down so you decide to… " << endl;
        cout << "1. Go out in a jeep yourself and try to find the others from the tour.\n";
        cout << "Or\n";
        cout << "2. Go onto the roof with binoculars to try and see the others. \n";
        cin >> input2;
        cout << " \n------------------------------\n";
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
        cout << " \n------------------------------\n";
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
            cout << " \n------------------------------\n";
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
            cout << " \n------------------------------\n";
            cout << endl;

            if (input5 == 2){
                int input6;
                cout << "The foot steps take you further into the bush when you hear a "
                << "noise like someone walking. Do you... \n";
                cout << "1. Run towards the noise (It might be Alan!).\n";
                cout << "Or\n";
                cout << "2. Call out for Alan\n";
                cin >> input6;
                cout << " \n------------------------------\n";
                cout << endl;
                if (input6 == 1){
                    cout << "Game Over: That was not alan. You just ran into the raptors. Thanks for feeding them!\n";
                }
                else if (input6 == 2){
                    cout << "Game Over: Dinosaurs have ears - and sharp fangs. You run into some and never come out \n";
                }
            }
            else if (input5 == 1){
                cout << "You go into the jeep and see Ian yelling at you, you hear the T-rex "
                << "before you see it. You jump into the car with Ian and Muldoon and drive to safety.\n";
                cout << "\n------------------------------\n";
                sceneTwo();
            }
        }
    }
}
//end scene one

//sceneTwo starting here
void Ellie::sceneTwo (){
//sceneTwo starts here
//need to add the dies and lives funtion
    cout << "After drivin Ian to safety- the power goes out at the parks buildings. "
    << "In order to get in contaact with those still out in the storm, you need to get "
    << "the power/phones back on. You voulenteer to go to the power shed. After an intense "
    << "run, you make it into the shed and switch the power lever on...\n";

    cout << "\n------------------------------\n";


    int choice1;
    cout << "You just finished turning on the power switch and you're too quick to celebrate. A raptor appears right behind you." 
    << "You run past a fenced door with the raptor right behind your tail. You... \n1.Close the door to try and stop the raptor." 
    << "\n2. Focus on running ahead to try and outrun the raptor. \n3. Grab a nearby wrench and fight 1 on 1 with the raptor." << endl;
    cin >> choice1;
    cout << " \n------------------------------\n";
    cout << endl;

    if (choice1 == 1) {
        int choice2;
        cout << "You successfully close the door, but the fenced door is not enough to keep it closed. All of a sudden, you see Ray's arm land on your shoulder. " 
        << "You thought it was Ray's arm, but you didn't see a body attached to it. With the raptor biting through the fence you... \n"
        << "1. Throw the arm at the raptor and run away. \n2. Lean against the the fenced door." << endl;
        cin >> choice2;
        cout << " \n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            int choice3;
            cout << "That confused the raptor which buys you more time to escape, and just as you escape you meet face to face with another raptor eating Muldoon. "
            << "\n1. You hide in the bushes. \n2. You pretend to be dead. \n3. Running is futile, you attempt to high five Muldoon's remaining hand and go out in style." << endl;
            cin >> choice3;
            cout << " \n------------------------------\n";
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
            cout << " \n------------------------------\n";
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
        cout << " \n------------------------------\n";
        cout << endl;

        if (choice2 == 1){
            cout << "GAME OVER: The BIG ONE comes from the bushes in an ambush and eats you. Clever Girl \nHINT: You can't outrun a raptor." << endl;
        }
        else if (choice2 == 2){
            cout << "GAME OVER: You accidently fall off a tree and the raptors get you. What a klutz. \nHINT: You can't outrun a raptor." << endl;
        }
    }
    else if (choice1 == 3) {
        int choice2;
        cout << "You've been going the gym lately, and you think you can win this. You decide to swing first. \n"
        << "1. You swing for the head. \n2. You aim for the legs." << endl;
        cin >> choice2;
        cout << " \n------------------------------\n";
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

//Scene Three Starts Here
void Ellie::sceneThree(){
    int val1;
    cout << "You turned on the power, however the security system and phone lines are still down. Once you enter the control room you see the raptor trying to break in. Do you…" << endl;
    cout << "The raptor is still trying to break in by pounding the door. You don't have much time to restore the systems. Do you..." << endl;
    cout << "1. Work on figuring out how to restore the power to the security system for the park and communication." << endl;
    cout << "Or" << endl;
    cout << "2. Help Alan hold down the door as the raptor is trying to get in." << endl;
    cin >> val1;
    cout << " \n------------------------------\n";
    cout << endl;

    if (val1 == 1){
        int val2;
        cout << "The raptor is still trying to break in by pounding the door. You don't have much time to restore the systems. Now do you…" << endl;
        cout << "1. Unplug all of the wires and plug them in again." << endl;
        cout << "Or" << endl;
        cout << "2. Click on lots of buttons on the screen." << endl;
        cin >> val2;
        cout << " \n------------------------------\n";
        cout << endl;
        if (val2 == 1){
            cout << "Game Over: The system took too long to load now the dinosaur has eaten you alive." << endl;
        }
        else if (val2 == 2){
            cout << "Game Over: You took too long trying to figure out what to do and the system froze so now the dinosaur has eaten you alive." << endl;
        }
    }
    else if (val1 == 2){
        cout << "Helping Alan hold down the door prevents the raptor entering for some time." << endl;
        cout << "Lex recognizes the system while you hold down the door and works on locking the door that you are holding back." << endl;
        cout << endl;

        int val3;
        cout << "The raptor knows how to open doors and its force is becoming too much to handle. Do you..." << endl;
        cout << "1. Keep on hold back the door until the security system for the door is activated." << endl;
        cout << "Or" << endl;
        cout << "2. Try to reach for the gun on the floor a couple feet away from you." << endl;
        cin >> val3;
        cout << " \n------------------------------\n";
        cout << endl;

        if (val3 == 2){
            int val4;
            cout << "You grabbed the weapon but the door is unsteady. Now do you..." << endl;
            cout << "1. Let the door open a bit to shoot the raptor." << endl;
            cout << "Or" << endl;
            cout << "2. Shoot the raptor through the glass window on the door." << endl;
            cin >> val4;
            cout << " \n------------------------------\n";
            cout << endl;
            if (val4 == 1){
                cout << "Game Over: The raptor moves much faster than you and enters the room then attacks you." << endl;
            }
            else if (val4 == 2){
                cout << "Game Over: You missed the raptor and glass has shattered so the raptor comes into the room and attacks you." << endl;
            }
        }
        else if (val3 == 1){
            cout << "Lex is able to lock the doors in time for you to escape." << endl;
            cout << "The system is successfully rebooted." << endl;
            cout << endl;

            int val5;
            cout << "The raptor figures out the doors are locked and cannot go through that way. So, they run through the glass. Do you..." << endl;
            cout << "1. Run and around the room and exit through the door." << endl;
            cout << "Or" << endl;
            cout << "2. Take the ladder in the room to escape through the vents" << endl;
            cin >> val5;
            cout << " \n------------------------------\n";
            cout << endl;

            if (val5 == 1){
                int val6;
                cout << "You escape the raptor for now. Now do you..." << endl;
                cout << "1. Look for a room to hide in until help arrives." << endl;
                cout << "Or" << endl;
                cout << "2. Run around looking for the safe room." << endl;
                cin >> val6;
                cout << " \n------------------------------\n";
                cout << endl;
                if (val6 == 1){
                    cout << "Game Over: The raptor finds you in the room and tears you apart." << endl;
                }
                else if (val6 == 2){
                    cout << "Game Over: The raptor corners you and throws you around." << endl;
                }
            }
            else if (val5 == 2){
                cout << "You, Alan, and the kids are in the vents. However, both raptors are now after you." << endl;
                cout << "The raptors are still on your tail." << endl;
            }
        }
    }
}
//Scene Three Ends Here

// Scene Four Starts Here
void Ellie::sceneFour(){
    int input1;
    cout << "You, Grant, and the kids are crawling through the vents and come to a "
    "grate directly above the T-Rex skeleton in the main lobby of the museum. Do you . . ." << endl;
    cout << "1. Remove the grate and try and lower yourself and the children to the ground." << endl;
    cout << "Or" << endl;
    cout << "2. Continue running down the vents." << endl;
    cin >> input1;
    cout << " \n------------------------------\n";
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
        cout << " \n------------------------------\n";
        cout << endl;

        if(input2 == 1){
            int input3;
            cout << "Your group scurries up the scaffolding barely escaping the raptor back into the vents. Do you . . ." << endl;
            cout << "1. Run back to the kitchen where you escaped previously" << endl;
            cout << "Or" << endl;
            cout << "2. Run in a different direction down the vents." << endl;
            cin >> input3;
            cout << " \n------------------------------\n";
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
            cout << " \n------------------------------\n";
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
        cout << " \n------------------------------\n";
        cout << endl;

        if(input5 == 1){
            cout << "You turn around and see the velociraptor snuck up behind you. He mauls you to death." << endl;
            cout << "GAME OVER" << endl;
        }
        else if(input5 == 2){
            cout << "Death by large spinning fan." << endl;
            cout << "GAME OVER" << endl;
            //calls dies()
        }
    }
}
// Scene 4 Ends Here

