/*
1.Determine what data structures you will need and how they will be defined.
2D array for board
struct for each battleship
 */


/* 2. Determine what functions you will need and specify their prototypes with pre/post conditions

initialises contents into the 2d array battleship types and waves
initGboard(array)
Pre: 2d array is declared
Post: game board is created inside 2d array

promps user for location input then stores it to passed in values
guessLocation(&guessX, &guessY);


// prints board to screen only showing waves(~), hits(#), misses(.), and destruction(H).
printBoard(array, guess)
Pre: array contains valid values
Post: outputs contents of board to screen

bool findBattleship();
// Pre: array is valid
// Post: checks for battle ship location returns -1 if none
 */

/* 3. Write the pseudocode for the main function.

global ARRAYSIZE

main:
int array[][];
int guessX, guessY;
initGboard(array);

while (findBattleship()) {
    guessLocation(guessX, guessY);
    printBoard(array, guess);
}

std::cout << "You won" << std::endl;

 */
