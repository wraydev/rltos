/**
\mainpage

RLTOS is a real time operating system targetted at static allocation of objects and small embedded system.
The name RLTOS comes from a play on the words RL78 and RTOS as at inception the systems first target was the RL78.

An objective of the code is to have complete unit test coverage of the kernel using .

\section quickstart Quickstart

\section project Project
A project deep divce - going into configurations and algorithms and justifications of techniques etc.

\section coding_standards Coding Standards
<a href="https://cppcheck.sourceforge.io/">Cppcheck</a>

\subsection doxygen Doxygen
<a href="https://www.doxygen.nl/index.html">Doxygen</a>
<a href="http://www.graphviz.org/">GraphViz</a>
<a href="https://jothepro.github.io/doxygen-awesome-css/">doxygen-awesome-css</a>


\section unit_testing Unit Testing
The port for unit testing contains a rltos_scheduler_asm_dummy c file which implements skeleton versions of what should be implemented in the rltos_scheduler_asm.asm file.
The unit testing port should work for most host based compilers - testing will only ever be performed on MSVC through visual studio.
The testing folder should contain a CMakeLists.txt file for CMAKE to generate the testing project.


\subsection vs_code VS Code
The settings.JSON file contains two entries only to enable working from vs code and running the unit tests through cmake and the cmake plug in for vs code.
- "cmake.sourceDirectory": "${workspaceFolder}/test"
This entry sets the cmake extension to work from the test folder.

- "C_Cpp.default.configurationProvider": "ms-vscode.cmake-tools"
This entry ensures that the cmake extension provides all necessary configuration information to the C/C++ extension.

Extenions required:
- C/C++ by Microsoft
- CMake Tools by Microsoft

\subsection cmake CMake
<a href="https://cmake.org/">CMake</a>

\subsection cpputest CppUTest
<a href="https://cpputest.github.io/">CppUTest</a>


\section todo TODO
List what we need to do moving forward with the project.

\subsection next Next
- On insert, sort the lists according to their sorting value (head = smallest number).
- Unit test code thoroughly - checkpoint.
- Integrate [Cppcheck](https://cppcheck.sourceforge.io/) in both unit tests and rltos main code (for each port).
- Setup doxyfile and provide doc folder.
- Tidy code banners & comments with license and proper descriptions +  author used for doxygen.
- Including behavioural tests observing switching between IDLE and RUNNING tasks - checkpoint.

\subsection soon Soon
- Implement event_flags
- Implement mutex
- Implement queue
- Implement semaphore
- Create example project + documentation to setup two tasks.
- Implement co-operative scheduling
- Write install guide for RL78 port.
- Write instruction for getting up and running with unit testing this project.

\section ports Ports

\subsection cpputest_unit_testing CPPUTEST_UNIT_TESTING
This port exists to satisfy the unit testing environment.

\subsection rl78 RL78
Port for the Renesas RL78 Microcontroller.

\subsubsection clang CLANG
Port using the CLANG compiler

\note CLANG is only currently supported in the near data model (default) 

\subsubsection iar IAR
Port using the IAR compiler

*/