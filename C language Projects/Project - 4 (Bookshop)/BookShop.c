#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char date[20];
char uname[20];
char bname[20];
char mno[15];
long int cost;
int n, i;

// fucntion for writing entry of book into file

void write()
{
    FILE *fp;
    char dat[20];
    char unam[20];
    char bnam[20];
    char mn[15];
    int cost;

    printf("Enter Date             ::");
    scanf("%s", &dat);
    printf("Enter Name of customer ::");
    scanf("%s", &unam);
    printf("Enter name of book     ::");
    scanf("%s", &bnam);
    printf("Enter Mobile number    ::");
    scanf("%s", &mn);
    printf("Enter cost of book     ::");
    scanf("%ld", &cost);

    fp = fopen("Record.txt", "a");

    fprintf(fp, "\n%s %s %s %s %d\n", dat, unam, mn, bnam, &cost);
    printf("\n        Record written successfully       \n");
    fclose(fp);
}

// function to search record by date

void display(char da[])
{
    FILE *fp;
    int res;

    fp = fopen("record.txt", "r");

    while (fscanf(fp, "%s %s %s %s %ld\n", date, uname, mno, bname, &cost) != EOF)
    {
        res = strcmp(date, da);
        if (res == 0)
        {
            printf("\n\nCustomer name=%s\n", uname);
            printf("Mobile No = %s\n", mno);
            printf("Book name = %s\n", bname);
            printf("Book cost = %ld\n", cost);
        }
    } // close of while loop
    fclose(fp);
} // close of display function

int main()
{
    char ch;
    char lm[20];
    // textcolor(10);
    // textbackground(4);

    do
    {
        printf("\t*****WELCOME TO THE BOOKSHOP OF DIPEN - DIXIT*****\n");
        printf("Press <1> to create entry for book\n");
        printf("Press <2> to display on specific date\n");
        printf("Press <1> to exit\n");

        printf("\n\nEnter Choice ::");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            write();
            break;

        case 2:
            printf("\nENTER DATE   ::");
            scanf("%s", &lm);
            display(lm);
            break;

        case 0:
            exit(0);

        default:
            printf("\nInvalid selection\n");
        }
        getch();
        // close of do loop
    } while (ch != 0);

    return 0;
} // close of main function
