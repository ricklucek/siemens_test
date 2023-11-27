# Context
Write an Unit Test for the function ConcatRemove(s,t,k) //Q4.main

## How to run it?

(windows) \
make sure you are in the right path of the exercise\
in the terminal (in this case i am using MingW to compile c++ programs), write "g++ .\main.cpp"\
this will make an file called "a.exe" in the same folder, so execute it with ".\a.exe", \
and the program will run! 


### coments
Honestly, this is the first time I've created a program for unit testing.
As I had several doubts, I did some research on how I should do it, and found some things that helped me.

However, some things went extremely wrong during the attempts, in particular I tried to use Google test but without success.
Base Link: https://medium.com/swlh/google-test-installation-guide-for-c-in-windows-for-visual-studio-code-2b2e66352456\
My machine did not get the <gtest/gtest.h> import in my Q5.main program, as much as I tried 

Since google test didn't work well on my machine, I searched for other methods like Catch2 (https://github.com/catchorg/Catch2), but I was afraid of continuing with the same errors, so I set up manual tests, which I believed would perform better at the moment.
I adapted question 4 to be able to run the tests, so things flowed normally.



