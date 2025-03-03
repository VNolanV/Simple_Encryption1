#include "simpleEncryptionHeader.h"

char simpleencryptdecrypt(char givenchar) {
    if (givenchar >= 'A' && givenchar <= 'Z') {
        return 'Z' - (givenchar - 'A');
    } 
    else if (givenchar >= '0' && givenchar <= '9') {
        return '9' - (givenchar - '0');
    }
    else if (givenchar == ' ') {
        return '/';
    }
    else if (givenchar == '/') {
        return ' ';
    }
    else {
        return givenchar;
    }
}

char rsaencryptdecrypt (char [] givenmessage){

    

}

