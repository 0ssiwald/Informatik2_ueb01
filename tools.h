#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

/****************************************
* void clearBuffer()
* clears inputs in the keyboard buffer
* till '\n' (removes '\n' from buffer)
****************************************/
void clearBuffer();

/****************************************
* void waitForEnter()
* waits for user to press enter
* clears Buffer
****************************************/
void waitForEnter();

/****************************************
* void clearScreen()
* clears the console screen
* with windows command
****************************************/
void clearScreen();

/****************************************
* int askYesOrNo( char *)
* Prints what is provided as argument
* Returns 0 when n,N is input
* Returns 1 when j,J is input
****************************************/
int askYesOrNo( char *);

#endif // TOOLS_H_INCLUDED
