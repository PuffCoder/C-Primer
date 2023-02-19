CXX=g++
CXXFLAGS = -Wall -Werror -std=c++11
LDFLAGES =
LIBS =

SRCS = exe1_16.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
