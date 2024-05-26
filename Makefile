CXX = gcc
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
TARGET = PRO_cicd_vaja

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)


make: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
