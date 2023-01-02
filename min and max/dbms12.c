#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

    FILE *fp;
    fp=fopen("E:/grades.txt", "r");

    double total_gpa=0;
    double average;
    int student_num=0;

    if(fp==NULL)
    {
        printf("Cant open the file\n");
        exit(1);
    }

    else{

        char ch[1024];

        int row=0;
        int column=0;

        while(fgets(ch,sizeof(ch), fp)){
            column=0;
            row++;

            char* val= strtok(ch, ";");

            while(val)
            {
                  if(column==1){
                    char *ptr;

                    total_gpa+=strtod(val, &ptr);
                    student_num++;
            }

            val= strtok(NULL, ";");
            column++;

    }
        }
    fclose(fp);
    average=total_gpa/student_num;
    printf("Average Gpa is %lf",average);

        }
        return 0;
}
