#include "../header/MiniGame.h"
#include <string>

MiniGame::MiniGame(){
    
}

void MiniGame::Intro(){
    cout << "Choose a number between 1 and 5 and you will be promted with a dinosaur related question." << endl;
    cout << "See if you can answer the question correctly!" << endl;
}

string MiniGame::DinoGenerator(int numInput){
    // T-rex
    if(numInput == 1){
        return "What is the most popular dino to the general public: ";
    }
    // Triceratops 
    else if(numInput == 2){
        return "What dinosaur has 3 horns on its head: ";
    }
    // Velociraptor 
    else if(numInput == 3){
        return "What dino's name means Swift and Speedy thief: ";
    }
    // Brachiosaurus 
    else if(numInput == 4){
        return "What dinosaur has a 30 foot long neck: ";
    }
    // Stegosaurus
    else if(numInput == 5){
        return "What dinosaur has large triangular spines on its neck: ";
    }
    return "";
}

bool MiniGame::Verification(string choice, int numInput){
    if(numInput == 1 && (choice == "T-rex" || choice == "t-rex")){
        return true;
    }
    else if(numInput == 2 && (choice == "Triceratops" || choice == "triceratops")){
        return true;
    }
    else if(numInput == 3 && (choice == "Velociraptor" || choice == "velociraptor")){
        return true;
    }
    else if(numInput == 4 && (choice == "Brachiosaurus" || choice == "brachiosaurus")){
        return true;
    }
    else if(numInput == 5 && (choice == "Stegosaurus" || choice == "stegosaurus")){
        return true;
    }
    else {
        return false;
    }
}