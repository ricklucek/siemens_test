# Context

Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
2. Remove the last character from the string. If the string is empty, it will remain empty.

Given an integer _k_ and two strings _s_ and _t_, determine if you can convert _s_ to _t_ using exactly _k_ operations described above on _s_. If possible, the program prints 'yes', otherwise it prints 'no'.

For example, string s = [a, b, c] and string t = [d, e, f]. The number of moves k = 6. To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order. In the sixth move, you will have the expected string s. If more movements are available than necessary, they can be eliminated by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new string.

The function has the following parameters:\
s: starting string\
t: desired string\
k: an integer that represents the number of operations

Input format\
The first line contains the string s, the starting string.\
The second line contains the string t, the desired string.\
The third line contains an integer k, the number of operations.

Constrains\
a) 1 <= | s | <= 100\
b) 1 <= | t | <= 100\
c) 1 <= k <= 100\
d) s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z]

Output format\
Print 'yes' if you can get the string t by executing exactly k operations on the string s, and print 'no' otherwise.

## How to run it?

(windows) \
make sure you are in the right path of the exercise\
in the terminal (in this case i am using MingW to compile c++ programs), write "g++ .\main.cpp"\
this will make an file called "a.exe" in the same folder, so execute it with ".\a.exe", \
and the program will run! 


### coments
I created a function separate from the main function, responsible for carrying out the verification that the statement requests.

So I capture the size of S and T and create a variable to store the number of letters in common. I do a loop to calculate and then using the 'Ops' variable I calculate the number of operations needed. 

Then I return a boolean with 'Ops' <= k.

