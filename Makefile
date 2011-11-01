C++ = g++

ifndef os
   os = LINUX
endif
SRC= $(shell ls *.cpp)
OBJS= $(SRC:%.cpp=%.o)
DIR = $(shell pwd)
Target=test
all: $(Target)

$(Target):$(OBJS)
	$(C++) -o $@ $^  $(LDFLAGS)

%.o: %.cpp
	$(C++) $(CCFLAGS) $< -c

clean:
	rm -f *.o
	rm -f $(Target)

install:
	export PATH=$(DIR):$$PATH

