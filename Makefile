CXX = gcc
CXXFLAGS = -std=c++17
TARGET = PRO_cicd_vaja

SRCS = main.cpp
OBJS = main.o

make: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
