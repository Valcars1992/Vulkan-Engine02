
#FILE INCLUSIONE GAME
PATH_GAME = src/
FILES_GAME = *.cpp

#LIBRERIA VULKAN
LIB_VULKAN = -lvulkan-1 -lglfw3
LIB_WINDOWS = -mwindows

#FILE INCLUSIONE ENGINE
PATH_ENGINE = src/Engine/
FILES_ENGINE = *.cpp

#NOME APPLICAZIONE COMPILATA
NAME_APP_EXE = a.out #game.exe

#Argomenti G++
#ARG_G++ = -static -g -fdiagnostics-color=always
ARG_G++ = -static
CFLAGS = -std=c++17


a.out: $(PATH_GAME)$(FILES_GAME) $(PATH_ENGINE)$(FILES_ENGINE)  
	g++ $(ARG_G++) $(PATH_GAME)$(FILES_GAME) $(PATH_ENGINE)$(FILES_ENGINE) -o $(NAME_APP_EXE) $(LIB_VULKAN) $(LIB_WINDOWS)

.PHONY: test clean

test: a.out
	./a.out

clean:
	rm -f a.out