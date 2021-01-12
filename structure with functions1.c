#include <stdio.h>
#include <stdlib.h>

struct data{
int day,month,year;
int id;
char* first_name;
char* last_name;
char gender;
int math1;
int math2;
int cs;
int is;
int pl;
};
void welcome(struct data e){

   printf("student id :%d\n",e.id);
   printf("student first name: %s\n",e.first_name);
   printf("student last name: %s\n",e.last_name);
   printf("student Data of birth (day month year): %d %d %d\n",e.day,e.month,e.year);
   printf("student gender (M/F) %c\n",e.gender);
   printf("student score in math1: %d\n",e.math1);
   printf("student score in math2: %d\n",e.math2);
   printf("student score in Intro to cs:%d\n",e.cs);
   printf("student score in Intro to is:%d\n",e.is);
   printf("student score in Intro to pl:%d\n",e.pl);
   printf("student data has been saved\n\n");
}
void search(struct data e){

 printf("student id :%d\n",e.id);
   printf("student name: %s %s\n",e.first_name,e.last_name);
   printf("student DOB: %d-%d-%d\n",e.day,e.month,e.year);
   printf("student gender: %c\n",e.gender);
   printf("student score in math1: %d\n",e.math1);
   printf("student score in math2: %d\n",e.math2);
   printf("student score in Intro to cs:%d\n",e.cs);
   printf("student score in Intro to is:%d\n",e.is);
   printf("student score in Intro to pl:%d\n",e.pl);
  printf("-------------------------------------\n");
}
void print(struct data e){
   printf("student #1:-");
   printf("ID: %d\n",e.id);
   printf("Name: %s %s\n",e.first_name,e.last_name);
   printf("Gender: %c\n",e.gender);
   printf("Age: %d\n",2021-e.year);
   printf("Score in math2: %d\n",e.math2);
   printf("Score in Intro to cs:%d\n",e.cs);
   printf("Score in Intro to is:%d\n",e.is);
   printf("Score in Intro to pl:%d\n",e.pl);
  printf("+++++++++++++++++++++++++++++++++\n");

}
void stats(struct data e){

   printf("Total number of student in DB: %d\n",2);
   printf("average students score in math1: %.6lf\n",(double)e.math1);
   printf("Average students score in math2: %.6lf\n",(double)e.math2);
   printf("Average student Score in Intro to cs:%.6lf\n",(double)e.cs);
   printf("Average student Score in Intro to is:%.6lf\n",(double)e.is);
   printf("Average student Score in Intro to pl:%.6lf\n",(double)e.pl);
  printf("-------------------------------------------------\n");

}


int main(){
    int c,a;
    struct data e;
    e.id=1;
    e.day=21;
    e.month=9;
    e.year=2002;
    e.first_name="Eman";
    e.last_name="Elsayed";
    e.gender='M';
    e.math1=98;
    e.math2=97;
    e.cs=96;
    e.is=95;
    e. pl=100;
    printf("+-------------------------+\n");
    printf("|         welcome         |\n");
    printf("+-------------------------+\n");

  while(c!=0){
    printf("1-Add student to DB\n");
    printf("2-Search for student\n");
    printf("3-print.\n");
    printf("4-statistics\n");
    printf("0-Exist\n");
    printf("Enter your choice: ");
    scanf("%d",&a);
    if(a==1){
         welcome(e);
    }
   else if(a==2){
    printf("+-------------------------+\n");
    printf("|         search          |\n");
    printf("+-------------------------+\n");

    search(e);
  }
  else if(a==3){
    printf("+-------------------------+\n");
    printf("|         print           |\n");
    printf("+-------------------------+\n");
    print(e);
  }
  else if(a==4){

    printf("+-------------------------+\n");
    printf("|         Stats           |\n");
    printf("+-------------------------+\n");

   stats(e);


  }
  else{
    printf("Wrong choice...\n");
    printf("choose again\n\n\n");
  }
}



    return 0;
}

