# Compiler

## Programming Languages and Translators 

##Autores: 	Luis Santiago Mille fregoso	A01169067
##		Jose Castilla 			A01169058
## 		Iván Gilberto Martin Enciso	A01169099

August 2018

-----------------------------------------------------------------------------------------------
Compiling and running Instructions

1. In order to compile the project it is only necessary to run the already made executable called "make" as such: ./make
This will execute the necessary commands to compile both the scanner (flex) and the parser(bison). 

NOTE: It is necessary that the 'make.c' file and the executable 'make' are in the same folder as the flex and bison files (.l and .y files) 

2. In order to run and test the program one must open a terminal in the same folder where the flex, the bison, and the make file are. Then in the terminal one should execute the compiler as: 
./compiler < file.txt

2.1. file.txt is the input file (change file.txt to the name and extension of the desired input file)

------------------------------------------------------------------------------------------------

Sample runs:

Evidence1.png: Sample run using test1.txt as input, this file is correct and the scanner and parser doesn't send any errors. 

Evidence2.png: Sample run using test2.txt as input, this file is correct and the scanner and parser doesn't send any errors.

Evidence3.png: Sample run using test2.txt as input, this file is incorrect in line 65 where the else should have {brackets}. The parser recognizes this error and displays the line where it found it. 

Evidence4.png: Sample run using test2.txt as input, this file is incorrect in line 18 where there is only a type declaration but without the identification nor the semicolon. The parser recognizes this error and displays the line where it found it.
