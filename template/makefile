C=g++
CXXFLAGS=-Wall -Werror -std=c++17
LDFLAGS=
LIBS=

SRCS=test.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=program

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) $(TARGET)

