# AES-128-Encryption
Programming language : C

> Prerequisites :
aes-128.h file

## ShiftRow

Firstly, let's understand with what we work. We have a table of 16 hexadecimal character implemented as it follow :
![ShiftRow1](https://github.com/Seb-man60/AES-128-Encryption/blob/main/img/ShiftRow1.png?raw=true)

We want to get get cyclic rotations from the right to the left of our characters :
- First line : No rotation
- Second line : One rotation
- Third line : Two rotation
- Fourth line : Three rotation

See how it is looking with an example (Expected + Second line) :
![ShiftRow2](https://github.com/Seb-man60/AES-128-Encryption/blob/main/img/ShiftRow2.png?raw=true)

For the third line, as you guessed, you have to do the whole process one more time.
Two more time for the fourth line.


> References :
- Wikipedia :
https://en.wikipedia.org/wiki/Advanced_Encryption_Standard
https://en.wikipedia.org/wiki/Rijndael_MixColumns

- GitHub :
https://github.com/matt-wu/AES/blob/master/rijndael.c
https://github.com/amanske/aes-128/blob/master/aes.cpp