TARGET = tcapi
SRCS = main.cpp
CXX = g++
ROOT_PATH = /home/levanliu/Documents/dynamic_template

CXXFLAGS = -Wall -I. -I$(ROOT_PATH)/common_include
 
# Linker search path for libB.so
LIBS_PATH = -L$(ROOT_PATH)/libB
# Libraries to link tcapi against: only libB
LIBS = -lB
# Runtime path for tcapi to find its direct dependency (libB.so)
LDFLAGS += -Wl,-rpath=$(ROOT_PATH)/libB

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) $(LIBS_PATH) $(LIBS) -o $@

clean:
	rm -f $(TARGET)