BUILD_DIR = obj
SRC_DIR = src
APP_DIR = app
LIBS = -lpthread
CFLAGS = -Wall

all: basic mutex

default: all

%: $(BUILD_DIR)/%.o
	gcc $(CFLAGS) $< $(LIBS) -o $(APP_DIR)/$@


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -c $(CFLAGS) $< $(LIBS) -o $@

.PRECIOUS: $(BUILD_DIR)/%.o

.PHONY: clean
clean:
	rm -f $(BUILD_DIR)/*.o $(APP_DIR)/*
