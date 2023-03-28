CXX = clang++ 
# CXXFLAGS = -Wall -Werror -std=c++11
CXXFLAGS = -std=c++11
LDFLAGS = 
LIBS = 

SRCS = choices.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = myprogram

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

