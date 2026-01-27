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

## Restricted operations
- The program must be able to perfom i/o operations or some kind of restricted operations, but without giving the process complete control over the system. How can the os and the hardware work together to do so?
- Trap tables, user mode, kernel mode, management of permissions, ---> This was an intresting read. 

## Switching between Processes.
- The question here is how can an operating system regain control of the cpu so that it can switch between processes?
- Answer: A cooperating Approach: wait for system calls.
- In this style, the OS trusts the processes of the system to behave reasonably. Processes that run for too long are assumed to periodically give up the CPU so that the OS can decide to run some other task.
-
