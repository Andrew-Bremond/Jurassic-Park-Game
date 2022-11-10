//story.cpp
void intro(){
    cout << "WELCOME to Jurassic Park! \n";
    cout << "\n Enter 'S' to start the game\n";
    cout << "\n Enter 'Q' to quit the game\n";

    char input;
    cin >> input;
    cout << endl;

    if(input == "S" || input == "s"){
        movieDescription();
        //return;
    }
    else{
        cout << "Sorry to see you go! \n";
        return 0;
    }

}

void movieDescription(){

    cout << "Hello! Welcome to our game \"Escape Jurassic Park\"\n";
    cout << "Our adventure starts in the US, where paleontologist "
    << "Alan Grant and paleobotanist Ellie Sattler are diggin up some "
    << "dinosaur bones. They are visited by Hammond, a rich older man "
    << "who asks them to join him on a trip to his island where he is "
    << "working on a project that he needs their expertise on. After "
    << "agreeing, they are flown to the island and meet chaos theorist "
    << "Ian Malcolm. Alan, Ellie, and Ian are shocked to discover that "
    << "the island has dinosaurs! Hammond is trying to open a dinosaur "
    << "attraction for the public. After meeting Hammond’s grandchildren, "
    << "the group goes on a tour of the park, with Hammond watching from "
    << "headquarters. Passing through the different sections of the park, "
    << "the group leaves the safety of the cars and go to find a sick "
    << "dinosaur. Ellie and a park worker stay behind to learn more about "
    << "the Tricerotops while the group continues on with the tour. "
    << endl << endl;
    cout << "Here is where our adventure starts: \n";

    CharacterMenu();
    //return;
}



    void characterMenu(){

    cout << "Character menu: \n";
    cout << endl << "Welcome to the Character Menu \n";
    cout << "To select your character, input their number: \n";
    cout << "For more character information, enter “0” \n" << endl;

    cout << "1. Dr. Alan Grant and kids\n 2. Dr. Ellie Sattler\n "
    << "3. Dr. Ian Malcolm and John Hammond\n 4. Dennis Nedry\n"

    int input = 0;

    cin >> input;

    switch (input){

        case 0:
            //call get info();
            break;  //break jumps out of rest of switch block
        case 1:
            //call Alan and Kids
            break;
        case 2:
            //call ellie
            break;
        case 3:
            //call ian and hammond
            break;
        case 4:
            //call nedry
            break;
    }


    }
    void characterInfo(){

        cout << "Character Info: \n";
        cout << endl;

        cout << "Alan Grant and Kids: \n Dr. Alan Grant is a ...";





    }