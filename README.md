
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
![Composite (2)](https://user-images.githubusercontent.com/60371257/119062673-3cb53280-b98c-11eb-9409-56968923abad.png)

#### Character/Inventory/Quests


 There will be a base class "Character" that is contains an Inventory object. This Inventory object will serve as a directory and management object containing complex Weapon and Armor objects as well as counters for how many "simple" items it has. From the Character, a more complex Player object will be derived, while all other characters will utilize the original Character Class. External to the Character, there will be a QuestLog object that is composed of and manages multiple Quest objects, each of which containing the relevant information for initiating, progressing, and completing in game objectives.
#### Map

This is the Map class UML diagram, the purpose of this is to create a relationship where Map contains Tile. We are going to generate the entire map in the main, and everything will be made in a generate function there. The map and Tile constructors will be called at the start of the program, and we would generate each Tile and set their adjacencies, then we would insert them into map so that we can delete and interact with the Tile objects easily. We will generate each Map tile with four pointers to navigate our character through the Map. The Map will also track the current Tile the Character is on, returning the current Tile when the Player object asks for it. This map is a composite structure because it allows the Map to be consistent of not only Tile objects but also Map objects. This will allow for maps with sub maps. 


### Abstract Factory Pattern:


This is the Tile class UML diagram, the purpose of this is to use a composite strategy so that we can generate the entire map in the map class. We are going to generate the entire map in the main, and everything will be made in it. The map constructor will be called at the start of the program, and we would generate each Tile and set their adjacencies, then we would insert them into a Vector so that we can delete and interact with the Tile objects easily. We will generate each Map tile with four pointers to navigate our character through the Map. The Map will also track the current Tile the Character is on, returning the current Tile when the Player object asks for it. 

This object is in a Composite strategy but lacks primatives because we are currently at the start of implementation. If we wanted to, we could add a quest Tile and a dungeon Tile to add certain behaviors such as search or interact. Not only that, but if we wanted to add sub-dungeons where one would descend into a different area, we could make a Tile of a Map object and apply the Composite strategy. 

### Item Genereation for different Classes
 ![Item Generation for Elf and Orc](https://user-images.githubusercontent.com/74107543/118266718-d43bf200-b46f-11eb-8268-1bd1bd61bf3f.png)
 
 Item generation for different classes such as Elf and Orc, require specific sets of armor and weapons suited to them. This diagram shows the interface that GearFactory provides, such as createWeapon(), allows different factories to be made. These factories are then responsible for creating the correct sets of armor and weapon for each class. For example, and Elf class will get a Bow as a weapon and LightArmor. Another is that an Orc will always recieve an Axe as a weapon and HeavyArmor. It is easy to add an extra class such as Human() but will be much more difficult for a new concrete class to be added, such as +createMount(). 

 



![Abstract_Enemy](https://user-images.githubusercontent.com/74107543/117526236-a1c65c80-af78-11eb-8caa-9f771b068851.png)

The enemy generation also follows the abstract pattern where different types of enemies (bosses, low-level mobs) have a corresponding abstract factory. These abstract factories are responsible for implementing the different variety of bosses, such as the one for each level of the Map. This allows the user to encounter a variety of enemies that have different attributes when they progress through the Tile objects in the Map. Additional concrete classes that implement the factories will be added in the future, where LevelOneBoss is the current one in development. 

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
 
