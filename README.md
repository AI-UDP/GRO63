# README #

This version of GRO was developed at the AI-UDP lab atop the original version, created by Eric Klavins at University of Washington.

### What is this repository for? ###

* This repository holds the latest developer's version of GRO at AI-UDP. There is an executable version for Windows, and the source code can be compiled on MacOS, Linux or Windows.
* The current version is 1.0


### How do I get set up? ###

[//]: # (* Summary of set up)
* Setup -
1. Download and decompress or clone the repository.
2. If you want to use the Windows executable version, work from the WIN-Executable subfolder and follow the instructions in the Readme in that folder.
3. To compile in any OS, make sure the directory structure is created and available. This is done by running the script located in the main project folder, which creates this directory structure. (`create_dirs.sh` on MacOS and Linux. In case of compiling on Windows, it should be renamed to `create_dirs.bat`)  

[//]: # (* Configuration)
* Dependencies -
1. For every OS, you should install the latest version of QT Creator (https://www.qt.io/ide/).
2. Flex (https://github.com/westes/flex) and Bison (https://www.gnu.org/software/bison/) should also be installed. Windows versions may be found at https://sourceforge.net/projects/winflexbison/.
3. A C/C++ compiler needs to be installed. This version has been tested with clang/clang++ in MacOS, gcc/g++ in Linux (CentOS 7.0) and MinGW in Windows.
4. Go to  https://github.com/calccrypto/uint256_t, download and decompress or clone the repository, and put the ‘uint256_t-master’ folder in the main project directory.
5. If you are in linux, make sure the format in your system is set to United States(settings/region &
language)

[//]: # (* Database configuration)
[//]: # (* How to run tests)
[//]: # (* Deployment instructions)
* Instructions for compiling -

1. Open a terminal and run `create_dirs.sh` (from the project directory)
2. From the same project directory run the script for compiling all modules: `modules.sh <mode>` (MacOS and Linux) or `modules-win.bat <mode>` (Windows). `<mode>` is either `debug` or `release`.
3. Open QT Creator and load both projects, `ccl-master` and `gro-master`. Set the correct output of the projects to `ccl_Debug`, `ccl_Release`, `gro_Debug` and `gro_Release` respectively when setting up the projects in QT Creator.
4. Build `ccl-master` on QT Creator.
5. Build `gro-master` on QT Creator.
6. To run gro, just press the green arrow on the bottom left of QT Creator.
7. Upon execution of gro, look up the bottom line of the window to check the Working Directory (a guide is shown in the Readme in the WIN-Executable folder). Copy `standard.gro` and `gro.gro` from the `gro-master/include` folder to the Working Directory on your computer.

### Contribution guidelines ###

[//]: # (* Writing tests)
[//]: # (* Code review)
[//]: # (* Other guidelines)
* If you find any bugs or wish to contribute, please contact martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl

### Who do I talk to? ###

[//]: # (* Repo owner or admin)
[//]: # (* Other community or team contact)
* For more information, please direct your questions to martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl
