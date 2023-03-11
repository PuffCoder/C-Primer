C=g++
CXXFLAGS=-Wall -Werror -std=c++11
LDFLAGS=
LIBS=

SRCS=use_new.cpp
OBJS=$(SRCS:.cpp=.o)
TARGET=program

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS) $(TARGET)

