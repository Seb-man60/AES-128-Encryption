# AES-128-Encryption
Programming language : C

> Prerequisites :
aes-128.h file

- Tag ShiftRow :
ShiftRow :

Firstly, let's understand with what we work. We have a table of 16 hexadecimal character implemented as it follow :
![alt text](https://github.com/sebman60/AES-128-Encryption/img/ShiftRow1.png?raw=true)

We want to get get cyclic rotations from the right to the left of our characters :
- First line : No rotation
- Second line : One rotation
- Third line : Two rotation
- Fourth line : Three rotation

See how it is looking with an example (Expected + Second line) :
![alt text](https://github.com/sebman60/AES-128-Encryption/img/ShiftRow2.png?raw=true)

For the third line, as you guessed, you have to do the whole process one more time.
Two more time for the fourth line.


> References :
Wikipedia :
https://en.wikipedia.org/wiki/Advanced_Encryption_Standard