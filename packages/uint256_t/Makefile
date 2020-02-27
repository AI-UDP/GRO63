ifeq ($(OS),Windows_NT)
        RM=del
else
        RM=rm -f
endif

ifeq ($(OS),Windows_NT)
        OS_DIR=win
	COMP = g++
else
        UNAME_S := $(shell uname -s)
        ifeq ($(UNAME_S),Linux)
                OS_DIR=linux
		COMP = g++
        endif
        ifeq ($(UNAME_S),Darwin)
                OS_DIR=mac
		COMP = clang++
        endif
endif

ifeq ($(MODE),release)
	ifeq ($(COMP), g++)
        	CC = g++ -Wall -Wextra -O3  -I$(INCLUDE) -std=gnu++11 #Release
	else

        	CC = clang++ -std=c++11 -stdlib=libc++ -Wall -Wextra -O3 -I$(INCLUDE)
	endif
else
        ifeq ($(COMP), g++)
		CC = g++ -Wall -Wextra -g -I$(INCLUDE) -std=gnu++11  #Debug
	else
		CC = clang++ -std=c++11 -stdlib=libc++ -Wall -Wextra -g -I$(INCLUDE)
	endif
endif

ifeq ($(OS_DIR),mac)
	CC += -mmacosx-version-min=10.8
endif

INCLUDE=include
BUILD=build/$(OS_DIR)/$(MODE)
#BUILD=.

OBJECTS=$(BUILD)/lib128.o $(BUILD)/lib256.o

AR = ar -rs

all:
	$(CC) -c -o $(BUILD)/lib128.o ./uint128_t.cpp
	$(CC) -c -o $(BUILD)/lib256.o ./uint256_t.cpp

	$(AR) $(BUILD)/libuint_256.a $(OBJECTS)


.PHONY: clean

clean:
	rm -f $(BUILD)/*.o $(OUTPUT)
