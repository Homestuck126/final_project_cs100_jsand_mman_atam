
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
       * This pattern will allow us to plan and implement the character objects for both the user and all non-player characters. Both player and non-player characters will possess a name, inventory, level, and base attributes. These will all behave the same regardless of the type of character. Stats will be determined by a Character Generator and scaling factors will be applied with each level. All of these characters will need to be able to access their inventory the same and will also need to be engage with eachother in combat the same. However the Player character would have additional objects and methods to allow for changing equipment and healing. These would all be handled by additional methods defined under the Player class object while non-player characters would not need these additional features.
         * A Character object will all contain an inventory object composed of multiple item objects
         * A Map object will inherit and also be composed of individual Tile Objects that store information about themselves as well as their adjacencies.
    * Abstract Factory: 
      * We will be using abstract factory, for example, to create a variety of enemies that will inherit from one enemy blueprint. Abstract factory will allow the game to have a random nature to it, without needing to know the specific  attributes of mob enemies. Additionally, it will provide intersection and union of functionaility because each the factory method will allow new characters to be created quickly. These characters or enemies will require creation during run-time based on random attributes and the factory design method can efficently solve this issue. 
   * Factory:
      * The Factory Pattern will be used similarly to the Abstract Factory for Gear creation, but will be applied to control the generation of the player character and enemies. It will regulate stats being assigned to characters as well as controlling how gear is assigned. With Players being limited to a selection of starting equipment, and enemies being randomly created based on several parameters that can be dictated for testing or randomized during the run to provide more varied experiences for the player.   
## Class Diagram
 
### Composite Pattern:
![Composite](https://user-images.githubusercontent.com/81594784/119946922-fd6a8100-bf4b-11eb-95fb-1b3ebaa8052b.jpg)


#### Character/Inventory/Quests

 There will be a base class "Character" that is contains an Inventory object. This Inventory object will serve as a directory and management object containing complex Weapon and Armor objects as well as counters for how many "simple" items it has. From the Character, a more complex Player object will be derived, while all other characters will utilize the original Character Class. External to the Character, there will be a QuestLog object that is composed of and manages multiple Quest objects, each of which containing the relevant information for initiating, progressing, and completing in game objectives.
#### Map

This is the Map class UML diagram, the purpose of this is to create a relationship where Map contains Tile. We are going to generate the entire map in the main, and everything will be made in a generate function there. The map and Tile constructors will be called at the start of the program, and we would generate each Tile and set their adjacencies, then we would insert them into map so that we can delete and interact with the Tile objects easily. We will generate each Map tile with four pointers to navigate our character through the Map. The Map will also track the current Tile the Character is on, returning the current Tile when the Player object asks for it. This map is a composite structure because it allows the Map to be consistent of not only Tile objects but also Map objects. This will allow for maps with sub maps. 


### Abstract Factory Pattern:


### Item Genereation for different Classes
 ![Item Generation for Elf and Orc](https://user-images.githubusercontent.com/74107543/118266718-d43bf200-b46f-11eb-8268-1bd1bd61bf3f.png)
 
 Item generation for different classes such as Elf and Orc, require specific sets of armor and weapons suited to them. This diagram shows the interface that GearFactory provides, such as createWeapon(), allows different factories to be made. These factories are then responsible for creating the correct sets of armor and weapon for each class. For example, and Elf class will get a Bow as a weapon and LightArmor. Another is that an Orc will always recieve an Axe as a weapon and HeavyArmor. It is easy to add an extra class such as Human() but will be much more difficult for a new concrete class to be added, such as +createMount(). 

 

### Factory Pattern:
![CharacterFactory](https://user-images.githubusercontent.com/81594784/119211584-e0bfdc00-ba67-11eb-82ff-6962d656ec56.jpg)  

Player and Non-Player Characters will be created using the basics of the Factory Pattern. The Player generation method will use user input to determine what starting equipment and corresponding attributes will be assigned to the player's character. Enemys will be generated by a different function within the factory that will determine what attributes the enemy will receive after randomly assigning a "race" and from there appropriately assign equipment using the GearFactory previously described. This will allow for varied encounters while also making different enemies more unique.

### No pattern

![Untitled Diagram](https://user-images.githubusercontent.com/60371257/119062742-5bb3c480-b98c-11eb-8e15-206452975ee9.png)

#### Quest
This is the Quest class UML digram, the purpose of this is to create a relationship where Questlog contains Quests. We are once again going to gnerate the entire Questlog in the main, and everything will be made in a generate function there. Every Quest will then be generated and inserted into Questlog to allow for easy deletion and interaction. Each Quest will be generated with 2 Tile pointers so that Questlog can communicate with Map and determine when quests are active and when they will start and end. The Questlog will be the main thing to tell the player what to do to win the game. 


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
 
