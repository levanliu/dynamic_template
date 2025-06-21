TARGET = libB.so
SRCS = libB.cpp
CXX = g++
ROOT_PATH = /home/levanliu/Documents/dynamic_template

CXXFLAGS = -Wall -fPIC -I. -I$(ROOT_PATH)/common_include
LDFLAGS = -shared

LIBA_PATH = -L$(ROOT_PATH)/libA
LIBS = -lA

LDFLAGS += -Wl,-rpath=$(ROOT_PATH)/libA

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) $(LIBA_PATH) $(LIBS) -o $@ 

clean:
	rm -f $(TARGET)