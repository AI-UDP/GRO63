# Gro63 

This version of GRO was developed at the AI-UDP lab atop the original version, created by Eric Klavins at University of Washington.
The source code can be compiled on MacOS, Linux or Windows.

The current version is 1.1

## Build from binaries

### Linux

First, you need to have the QT libraries. For example, in ubuntu you can install it as follows:
```
sudo apt install qtbase5-dev
```

Then, you are ready to compile it.
Clone the repository, place in it, and execute:
```sh
mkdir build && cd build
cmake..
make
```

### Windows 
You need MinGw compiler and Qt5 libraries.
Both can be installed with the [Qt offline installers](https://www.qt.io/offline-installers) (selecting all options except *Strawberry* option).
Once you have installed, add the MinGw compiler to the PATH.
For example, if you have the Qt version *5.14.1*, the path will be:
```
C:\Qt\Qt5.14.1\Tools\mingw730_64\bin
```

Then we are able to compile `gro`:
Clone the repository, place in it and execute:
```sh
mkdir build && cd build
cmake .. -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH="<qt5-folder>"
make
```
Where `<qt5-folder>` should be something like `C:\Qt\Qt5.14.1\5.14.1\mingw_73_64` but can vary depending of the qt version.

## Installation
If you want to install it, run the following command after the building process: `make install`

*Note: You will need to use `sudo` if you want to use it globally.*

## Running
To run `gro`, go to the directory where `gro` has been built or installed, and run the executable.

*Note: At this point, it is needed to run `gro` executable from its directory because it will search for the standard `.gro` files from its location.*

**For windows users, you can download the latest binary from the github `release` section.**

## Contribution guidelines

[//]: # (* Writing tests)
[//]: # (* Code review)
[//]: # (* Other guidelines)
If you find any bugs or wish to contribute, please contact martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl

## Who do I talk to?

[//]: # (* Repo owner or admin)
[//]: # (* Other community or team contact)
For more information, please direct your questions to martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl
