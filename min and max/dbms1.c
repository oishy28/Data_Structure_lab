 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>

 int main()
 {
   FILE *fp=NULL;
   int id,student_num =0,semester;
   float gpa,total_gpa =0,average;
   char ch[500];

   fp=fopen("E:grades.txt","r");
   if(fp==NULL)
   {
       printf("Cant open the file\n");
       exit(1);
   }

   if(fp!=NULL)
   {
       int row = 0;
       int column = 0;
       while(fgets(ch,500,fp)!=NULL)
       {
         fscanf(fp,"%d,%f,%d",&id,&gpa,&semester);
           total_gpa += gpa;
           student_num++;
          /* column =0;
           row++;

            char* value= strtok(ch, ";");

            while(value)
            {
                  if(column==1){
                    char *ptr;

                    total_gpa+=strtod(value, &ptr);
                    student_num++;
            }

            value= strtok(NULL, ";");
            column++;*/
       }
 average =total_gpa/student_num;
       fclose(fp);
       printf("Average gpa is %d %f %f",student_num,total_gpa,average);
   }
return 0;

}// }

        MountainBike mountainBike = new MountainBike(20, 30, 10);
        System.out.println("Gear is: " + mountainBike.gear);
        System.out.println("Speed is " + mountainBike.speed);
        System.out.println("Seat Height is: " + mountainBike.seatHeight);
        mountainBike.applyBrake(1);
        System.out.println("after applying brake " + mountainBike.speed);
        mountainBike.setGear(34);
        System.out.println("New Gear is " + mountainBike.gear);public int add(int a,int b){
        return a+b;
    }

