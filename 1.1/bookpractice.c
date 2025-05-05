#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
//Definition of the main function
{
    //Declaration of the struct orange with its variables 
    //The struct defines the variables that will be stored in the created instances of the struct
    struct Orange
    {
        int juicelevel; 
        int peeldryness;
        char varietyname[50]; //they can have limits on the amount of type of variable they can store
    };

    struct Orange juiciest; //creating a new instance of the Orange struct with the a keyname easy to understand
    
    strcpy(juiciest.varietyname, "juicydeliciouslyni"); //Defining the declared varietyname char[50] variable with the name of the orange variety
    // Initializing the other variables of the Orange struct for this instance
    juiciest.peeldryness = 10;
    juiciest.juicelevel = 100;


    printf("%s\n",juiciest.varietyname); //use a print function to print that variable of the new instance of the struct orange with the name of juiciest

    //printing the other previously initialized variables
    printf("%d\n",juiciest.peeldryness);
    printf("%d\n",juiciest.juicelevel);

    return 0; //Usually the main function should return 0
}