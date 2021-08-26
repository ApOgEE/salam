
# ApOgEE Makefile
#
# Author: M. Fauzilkamil Zainuddin
#

CC := gcc
SRC_DIR := src
BIN_DIR := bin

SRC := $(SRC_DIR)/ucapkan.c
EXEC := $(BIN_DIR)/ucapkan

all: $(EXEC)
	
$(EXEC): $(SRC) | $(BIN_DIR)
	$(CC) $^ -o $@

$(BIN_DIR):
	mkdir -p $@

clean:
	rm -rv $(BIN_DIR)
