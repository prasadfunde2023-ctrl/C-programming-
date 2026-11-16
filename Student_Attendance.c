#include <stdio.h>
int main()
{
   int student,attendance,totalLecture,i;
   float percentage;
    printf("------STUDENT ATTENDANCE C LAB------\n");
   printf("Enter the Total Lecture:");
    scanf("%d",&totalLecture);
if(totalLecture <= 0){
    printf("Lecture will be not conducted");
     return 0;
}
else{
        printf("Total Lecture is:%d \n",totalLecture);
    }
    
printf("Enter the number of student:");
scanf("%d",&student);

for(i=1;i<=student;i++){
    printf("Enter the student attendance %d \n",i);
    scanf("%d",&attendance);

    percentage=(attendance*100)/totalLecture;

    if(percentage>75){
        printf("Default Student %.2f%%\n",percentage);
        
    }
    else{
            printf("Less Attendance %.2f%% \n",percentage);
        }
}


   return 0;
}