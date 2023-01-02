#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Student
{
public:
    int id;
    float gpa;
    int semester;
};

int main()
{
    FILE *fp;
    fp=fopen("E:grades.txt","r");
    Student student[100];
    char arr[1024];

    int count=0,i=0;
    while(fgets(arr,sizeof(arr),fp))
    {
        fscanf(fp,"%d,%f,%d",&student[i].id,&student[i].gpa,&student[i].semester);
        count++;
        i++;
    }
    int id,semester;
    float gpa;
    cout<<"Enter Student Id:"<<endl;
    cin>>id;

    cout<<"Enter GPA: "<<endl;
    cin>>gpa;

    if(gpa<2.00 && gpa>4.00)
    {
        cout<<"Invalid Gpa"<<endl;
        return 0;
    }
    cout<<"Enter your semester: "<<endl;
    while(cin>>semester)
    {
        if(semester<=0 && semester>8)
        {
            cout<<"Invalid Semester"<<endl;
            return 0;
        }
    }

    student[count-1].id=id;
    student[count-1].gpa = gpa;
    student[count-1].semester=semester;
    fclose(fp);

    fp=fopen("E:grades.txt","a");
    fprintf(fp,"\n%d,%.2f,%d",student[count-1].id,student[count-1].gpa,student[count-1].semester);
    fclose(fp);

    return 0;
}


