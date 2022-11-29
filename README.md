[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8879644&assignment_repo_type=AssignmentRepo)
# Escape Jurrasic Park
 
 > Authors: \<[Aastha Amin](https://github.com/aasthaamin)\>\<[Andrew Bremond](https://github.com/Andrew-Bremond)\>\<[Kelsey Musolf](https://github.com/M00se346)\>\<[Daniel Coelho](https://github.com/dcoelho045)\>

## Project Description
 >
 > * We have decided to create a RPG that simulates the movie Jurassic Park (1993). 
 > * This is a movie that everyone in the group has seen and loved, making the project very intresting to work on. 
 > * As of now, we plan to use C++ on visual studios (as well as github). Our input will be answer to prompts during the game, including character selection, and choices in the adventure. 
 > * The output will be the plot of the story and the continual outcome based on the user's input. With each "step" of the adventure the user has options to choose from. One may lead them to their death in the game while the other will carry on the game through a set of challenges. 
 > * Special features include a character selection page where each character has a different plot line which leads each to a different fate. 
 > 

## Class Diagram


![UML Jurrasic Park](https://user-images.githubusercontent.com/104599718/204114655-1fd078cf-d314-4b41-9755-7656fbcd12e8.jpg)


> The UML Diagram shows all our classes.
> 
> Main class:
> 
> No job other than to call Story class
> 
> Story class:
> 
> * Function one: movieDescription() will output the text description of the first half of the movie.
> * Function two: characterMenu() will output the character selection menu with a list of the playable characters. 
> * Function three: characterInfo() will output character descriptions to help the user select their character. 
> 
> Character class:
> * Function one: getInfo() output characters job and specialty. 
> * Function two: dies() output dies message and the option to restart game or quit. Will be called from each inherited class when that player dies.
> * Function three: lives() will output ending of movie for closure of the game. 
> 
> For each person class:
> 
> Each function will be a scene from the movie, with 4 total scenes per person. Here is where the main coding will be with the storylines written out with user input. 




 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase I.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > To run and play the game. First clone the repository of the project. (This repo) and run the following compilation line. and then run ./a.out.
 > 
 > 'g++ src/Character.cpp src/Story.cpp main.cpp src/Ellie.cpp src/Nedry.cpp src/IanHammond.cpp src/MiniGame.cpp src/AlanKids.cpp'
 > './a.out'
 ## Testing
 > The project was tested by using three methods of testing. The first was using googletest to unit test functions that returned values. This was primarily used for the mini game that the user has the option to play. Using googletest, we tested the return values based on different possible inputs that a user may enter. The second was we tested the program was by running the program over and over running through each path to make sure that the correct functions were called and executed based on user input. The last way that we tested the program was using vlagrind. We ran valgrind on the program to make sure that the program had no memory leaks after executing.
 
