# operating_systems


## abstraction
- a process is a running program. A program is a set of instructions.
- The os creates the illusion of many cpus by virtualizing the cpu by running one process, the stopping it and then running another program... a basic technique known as time sharing which is employed by all modern os.
- The OS uses a context switch which enables it to stop one program and start running another programe.
-The OS contains policies which are intelligent and are responsible for making decisions.
- mechanism: protocols that implement a piece of functionality.

## a process
- machine state: what a program can read or update when it is running.
- Memory is important component of the machine state.
- address space: the memory that a program can address
- another component is the registers {program counter and Instruction pointer registers, stack pointers and frame pointers which deal with fxns, return addresses and local varibles}.
-
- tip: mechanism answers how questions but policies answers which question


## process api
- The following must be included in any interface of an OS
    - CREATE, DESTROY, WAIT, MISCELLANEOUS CONTROL, STATUS
- Important to know the different sections in the memory .. i.e stack, heap,

## Process creation
- How are programs transformed into processes?
    - load its the programes code and any static data
    - heap is used for dynamically allocated memory
    - it has to create a stack and do i/o setup

## Process States
- A process can be RUNNING(running on a processor), READY, BLOCKED. Others are like Initial state, final state.
- Good to know about the concept of scheduling and descheduling
- What is zombie state of a process?
-
