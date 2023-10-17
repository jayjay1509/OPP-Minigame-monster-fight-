# OPP-Minigame-monster-fight-

Main Sequence of the Game:
Initialization Sequence:

The game initializes by including necessary header files and libraries.
It seeds the random number generator with the current time.
Three Monster objects are created with specific attributes: "jayson," "mishuu," and "green."
Display Monster Information:

The game displays information about each of the three monsters.
User Monster Selection:

The user is prompted to choose the first and second monsters.
The game ensures that the user does not select the same monster for both sides.
Battle Initialization:

The selected monsters are assigned to monster1 and monster2 pointers.
The console screen is cleared.
Display Monster Information Again:

The game displays the selected monsters' information.
Battle Loop:

The game enters a loop where the two monsters take turns attacking each other until one of them is defeated.
The monster with the higher speed attacks first.
The battle continues until one of the monsters is dead.
End of Battle:

After the battle loop, the game displays the final statistics for both monsters and resets their stats.
The victories of each monster are recorded.
Display Results:

The game displays the results of the battle, showing which monster won how many rounds.
Class Structure and Diagram:
Here's a textual description of a possible class structure for your game:

Monster Class:
Attributes:
Health
Strength
Defense
Speed
Damage
Experience
Race
Methods:
Display(): Displays the monster's attributes.
ResetStats(): Resets the monster's stats after a battle.
Game Class:
Methods:
InitializeGame(): Initializes the game, including monster creation and random seed.
DisplayMonsterInfo(): Displays information about monsters.
UserMonsterSelection(): Prompts the user to choose monsters and prevents the same monster selection.
ClearConsole(): Clears the console screen.
BattleLoop(): Manages the battle logic.
DisplayBattleResults(): Displays the results of the battle.
