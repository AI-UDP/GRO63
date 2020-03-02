# Gro63 

This version of GRO was developed at the AI-UDP lab atop the original version, created by Eric Klavins at University of Washington.
The source code can be compiled on MacOS, Linux or Windows.

The current version is 1.1

## Prerrequisites

### Linux

- You need to have the QT libraries, for example, in ubuntu you can install it as follows:
```
sudo apt install qtbase5-dev
```

## Build from binaries
1. Clone the repo and place in it.
1. `mkdir build && cd build`
1. `cmake ..`
1. `make`

If you want to install it, run: `make install`

*Note: You will need to use `sudo` if you want to use it globally.*

## Running
To run `gro`, place the current directory where `gro` has been build or installed, and run it!

*Note: At this point, it is needed to run `gro` executable from its directory because it will search for the standard `.gro` files from its location.*

## Contribution guidelines

[//]: # (* Writing tests)
[//]: # (* Code review)
[//]: # (* Other guidelines)
- If you find any bugs or wish to contribute, please contact martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl

## Who do I talk to?

[//]: # (* Repo owner or admin)
[//]: # (* Other community or team contact)
- For more information, please direct your questions to martin.gutierrez@gmail.com or jose.undurraga@mail.udp.cl
