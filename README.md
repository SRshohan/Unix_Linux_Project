# UBOS Shell - UNIX Shell and Program Selection Feature

## Overview
This project implements a custom UNIX shell interface in C++ that enables users to execute system commands and access executable programs from the current directory. The shell runs on Debian Linux, using the g++ compiler for building.

## Features
- **Command Execution**: Execute any system command.
- **Background Execution**: Execute commands in the background using `&`.
- **Program Selection Feature**: List and execute programs by selection number from the current directory.

## Building and Running
### Environment Used
- **Compiler**: Clang
- **Operating System**: macOS


### Compilation
Compile the shell using the following command:
```bash
clang part_a.c -o part_a

clang part_b.c -o part_b
### Run the shell

./part_a and ./part_b



# UBOS Shell Version 1.0

## Demonstration Guide

This section outlines a script for demonstrating the UBOS Shell in front of an instructor or an audience, highlighting the key features and robustness of the shell.

### Introduction
- **Purpose**: Explain the core functionalities of the UBOS Shell, designed to simulate Unix-like shell operations in a simplified manner.
- **Technologies Used**: Developed in C, primarily targeted for macOS environments, leveraging macOS's default Clang compiler.

### Starting the Shell
- **Open a Terminal**: On your macOS, open the Terminal application.
- **Navigate to the Shell**: Use `cd` to change to the directory containing the `ubos_shell` executable.
- **Launch the Shell**: Start the shell by typing `./part_a` in the terminal.

### Demonstrating Command Execution
- **Basic Command**: Execute `ls` to list the contents of the current directory.
- **Command with Options**: Show detailed listings by running `ls -l`.
- **Background Execution**: Demonstrate non-blocking operations with `sleep 10 &`, which will run the sleep command in the background.

### Using the Program Selection Feature
- **List Executables**: Input `selection` to display executable files in the current directory. ` Run ./part_b `
- **Execute by Selection**: Ask the audience to pick a number, then execute the corresponding program by entering its number, such as `1`.

### Handling Errors
- **Non-existent Command**: Attempt to execute a command like `foobar` to demonstrate the shell’s error handling capabilities when an unknown command is entered.
- **Invalid Selection**: Simulate an error by selecting a number that is out of range or non-numeric to show how the shell handles invalid input.

### Closing the Shell
- **Terminate**: Close the shell by typing `exit`, which will end the session and return control to the main macOS Terminal.

This demonstration script is designed to showcase the essential functionalities of UBOS Shell, emphasizing its ability to handle user inputs and typical shell operations efficiently.
