CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = simpleEncryptionMain.o simpleEncryptionFunctions.o
TARGET = simpleEncryption

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

simpleEncryptionMain.o: simpleEncryptionMain.c simpleEncryptionHeader.h
	$(CC) $(CFLAGS) -c simpleEncryptionMain.c

simpleEncryptionFunctions.o: simpleEncryptionFunctions.c simpleEncryptionHeader.h
	$(CC) $(CFLAGS) -c simpleEncryptionFunctions.c

clean:
	rm -f $(OBJ) $(TARGET)
