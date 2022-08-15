# Cmake & Docker Image project

This a C++ application which uses CMake.
This repository also has a github action (please see 'Workflow' section)

## What does this app do? 

1. This Application takes a user input (type string) and returns the string so that every second letter is UpperCase.
 Note that any user input that will contain one numeric value will ask the user to retype a text.
   
   CmakeProject is the executable file.
   
2. Examples:
_____________________________________________________
   Example #1:
   
   Please type a text (string only): 4r4rrr
   
   This is a Number, please type again...
   
   Please type a text (string only): 44444
   
   This is a Number, please type again...
   
   Please type a text (string only): racheli
   
   Great!
   
   Now lets uppercase each 2nd letter of your text.

   Your text after uppercase is:  rAcHeLi
______________________________________________________   
   Example #2:
   
   Please type a text (string only): you are the best!!! wish you good luck
   
   Great!
   
   Now lets uppercase each 2nd letter of your text.

   Your text after uppercase is:  yOu aRe tHe bEsT!!! wIsH YoU GoOd lUcK


## Workflow

The main workflow called 'Cmake + Docker Image'.

This action is a combination of a few actions (which are still there for your convenience).
'Cmake + Docker Image' has 2 jobs:
1. Process that builds the project and creates the executable file.
2. Wraping the executable file as Docker image

The workflow can be triggred manually.

## Cmake installation and QuickStart (to run the project locally)
As this is an example of how to use CMake I'll recommend using this link: https://code.visualstudio.com/docs/cpp/cmake-linux 

## Dependencies
    - cmake version 3.16.3
    - Linux distribution: Ubuntu 20.04 LTS   
    - Docker version 20.10.12
    
    

***Hope you'll find this project helpfull and accurate to your needs***
