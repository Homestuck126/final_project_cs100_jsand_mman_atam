
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
       * This pattern will allow us to plan and implement the character objects for both the user and all non-player characters. Both player and non-player characters will possess an inventory, level, base attributes, a race, and a class. These will all behave the same regardless of the type of character. Stats will be initially determined by the class of the character (Warrior, rogue, etc) with modifications determined by the race of the character (humans may be unaltered, bigger characters like giants may be stronger but slower, and smaller may be weaker but faster) with scaling factors applied with each level. All of these characters will need to be able to access their inventory the same and will also need to be engage with eachother in combat the same. However the Player character would have additional objects and methods to track location, quest progression, and experience gain. These would all be handled by additional methods defined under the Player class object while non-player characters would not need these additional features.
         * A Character object will all contain an inventory object composed of multiple item objects
         * A Player object will contain its own QuestLog object composed of multiple quests as well as members and methods to keep track of story/quest progression.
    * Abstract Factory: 
      * We will be using abstract factory, for example, to create a variety of enemies that will inherit from one enemy blueprint. Abstract factory will allow the game to have a random nature to it, without needing to know the specific  attributes of mob enemies. Additionally, it will provide intersection and union of functionaility because each the factory method will allow new characters to be created quickly. These characters or enemies will require creation during run-time based on random attributes and the factory design method can efficently solve this issue. 
## Class Diagram
 
### Composite Pattern:
![Composite (2)](https://user-images.githubusercontent.com/81594784/118377030-4dc30580-b580-11eb-8f93-6a5fc4c4a063.jpg)
#### Character/Inventory/Quests


 There will be a base class "Character" that is contains an Inventory object. This Inventory object will serve as a directory and management object containing complex Weapon and Armor objects as well as counters for how many "simple" items it has. From the Character, a more complex Player object will be derived, while all other characters will utilize the original Character Class. External to the Character, there will be a QuestLog object that is composed of and manages multiple Quest objects, each of which containing the relevant information for initiating, progressing, and completing in game objectives.
#### Map

This is the Tile class UML diagram, the purpose of this is to use a composite strategy so that we can generate the entire map in the map class. We are going to generate the entire map in the main, and everything will be made in it. The map constructor will be called at the start of the program, and we would generate each Tile and set their adjacencies, then we would insert them into a Vector so that we can delete and interact with the Tile objects easily. We will generate each Map tile with four pointers to navigate our character through the Map. The Map will also track the current Tile the Character is on, returning the current Tile when the Player object asks for it. 

This object is in a Composite strategy but lacks primatives because we are currently at the start of implementation. If we wanted to, we could add a quest Tile and a dungeon Tile to add certain behaviors such as search or interact. Not only that, but if we wanted to add sub-dungeons where one would descend into a different area, we could make a Tile of a Map object and apply the Composite strategy. 
### Abstract Factory Pattern:

 ![Abstract_Weapons01](https://user-images.githubusercontent.com/81594784/117348793-7e5bbe80-ae5f-11eb-8d5f-2c3ef2a7739e.jpg)
#### Item Generation
This is the Weapons class UML diagarm which follows the abstract factory design pattern. In this pattern, the abstract factory ignores the details of the concrete classes and focuses on grouping sets of related objects together (weapons, armor). The main interface is responsible for creating the separate factories: Bow, Sword, Fist and these
factories go onto creating the variety of the weapon such as Glove which is a concrete implementation. The benefit of this pattern is that it will allow future additions to different types of weapons, without having to worry about the details of the concrete classes.

![Abstract_Enemy](https://user-images.githubusercontent.com/74107543/117526236-a1c65c80-af78-11eb-8caa-9f771b068851.png)

The enemy generation also follows the abstract pattern where different types of enemies (bosses, low-level mobs) have a corresponding abstract factory. These abstract factories are responsible for implementing the different variety of bosses, such as the one for each level of the Map. This allows the user to encounter a variety of enemies that have different attributes when they progress through the Tile objects in the Map. Additional concrete classes that implement the factories will be added in the future, where LevelOneBoss is the current one in development. 


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
 
