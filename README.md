
# Phantomheart
 
  Authors: [Justin Sanders](https://github.com/RiotRaider), [Aaron Tam](https://github.com/Homestuck126), and [Melineh Mansour Cheharmohali](https://github.com/melineh025)

## Project Description
  * Theme:
    * A Sci-fi/Fantasy Treasure Hunting Adventure
  * Motivation:
    * Video games are growing in popularity and importance within society, as computing students with an interest in the area we were interested in developing our own game for this project. This will challenge us to improve our own skills while working as a team and give us a greater appreciation for the amount of effort that is invested in the development of the games we enjoy. 
  * Language:
    * C++ 
  * Tools:
    * [Googletest](https://github.com/google/googletest) - Google's testing suite for checking methods and outputs
    * Valgrind
    * CMake
  * Input/Output:
    * Input: Accept user commands at regular intervals.
    * Output: Interactive adventure game with some randomized encounters.
  * Design Patterns:
    * Composite:
       * This pattern will allow us to plan and implement the character objects for both the user and all non-player characters. The characters will need not only attributes associated with classic rpg characters such as Damage, Health, and Experience but will also have their own inventory that would manage their equipped and stored items. The composite pattern will allow a graphical hierarchy to be drafted to allow us to better plan and implement the complex nature of the in game characters more effectively by being able to trace and de-conflict methods and variables while also determining relations between different classes of objects.  
    * Abstract Factory: 
      * We will be using abstract factory, for example, to create a variety of enemies that will inherit from one enemy blueprint. Abstract factory will allow the game to have a random nature to it, without needing to know the specific  attributes of mob enemies. Additionally, it will provide intersection and union of functionaility because each the factory method will allow new characters to be created quickly. These characters or enemies will require creation during run-time based on random attributes and the factory design method can efficently solve this issue. 

>REMOVE '>' and PROMPT TEXT BEFORE MERGING!!!
 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
## Character/Quest/Inventory
![Character](https://user-images.githubusercontent.com/81594784/117347574-1fe21080-ae5e-11eb-9d77-a6932de9bb6b.jpg)  

 There will be a base class "Character" that is contains an Inventory object. This Inventory object will serve as a directory and management object containing multiple Item objects as well as counters for how many "simple" items it has. From the base Character, two objects will be derived, a simple "Enemy" which will encompass all characters Non-Player Characters, and a "Player" class that in addition to the Inventory inherited from "Character" will posses its own "Quest Log" object which will comprise a collection of "Quest" objects. Both the QuestLog and Inventory objects will be generated by their controlling object's constructor, with the Questlog being fed a series of hardcoded quests to manage and the Inventory starting with hardcoded items and attributes, but changing dynamically during execution.

## Map
![Map](https://user-images.githubusercontent.com/60371257/117507737-542bfe80-af3c-11eb-9fbf-de47cedaaf7e.jpg)
 > This is the Tile class UML diagram, the purpose of this is to use a composite strategy so that we can generate the entire map in the map class. We are going to generate the entire map in the Map constructor, and everything will be made in it. We will generate each map tile with four pointers and draw our map in a different diagram so we can picture it. The map will also track the current tile the Character is on, with the Character calling the map for quests. The call for generation of enemies will be in each of the tiles, and the Generate enemy/boss function will determine if there is combat or not. 


## Item/Enemy Generation
 ![Abstract_Weapons01](https://user-images.githubusercontent.com/81594784/117348793-7e5bbe80-ae5f-11eb-8d5f-2c3ef2a7739e.jpg)
> *A DESCRIPTION OF THE CLASS AND HOW IT WILL BEHAVE

> ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
