# TermCalc

## Description

**TermCalc** is a terminal-based calculation program designed to perform arithmetic operations directly from the command line.

Features :

- Basic arithmetic operations : Perform addition, substraction, multiplication, and division.

- Interactive mode : Engage in an interactive session for continuous calculations.



## Installation

To install **TermCalc**, follow these steps :

1. Clone this repository :


    - Using SSH

    ```bash
    git clone git@github.com:Celian974/TermCalc.git
    ```

    - Using HTTPS

    ```bash
    git clone https://github.com/Celian974/TermCalc.git
    ```

2. Navigate to **TermCalc** directory

    ```bash
    cd TermCalc
    ```

3. Build the program

    - Use the provided *Makefile* to compile the program.
    ```bash
    make
    ```
   This will result in generating the compiled *termcalc* in the directory.

## Usage

1. Launch the calculator program by running the following commmand :

    ```bash
    ./termcalc
    ```
2. You will be prompted to enter an operator (**'+'**, **'-'**, **'*'**, **'/'**). Do it and press **Enter** :

    ```bash
    ➜  TermCalc git:(main) ✗ ./termcalc
    Welcome to Termcalc !
    Enter an operator : +
    ```
3. You will be prompted to enter a first number, and then a second. Do it and press **Enter** for the program to display the result:

    ```bash
    ➜  TermCalc git:(main) ✗ ./termcalc
    Welcome to Termcalc !
    Enter an operator : +
    Enter your first number : 98
    Enter your second number : 2
    98 + 2 = 100
    ```

4. You can keep doing so until you are done with the calculations you want to do. To exit the program at any time, press **Ctrl+C** :

    ```
    ➜  TermCalc git:(main) ✗ ./termcalc
    Welcome to Termcalc !
    Enter an operator : ^C
    ➜  TermCalc git:(main) ✗ |
    ```
