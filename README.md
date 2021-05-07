
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
## Class Diagram
 
### Character/Quest/Inventory
![Character](https://user-images.githubusercontent.com/81594784/117517734-bf340000-af51-11eb-8282-40a6cdf5a1d5.jpg)


 There will be a base class "Character" that is contains an Inventory object. This Inventory object will serve as a directory and management object containing complex item objects as well as counters for how many "simple" items it has. From the base Character, two objects will be derived, a simple "Enemy" which will encompass all characters Non-Player Characters, and a "Player" class that in addition to the Inventory inherited from "Character" will posses its own "Quest Log" object which will comprise a collection of "Quest" objects. Both the QuestLog and Inventory objects will be generated by their controlling object's constructor, with the Questlog being fed a series of hardcoded quests to manage and the Inventory starting with hardcoded items and attributes, but changing dynamically during execution.

### Map
![Map](https://user-images.githubusercontent.com/60371257/117517829-3073b300-af52-11eb-8513-373f73bca386.png)



This is the Tile class UML diagram, the purpose of this is to use a composite strategy so that we can generate the entire map in the map class. We are going to generate the entire map in the Map constructor, and everything will be made in it. The map constructor will be called at the start of the program, and will remain the same throughout the game. We will generate each map tile with four pointers to navigate our character through the map. We will also have a vector of Tile objects in the Map, so that we can organize each Tile with a Quest. The map will also track the current tile the Character is on, returning the current Tile when the Character class/player object asks for it. 
This object is in a composite strategy but lacks primatives because we are currently at the start of implementation. If we wanted to, we could add a quest Tile and a dungeon Tile to add certain behaviors such as search or interact. Not only that, but if we wanted to add sub-dungeons where one would descend into a different area, we could make a Tile of a map object and apply the Composite strategy. 

### Item/Enemy Generation
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
 
