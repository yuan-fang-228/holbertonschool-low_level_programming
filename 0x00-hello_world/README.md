0x00. C - Hello, World

0. a script that runs a C file through the preprocessor and save the result into another file. - gcc -E $CFILE -o c
1. a script that compiles a C file but does not link. - gcc -c $CFILE
2. a script that generates the assembly code of a C code and save it in an output file. - gcc -S $CFILE
3. a script that compiles a C file and creates an executable named cisfun. - gcc -c $CFILE -o cisfun
4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. - using puts
5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. - using printf
6. Write a C program that prints the size of various types on the computer it is compiled and run on. - 
8. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. - gcc -S -masm=intel $CFILE
