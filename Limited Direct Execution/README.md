# MECHANISM: LIMITED DIRECT EXECUTION
- OS shares the physical CPU among many jobs running at the same time by running a task for a litte time, then pause, then run another, then pause then run another etc.(TIME SHARING).
- Some overheads of archiving virtulization: performance, control.

## Basic Technique: Limited direct execution
- Limited direct exection is to make the program run faster.
- Direct execution: running a program directly on the cpu.
- What the os does is:
    - Create entry for process list
    - Allocate memory for program
    - Load program into memory
    - Set up stack with argc/argv
    - Clear registers
    - Execute call main()
- The program will then:
    - Run the main()
    - execute the return
- The os after the program/ process runs:
    - free the memory.
    - remove the process from the list.


