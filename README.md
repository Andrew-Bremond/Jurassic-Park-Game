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


<img width="1011" alt="UML_Final jpg" src="https://user-images.githubusercontent.com/104599718/204416538-c1de2781-bb29-4e65-9654-281fc08ed203.png">



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
> ScreenShot 1: Ellie character chosen, full run of game surviving.
 ><img width="1204" alt="Screenshot1" src="https://user-images.githubusercontent.com/114311963/204415776-18fa5e20-cc55-4daf-bcb9-8bc082df2668.png">
 ><img width="1208" alt="Screenshot2" src="https://user-images.githubusercontent.com/114311963/204415817-fcc607a7-6e16-456c-9004-91422cad9a75.png">
 ><img width="1193" alt="Screenshot3" src="https://user-images.githubusercontent.com/114311963/204415830-43d2c361-6176-42ed-b806-b60f682616aa.png">
 ><img width="931" alt="Screenshot4" src="https://user-images.githubusercontent.com/114311963/204415848-1761b072-b67b-468c-a0d3-505471a6af77.png">
>ScreenShot 2: Ellie character chosen, however this time you die at the first branch.
><img width="1199" alt="Screenshot5" src="https://user-images.githubusercontent.com/114311963/204415865-76385789-f694-4a7f-aa7c-08a2c6ed80c0.png">
 ><img width="190" alt="Screenshot6" src="https://user-images.githubusercontent.com/114311963/204415880-8323bbed-8b7e-494a-a1b9-bb2f3d6ba422.png">
 >
 ## Installation/Usage
 > To run and play the game. First clone the repository of the project. (This repo) and run the following compilation line. and then run ./a.out.
 > The game itself has instructions as you play but in breif, it tests the user's knowledge on the movie Jurassic Park by seeing if they can remember and follow the plot of the movie. Users will be prompted to select what they think is the correct answer.
 > 
 > `g++ src/Character.cpp src/Story.cpp main.cpp src/Ellie.cpp src/Nedry.cpp src/IanHammond.cpp src/MiniGame.cpp src/AlanKids.cpp`
 > `./a.out`
 ## Testing
 > The project was tested by using three methods of testing. The first was using Googletest to unit test functions that returned values. This was primarily used for the mini game that the user has the option to play. Using Googletest, we tested the return values based on different possible inputs that a user may enter. The second was we tested the program was by running the program over and over running through each path to make sure that the correct functions were called and executed based on user input. We repeated this for each character. The last way that we tested the program was using Valgrind. We ran Valgrind on the program to make sure that the program had no memory leaks after executing.
 
