TARGET = libA.so
SRCS = libA.cpp
CXX = g++
CXXFLAGS = -Wall -fPIC -I. 
LDFLAGS = -shared     

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@ 

clean:
	rm -f $(TARGET)