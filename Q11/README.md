# Context
Make a program in that reverses a string informed by the user without using any temporary variable, buffer or any pre-existing function or method for this.

## How to run it?

(windows) \
make sure you are in the right path of the exercise\
in the terminal (in this case i am using MingW to compile c++ programs), write "g++ .\main.cpp"\
this will make an file called "a.exe" in the same folder, so execute it with ".\a.exe", \
and the program will run! 


### coments
I created a function separate from the main function, responsible for carrying out the verification that the statement requests.

So I capture the size of the String, informed by the user, and calculate its lenght. Now with a loop in "reverse" function and using pointers, I reverse the string value just moving the pointers to center till they find each other. 


