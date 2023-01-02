#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>



typedef struct txtfile1
{
    char name[10];
    long studentId;
    int age;
    char bloodgrp[10];
    char dept[10];

}info1;

typedef struct txtfile2
{
    long studentID;
    float gpa;
    int semester;
}info2;

info1 namelist1[10000];
info2 namelist2[10000];

int num_records = 0;
int num_records2 =0;

bool r_error = false;
bool w_error = false;




int main()
{
           FILE* fp;
    fp=fopen("E:grades.txt","r");
    if(fp==NULL){
        printf("Error in opening input file");
        r_error=true;
        exit(1);
    }

    fp=fopen("E:studentinfo.txt","r");
    if(fp==NULL){
        printf("Error in opening input file");
        r_error=true;
        exit(1);
    }
    return 0;
}
