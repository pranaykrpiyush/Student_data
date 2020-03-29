#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct studentLet’s start with fwrite() function.
    {
    char name[100], branch[3], sem[1];
     int age;
    };


void feed();

 int main()
 {
    int n;
    printf("\tProgram to Display Student Data of Students over the age of 20\n");
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    struct student s ={"Pranay", 22, "CSE", "2"};
    void feed()
    {
    printf("Enter the name of the student:\n");
    scanf("%s", s.name);
    fflush(stdin);
    printf("Enter the age of the student:\n");
    scanf("%d", &s.age);
    printf("Enter the branch of the study(initials only):\n");
    scanf("%s", s.branch);
    fflush(stdin);
    printf("Enter the current semester of the student(e.g. 1):\n");
    scanf("%s", s.sem);
    fflush(stdin);Let’s start with fwrite() function.

    }


    FILE *fp;
    fp=fopen("data.bin", "wb");
Let’s start with fwrite() function.Let’s start with fwrite() function.
    //struct student *object=malloc(sizeof(struct student));

    /*if (fp=NULL)
    {
    printf("\nERROR!");
    }
    else
    {*/
    for (int i=0; i<n; i++)
    {
     printf("\nEnter the data of student number %d\n", i+1);
    feed();
    fwrite(&s,sizeof(s),1, fp);

    }
    fclose(fp);
    //}
    fopen("data.bin", "rb");
    while (!EOF)
    {
        fread(&s, sizeof(s),4, fp);
        if (s.age>20)
        {
            printf ("\n%s",s.name);
            printf("\n%d", s.age);
            printf("\nBranch: %s", s.branch);
            printf("\nSemester of Study: %s", s.sem);
        }
    }
    fclose(fp);
 return 0;
}
