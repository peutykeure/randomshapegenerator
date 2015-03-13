#-- program name, sources and obj --
TARGET=mainShape
SRC=$(wildcard src/*.cpp)
OBJ=$(SRC:.cpp=.o)

#-- location where SFML header files and libraries are installed --
SFMLDIR=/home/TP/modules/sujets/SFML-2.1

#-- compiler/linker settings --
CC=g++
CCFLAGS=-W -Wall -Wno-long-long -pedantic -g
IFLAGS=-I$(SFMLDIR)/include -I./include
LDFLAGS=-L$(SFMLDIR)/lib -lsfml-graphics -lsfml-window -lsfml-system \
        -Wl,-rpath,${SFMLDIR}/lib

#-- main target to obtain --
all : $(TARGET)


#-- linker command to produce the executable file --
$(TARGET) : $(OBJ)
	@echo Linking $@ ...
	$(CC) $^ -o $@ $(LDFLAGS) 
	@echo

#-- source file header files dependencies --
src/mainShape.o : include/Circle.h include/Rectangle.h include/Color.h

src/Rectangle.o : include/Color.h include/Rectangle.h

src/Circle.o : include/Color.h include/Circle.h

# ATTENTION ! Ils manquent de dépéndences. Ajoutez-les



#-- compiler command for every source file --
%.o : %.cpp 
	@echo Compiling $< ....
	$(CC) -c $< $(IFLAGS) -o $@ $(CCFLAGS) 
	@echo

.PHONY: clean

#-- system-specific command to remove those files --
clean : 
	@echo Cleaning...
	rm -f $(OBJ) $(TARGET) src/*~ include/*~ *~
	@echo

#-- system-specific command to run the program --
run :
	./$(TARGET)



