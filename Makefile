CPPFLAGS = -std=c++11 -g -Wall -fsanitize=address,undefined

SHARED  = Menu.cpp Order.cpp OrderList.cpp Buyer.cpp Food.cpp
SRCS	= main.cpp $(SHARED)
SRCS_TEST = main_test.cpp $(SHARED)
OBJS	= $(SRCS:.cpp=.o)
OBJS_TEST = $(SRCS_TEST:.cpp=.o)
DEPS	= $(OBJS:.o=.d)
DEPS_TEST = $(OBJS_TEST:.o=.d)

all: Food_Ordering_System.exe 

Food_Ordering_System.exe: $(OBJS) 
	g++ $(CPPFLAGS) -o $@ $^
# To include the .d dependency files
-include $(DEPS) $(DEPS_TEST)

%.o: %.cpp
	g++ $(CPPFLAGS) -MMD -MP -c $< -o $@

clean:;
	rm *.o *.exe *.d
# del *.o *.exe *.d  #for Windows

