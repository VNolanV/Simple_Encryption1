
#include "vanNolanSE1.h"

int main(int argc, char * argv[]){

    while(1){
    
        //Misc. Declaration of Variables
        int choice = 0;
        
        //Program presents user with program options
        printf("\nSimple Encyption v0.1");
        printf("\n----------------------");
        printf("\n1. Encryption");
        printf("\n2. Decryption");
        printf("\n3. Exit");
        
        //Checking that input is correct

        int checker = scanf("%d", &choice);

        if (checker == 2){
            prinft("\n\nValid Input Detected");
        }else if (checker == 1 || checker == 0){
            prinft("\n\nError: Invalid Input Detected");
            continue;
        }else{
            printf("\n\nError: Unknown 'scanf' Error Code");
        }

        //Processing of user choice and execution
        //TODO: Adopt more object orientated approach to program

        if (choice == 1){
            printf("\n\nProgram Current Setting: Encryption");
        }else if (choice == 2){
            printf("\n\nProgram Current Setting: Decryption");
        }else if (choice ==3){
            printf("\n\nProgram Current Setting: Exit");
            break;
        }else{
            printf("\n\nError: Invalid Choice. Please try again.");
        }

    }

return 0;

}