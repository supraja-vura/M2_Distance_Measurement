PROJ_NAME = Distance_Measuring

BUILD_DIR = Build


SRC = main.c\
src/user_utils.c\

INC = -I inc

ifdef OS	
   FixPath = $(subst /,\,$1)

   CC = avr-gcc.exe

   AVR_OBJ_CPY = avr-objcopy.exe
else 
   ifeq ($(shell uname), Linux)

      FixPath = $1				

	  CC = avr-gcc

	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif


.PHONY:all analysis clean doc

all:$(BUILD_DIR)

	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)

$(BUILD_DIR):

	mkdir $(BUILD_DIR)

analysis: $(SRC)

	cppcheck --enable=all $^

doc:

	make -C documentation

clean:

	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean