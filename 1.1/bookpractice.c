#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// argument vector is type char and by default stores the program name in the position 0 of the array
int main(int argc, char *argv[]) // The function does not receive arguments because it dont uses them it only returns (1 or 0)

// Definition of the main function
{
    //testing the argc and argv to learn about how they work

    //printing the argc which should print the number of arguments it received since we are using a int specifier
    //seeing the printf() definition we can see the specifier its mandatory
    printf("the number of arguments is = ");
    printf("%i\n", argc); //
    printf("\n");

    printf("___________\n");

    printf("\n");

    int i = 0; //initializing the i variable to iterate on the argv in order to print different arguments of the program

    while (i < argc) 
    //while the i (iteration index) is less than the number of arguments of our main function
    {
        //print that positon of the argument vector using the index variable
        printf("%s\n", argv[i]); //
        //incrementing the index variable to continue iterating all the argument vector
        i++;
    }
    //the process repeats until i is equals or bigger than the argcounter

    // Declaration of the struct orange with its variables
    // The struct defines the variables that will be stored in the created instances of the struct

    struct Orange
    {
        int juice_level;
        int peel_dryness;
        char variety_name[50]; // they can have limits on the amount of type of variable they can store
    };

    struct Orange juiciest; // creating a new instance of the Orange struct with the a keyname easy to understand

    strcpy(juiciest.variety_name, "juicydeliciouslyni"); // Defining the declared variety_name char[50] variable with the name of the orange variety
    // Initializing the other variables of the Orange struct for this instance
    juiciest.peel_dryness = 10;
    juiciest.juice_level = 100;

    printf("\n");
    printf("%s\n", juiciest.variety_name); // use a print function to print that variable of the new instance of the struct orange with the name of juiciest
    printf("\n");

    // printing the other previously initialized variables
    printf("%d\n", juiciest.peel_dryness);
    printf("%d\n", juiciest.juice_level);

    struct Orange dryest; // creating another instance of the Orange struct with a different name and variable values

    strcpy(juiciest.variety_name, "drynesioussekius");
    dryest.juice_level = 10;
    dryest.peel_dryness = 73;

    printf("%s\n", dryest.variety_name);
    printf("%i\n", dryest.juice_level);
    printf("%i\n", dryest.peel_dryness);

    return 0; // Usually the main function should return 0
}