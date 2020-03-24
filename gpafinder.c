#include <stdio.h>
#include <string.h>

int main() {
    
    //constants
    const int a = 4;
    const int b = 3;
    const int c = 2;
    const int d = 1;

    //variables
    int runningtot = 0;
    double gpa;
    char letter[56] = "";
    char * ca;
    char * cb;
    char * cc;
    char * cd;
    int length = 0;

    printf("Welcome to the gpa finder \nType in each letter grade received in school in a string of characters\n");
    scanf("%s", &letter);
    
    printf("%d\n", runningtot);
    ca = strchr(letter,'a');
    while (ca != NULL) { 
        runningtot += a;
        length++;
        ca = strchr(ca+1,'a');
    }
    printf("%d\n", runningtot);
    cb = strchr(letter,'b');
    while (cb != NULL) { 
        runningtot += b;
        length++;
        cb = strchr(cb+1,'b');
        
    }
    printf("%d\n", runningtot);
    cc = strchr(letter,'c');
    while (cc != NULL) { 
        runningtot += c;
        length++;
        cc = strchr(cc+1,'c');
    }
    printf("%d\n", runningtot);
    cd = strchr(letter,'d');
    while (cd != NULL) { 
        runningtot++;
        length++;
        cd = strchr(cd+1,'d');
    }

    //find and print gpa
    gpa = (double) runningtot/length;
    printf("Your gpa is %f\n", gpa);
    

    return 0;

}