# Angr-Elf

Welcome to the realm of the elves, where you can learn how to sovle CTF crackme exercises with [Angr](https://docs.angr.io/) binary analysis toolkit. 

```
 █████╗ ███╗   ██╗ ██████╗ ██████╗     ███████╗██╗     ███████╗
██╔══██╗████╗  ██║██╔════╝ ██╔══██╗    ██╔════╝██║     ██╔════╝
███████║██╔██╗ ██║██║  ███╗██████╔╝    █████╗  ██║     █████╗  
██╔══██║██║╚██╗██║██║   ██║██╔══██╗    ██╔══╝  ██║     ██╔══╝  
██║  ██║██║ ╚████║╚██████╔╝██║  ██║    ███████╗███████╗██║     
╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝    ╚══════╝╚══════╝╚═╝     
 ```

According to the official documentation, Angr is a

> user-friendly binary analysis suite, allowing a user to simply start up iPython and easily perform intensive binary analyses with a couple of commands. 

Its capabilities are very exciting: _symbolic execution_, _automatic ROP chain building_, _automatic exploit generation_. The number and variety of examples, and the amount of documentation is impressive. Installation is straight-forward on both Windows and Linux, so we can quickly get started with real projects. A lot of work has been put into this framework. Kudos to the phe people behind, the security researchers from [Computer Security Lab at UC Santa Barbara](http://seclab.cs.ucsb.edu/) with a long tradition of winning CTFs. 

### Files

* ```crackme.c``` - CTF challenge that expects a 10 characters flag to be provided from standard input
* ```angr_solver.py``` - Solver script using Angr

### References
* [Angr Examples](https://docs.angr.io/examples)
