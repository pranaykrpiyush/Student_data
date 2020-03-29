#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
    {
    char name[100], branch[3];
     int age, sem;
    };



/*void feed()
{


    }
*/

 int main()
 {
    int n;
    struct student s ={"Pranay", 22, "CSE", 2 };
    printf("\tProgram to Display Student Data of Students over the age of 20\n");
    printf("Enter the number of students:\n");
    scanf("%d", &n);


    void feed();


    FILE *fp;
    fp=fopen("data.bin", "wb");
    //struct student arr[100];
    //struct student *object=malloc(sizeof(struct student));

    if (fp==NULL)
    {
    printf("\nERROR!");
    }

    else
    {
      printf("\nFile opened succesfully");
      for (int i=0; i<n; i++)
        {
            printf("\nEnter the data of student number %d\n", i+1);


            printf("Enter the name of the student:\n");
            scanf("%s", s.name);
            fflush(stdin);
            printf("Enter the age of the student:\n");
            scanf("%d", &s.age);
            printf("Enter the branch of the study(initials only):\n");
            scanf("%s", s.branch);
            fflush(stdin);
            printf("Enter the current semester of the student(e.g. 1):\n");
            scanf(" %d", &s.sem);
            fflush(stdin);

            fwrite(&s,sizeof(s),1, fp);

        }
    fclose(fp);
    }

    fp=fopen("data.bin", "rb");
    if (fp==NULL){ printf("\nCan't open file.\n");}


    while (fread(&s,sizeof(s),1,fp)==1)
    {



            if (s.age>20)
            {
                printf ("\n%s",s.name);
                fflush(stdin);
                printf("\n%d", s.age);
                printf("\nBranch: %s", s.branch);
                fflush(stdin);
                printf("\nSemester of Study: %d", s.sem);
            }
        }

 fclose(fp);

 return 0;
}
