CXX = g++
CXXFLAGS = -Wall -Werror -std=c++11
LDFLAGS = 
LIBS =

SRCS = 10_enum.cpp
# SRCS = tes.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = myprogram

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
