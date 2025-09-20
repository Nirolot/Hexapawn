CXX = g++
CXXFLAGS = -Wall -std=c++17

# Nome dell'eseguibile
TARGET = main

# File sorgenti
SRCS = main.cpp function.cpp

# Oggetti generati
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
