#include "simpleEncryptionHeader.h"

int main() {
    int choice = 0;

    // Simple Introduction Message
    printf("\n\n--------\nSimple Encryption v0.1\n-------\n\n");
    printf("--------\nPlease select encryption:\n1. SimpleSubstitutionEncryption\n2. N/A\n-------\n");
    
    scanf("%d", &choice); // Fix: use '&choice'
    getchar(); // Fix: clear newline from buffer

    if (choice == 1) {
        char message[MAXMESSAGESIZE];

        printf("--------\nOption #1: SimpleSubstitutionEncryption Selected\n-------\n");
        printf("--------\nPlease enter plaintext or ciphertext:\n-------\n");
        fgets(message, sizeof(message), stdin);

        printf("Encryption/Decryption: ");
        for (int i = 0; message[i] != '\0' && message[i] != '\n'; i++) {
            printf("%c", simpleencryptdecrypt(toupper(message[i])));
        }
        printf("\n");

    } else if (choice == 2) {
        printf("Feature Under Development\n");
    } else {
        printf("--------\nERROR: Invalid Choice - Killing Program\n-------\n");
    }

    return 0;
}
