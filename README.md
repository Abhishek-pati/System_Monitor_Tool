# C++ System Monitor Project

## Overview

This project is a terminal-based system monitor tool developed in C++ using the ncurses library. It displays real-time information on system uptime, memory usage, and running system processes, including PID, user, state, memory usage, and command. The UI features colors, borders, and keyboard interaction for a modern terminal experience.

## Features

- Real-time update of system data.
- Shows system uptime and memory statistics.
- Lists processes with sortable columns (PID, CPU, memory).
- Allows process selection and termination.
- Keyboard controls for navigation and commands.

## Dependencies

- Linux operating system with `/proc` filesystem.
- g++ compiler supporting C++17.
- ncurses library.

## Installation

Install necessary packages on Ubuntu:

- sudo apt update
- sudo apt install g++ libncurses5-dev libncursesw5-dev

## Build

Run the following in the project folder:

- make

## Usage

Run the system monitor:

- ./system_monitor


Run with sudo if you need to kill processes owned by other users:

- sudo ./system_monitor


## Controls

- `P` - Sort by PID.
- `C` - Sort by CPU.
- `M` - Sort by Memory.
- Arrow Up/Down - Select process.
- `K` - Kill selected process.
- `Q` - Quit program.

## Source Files

- `src/main.cpp` - Main program and UI.
- `src/system_info.cpp` - System info and process data gathering.
- `include/system_info.h` - Data structures and function declarations.
- `Makefile` - Build instructions.

