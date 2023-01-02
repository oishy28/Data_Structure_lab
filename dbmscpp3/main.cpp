#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char *name;
    int age;
    char *bloodgroup;
    char *dept;
};
class Grade
{
public:
    int id;
    float gpa=0.00;
    int sem;
};
int main()
{
    Student students[100];
    FILE *fp;
    fp = fopen("E:studentinfo.txt","r");
    char arr[1024];

    int count=0,i=0;

    while(fgets(arr,sizeof(arr),fp))
    {
        fscanf(fp,"%d,%s,%d,%s,%s",&students[i].id,&students[i].name,&students[i].age,&students[i].bloodgroup,&students[i].dept);

        i++;
        count++;
    }
    fclose(fp);
    Grade grades[100];
    fp = fopen("E:grades.txt","r");

    int j=0;
    while(fgets(arr,sizeof(arr),fp))
    {
        fscanf(fp,"%d,%f,%d",&grades[j].id,&grades[j].gpa,&grades[j].sem);
        j++;
    }
    fclose(fp);


    int stdid;
    cout<<"Enter Student ID: "<<endl;
    cin>>stdid;

    for(int r=0;r<j;r++)
    {
       if(stdid==students[r].id )
       {
           cout<<students[r].name<<endl;
           cout<<grades[r].sem<<endl;
       }
    }

    return 0;

}
