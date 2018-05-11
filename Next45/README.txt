1. To run the program make sure you have installed G++ compiler in your linux
2. Use make file to compile it by typing "make" in the terminal in the same directory where both the source code and make file are located.
3. Type "./main" to run the compiled program
4. Enter data as prompted on the screen, see output program below:

Output of my program:

==Rover Program started==
Enter space coordinates (x y): 88
Enter the Rover's start coordinates (x y): 12
Enter cardinal point the Rover's facing (E, W, N, S): e
Enter list of commands (MRL): MMLMRMMRRMML

Position of the Rover is :3 3 S

5. For the correctness of my program I first drew the 2D board/zone (8X8) in a piece of paper to see what the Rover's move should look like before transfering it into code.
6. I tested the program with different data and by validating the inputs of the user.
7. I chose C++ as I am more familiar with it in terminal based program.

Note: When the Rover's move are invalid i.e: goes beyond the allowed zone, it terminates the program.
