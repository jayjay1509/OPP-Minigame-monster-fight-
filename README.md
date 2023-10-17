# Monster Battle Game

## Overview

This is a simple text-based game in C++ where monsters battle each other. Players can choose two monsters to fight, and the game simulates the battle. This README provides an overview of the game's main sequence and class structure.

## Main Sequence

### Initialization Sequence
1. The game initializes by including necessary header files and libraries.
2. It seeds the random number generator with the current time.
3. Three Monster objects are created with specific attributes: "jayson," "mishuu," and "green."

### Display Monster Information
4. The game displays information about each of the three monsters.

### User Monster Selection
5. The user is prompted to choose the first and second monsters.
6. The game ensures that the user does not select the same monster for both sides.

### Battle Initialization
7. The selected monsters are assigned to `monster1` and `monster2` pointers.
8. The console screen is cleared.

### Display Monster Information Again
9. The game displays the selected monsters' information.

### Battle Loop
10. The game enters a loop where the two monsters take turns attacking each other until one of them is defeated.
11. The monster with the higher speed attacks first.
12. The battle continues until one of the monsters is dead.

### End of Battle
13. After the battle loop, the game displays the final statistics for both monsters and resets their stats.
14. The victories of each monster are recorded.

### Display Results
15. The game displays the results of the battle, showing which monster won how many rounds.

## Class Structure

### `Monster` Class

The `Monster` class represents individual monsters in the game. It encapsulates their attributes and provides methods to manipulate and display their information.

#### Class Definition

### `Monster` Class:


- **Attributes:**
  - `int Health_Points`
  - `int Health_Max`
  - `int Attack_Damage`
  - `int Defense_Points`
  - `int Speed`
  - `int Parry`
  - `race Race`

- **Methods:**
  - `Display()`: Displays the monster's attributes.
  - `ResetStats()`: Resets the monster's stats after a battle.

## Author

jayson malet.

