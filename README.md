# Number-guessing-game

Here are the functionalities implemented in the program:

1. Game Introduction: Prints an introductory message to inform the user about the game ("GUESS THE NUMBER GAME!!!").

2. Random Number Generation: Generates a random number between 0 and 100 (inclusive) for the user to guess.

3. User Input Handling:
   - Accepts user input for guessing the number.
   - Allows the user to exit the game by typing 101.
   - Validates user input to ensure it is within the expected range (0-100) and not characters like 's', 'f', or 'c'.

4. Guess Limit and Tracking: Sets a guess limit (3) and tracks the number of guesses made by the user.

5. Game Logic and Comparison:
   - Compares the user's guess with the randomly generated number.
   - Provides feedback to the user based on their guess:
     - Informs whether the guessed number is higher or lower than the actual number.
     - If the guess is correct, congratulates the user and ends the game.
   - If the user reaches the guess limit without guessing the correct number, the game ends, and the correct number is revealed.

6. Exiting the Game: Allows the user to exit the game at any time by typing 101.

7. Limiting Guesses: Ends the game if the user exceeds the guess limit without guessing the correct number.

These functionalities collectively provide a simple number guessing game experience for the user.