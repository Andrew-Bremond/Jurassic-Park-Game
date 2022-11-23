//story.cpp
#include "../header/Story.h"
#include <iostream>

Story::Story(){

}


void Story::movieDescription(){

    cout << "Hello! Welcome to our game \"Escape Jurassic Park\"\n";
    cout << "Our adventure starts in the US, where paleontologist "
    << "Alan Grant and paleobotanist Ellie Sattler are diggin up some "
    << "dinosaur bones. They are visited by John Hammond, a rich older man "
    << "who asks them to join him on a trip to his island where he is "
    << "working on a project that he needs their expertise on. After "
    << "agreeing, they are flown to the island and meet chaos theorist "
    << "Ian Malcolm. Alan, Ellie, and Ian are shocked to discover that "
    << "the island has dinosaurs! Hammond is trying to open a dinosaur "
    << "attraction for the public. After meeting Hammond's grandchildren, "
    << "the group goes on a tour of the park, with Hammond watching from "
    << "headquarters. Passing through the different sections of the park, "
    << "the group leaves the safety of the cars and go to find a sick "
    << "dinosaur. Ellie and a park worker stay behind to learn more about "
    << "the Tricerotops while the group continues on with the tour. "
    << endl << endl;
    cout << "Here is where our adventure starts: \n";

    characterMenu();
    //return;
}

void Story::characterMenu(){
    cout << "Character menu: \n";
    cout << endl << "Welcome to the Character Menu \n";
    cout << "To select your character, input their number: \n";
    cout << "For more character information, enter “0” \n" << endl;

    cout << "1. Dr. Alan Grant and kids\n 2. Dr. Ellie Sattler\n "
    << "3. Dr. Ian Malcolm and John Hammond\n 4. Dennis Nedry\n";

    int input = 0;

    cin >> input;

    // if(input == 2){
    //     Ellie ellie;
    //     ellie.setup();
    // }

    // if(input == 0)
    // {
    //     characterInfo();
    // }
    // else if (input == 1)
    // {
    //     AlanKids.setup();
    // }
    // else if(input == 2)
    // {
    //     Ellie.setup();
    // }
    // else if(input == 3)
    // {
    //     IanHammond.setup();
    // }
    // else if(input == 4)
    // {
    //     Nedry.setup();
    // }
}

void Story::characterInfo(){

    cout << "Character Info: " << endl;
    cout << endl;

    cout << "Alan Grant and Kids: " << endl;
    cout << "Dr. Alan Grant is a paleontologist who focuses on velociraptors. "
    "He becomes trapped on the island, Isla Nublar, with the park owner's grandchildren" << endl;
    cout << "Tim Murphy is Hammond's grandson who has a knowledge about dinosaurs and is " 
    "a quick-thinker when navigating through the park." << endl;
    cout << "Lex Murphy is Hammond's granddaughter who has computer skills and is easily sacred "
    "by all of the dinosaurs" << endl;
    cout << endl;

    cout << "Ellie Sattler: " << endl;
    cout << "Dr. Ellie Sattler is a paleobotanist who is an expert on plants. "
    "She is trapped on the island and becomes excited to be there at first." << endl;
    cout << endl;

    cout << "Ian Malcolm and John Hammond: " << endl;
    cout << "Dr. Ian Malcolm is a mathematician who specializes in chaos theory. He is " 
    "there to make predictions on the consequences of the park with the theory about human "
    "interference in nature." << endl;
    cout << "John Hammond is the owner of Jurassic Park and found the company InGen which "
    "created the dinosaurs. He wants to make the park a successful attraction." << endl;
    cout << endl;

    cout << "Dennis Nedry: " << endl;
    cout << "Dennis Nedry works for Jurassic Park as the system programmer responsible for " 
    "networking the computers. He is a disgruntled worker who hates his job and has financial "
    "problems." << endl;
    cout << endl;
}

void Story::intro(){
    cout << "WELCOME to Jurassic Park! \n";
    cout << "\n Enter 'S' to start the game\n";
    cout << "\n Enter 'Q' to quit the game\n";

    char input;
    cin >> input;
    cout << endl;

    if(input == 'S' || input == 's'){
        movieDescription();
        //return;
    }
    else{
        cout << "Sorry to see you go! \n";
    }

}

// int main(){
//     movieDescription();
//     characterMenu();
//     return 0;
// }