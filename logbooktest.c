#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct logbook{
    char plateNum[MAX];
    char profileID[MAX];
    char type;
    struct tm timeIn;
    struct tm timeOut;
    struct logbook * next;
}log;

void useLog(log *head, int option);

//-------------------------------------------------------------
//please define with return int (0 or 1)
void traverseProfile(void);
//please define with void return and void parameters
void register();
///----------------------------------------------------------==


int main()
{
    
    log newLog; 


    return 0;
}

//option if log in (1) or log out (2)
void useLog(log *head, int option)
{
    log * p, *q;
    char tempNo[MAX];
    char tempID[MAX];
    int choice;
    p = head;
    q = head;
    if(option == 0)
    {
        printf("Log IN\nPlate No: ");
        scanf("%s", tempNo);
        printf("Driver ID: ");
        scanf("%s", tempID);
        //ends once profile is registered or transaction is ended
        while(traverseProfile() == 1)
        {
            printf("Plate Number is not in our data base.\n\t1. End Transaction\n\t2. Register Profile\n");
            scanf("%d", &choice);
            //register profile

        }

    }

}