//***************************************************************
//                   HEADER FILES
//***************************************************************
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>

//******************************************************************
//               PREPROCESSOR DIRECTIVES
//******************************************************************
#define a setcolor(BLUE)
#define b delay(5)
#define g textcolor(9)
#define h textcolor(15)

void graph(void);


//***************************************************************
//                   STRUCTURE
//****************************************************************

struct student
{
 int rollno;
 char name[20];
 int p_marks,c_marks,m_marks,e_marks,cs_marks,ps_marks;
 float per;
 char grade[5];
 float cgpa;
}st;

//***************************************************************
//        FILE POINTER & TIME
//****************************************************************

 FILE *fptr;

 time_t t;


//***************************************************************
//                      FUNCTIONS
//****************************************************************


//**********WELCOME PAGE USING GRAPHICS************************

void gph()
{
  int i,j, gd= DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(BLACK);

while(!kbhit())
{

//FOR BORDER
setcolor(DARKGRAY);
rectangle(0,15,637,456);
rectangle(1,16,636,455);

//FOR S
for(i=60;i>=15;i=i-5)
{
a;
circle(i,50,10);
b;
}
for(i=50;i<=120;i=i+5)
{
a;
circle(15,i,10);
b;
}
for(i=15;i<=60;i=i+5)
{
a;
circle(i,120,10);
b;
}
for(i=120;i<=190;i=i+5)
{
a;
circle(60,i,10);
b;
}
for(i=60;i>=15;i=i-5)
{
a;
circle(i,190,10);
b;
}

//for T
for(i=90;i<=135;i=i+5)
{
a;
circle(i,50,10);
b;
}
for(i=50;i<=190;i=i+5)
{a;
circle(112,i,10);
b;
}
//for U
for(i=50;i<=190;i=i+5)
{
 a;
 circle(165,i,10);
 b;
}
for(i=165;i<=210;i=i+5)
{
 a;
 circle(i,190,10);
 b;
}
for(i=190;i>=50;i=i-5)
{
 a;
 circle(210,i,10);
 b;
}
//for D

for(i=50;i<=190;i=i+5)
{
a;
circle(240,i,10);
b;
}
for(j=240,i=50;j<=275,i<=110;j=j+5,i=i+5)
{
a;
circle(j,i,10);
b;
}
for(j=300,i=110;j>=240,i<=190;j=j-5,i=i+7)
{
a;
circle(j,i,10);
b;
}

//for E
for(i=360;i>=315;i=i-5)
{
 a;
 circle(i,50,10);
 b;
}
for(i=50;i<=190;i=i+5)
{
 a;
 circle(315,i,10);
 b;
}
for(i=315;i<=360;i=i+5)
{
 a;
 circle(i,190,10);
 b;
}
for(i=315;i<=360;i=i+5)
{
 a;
 circle(i,120,10);
 b;
}
//for N
for(i=190;i>=50;i=i-5)
{
 a;
 circle(390,i,10);
 b;
}
for(i=390,j=50;i<=435,j<=95;i=i+5,j=j+5)
{
 a;
 circle(i,j,10);
 b;
}
for(i=190;i>=50;i=i-5)
{
 a;
 circle(435,i,10);
 b;
}
//for T
for(i=465;i<=510;i=i+5)
{
 a;
 circle(i,50,10);
 b;
}
for(i=190;i>=50;i=i-5)
{
 a;
 circle(487,i,10);
 b;
}
//for apostrophe

for(i=35,j=545;i<=70,j>=535;i=i+5,j=j-5)
{
a;
circle(j,i,10);
b;
}
//for S
for(i=622;i>=577;i=i-5)
{
 a;
 circle(i,50,10);
 b;
}
for(i=50;i<=120;i=i+5)
{
 a;
 circle(577,i,10);
 b;
}
for(i=577;i<=622;i=i+5)
{
 a;
 circle(i,120,10);
 b;
}
for(i=120;i<=190;i=i+5)
{
 a;
 circle(622,i,10);
 b;
}
for(i=622;i>=577;i=i-5)
{
 a;
 circle(i,190,10);
 b;
}
// for R
for(i=430;i>=290;i=i-5)
{
 a;
 circle(110,i,10);
 b;
}
for(i=110;i<=155;i=i+5)
{
 a;
 circle(i,290,10);
 b;
}
for(i=290;i<=360;i=i+5)
{
 a;
 circle(155,i,10);
 b;
}
for(i=155;i>=110;i=i-5)
{
 a;
 circle(i,360,10);
 b;
}
for(i=360;i<=430;i=i+5)
{
 a;
 circle(140,i,10);
 b;
}
for(i=140;i<=155;i=i+5)
{
 a;
 circle(i,430,10);
 b;
}
//for E
for(i=230;i>=185;i=i-5)
{
 a;
 circle(i,290,10);
 b;
}
for(i=290;i<=430;i=i+5)
{
 a;
 circle(185,i,10);
 b;
}
for(i=185;i<=230;i=i+5)
{
 a;
 circle(i,430,10);
 b;
}
for(i=185;i<=230;i=i+5)
{
 a;
 circle(i,360,10);
 b;
}
//for C
for(i=320;i>=290;i=i-5)
{
 a;
 circle(305,i,10);
 b;
}
for(i=305;i>=260;i=i-5)
{
 a;
 circle(i,290,10);
 b;
}
for(i=290;i<=430;i=i+5)
{
 a;
 circle(260,i,10);
 b;
}
for(i=260;i<=305;i=i+5)
{
 a;
 circle(i,430,10);
 b;
}
for(i=430;i>=400;i=i-5)
{
 a;
 circle(305,i,10);
 b;
}
//for O
for(i=290;i<=430;i=i+5)
{
a;
circle(335,i,10);
b;
}
for(i=335;i<=380;i=i+5)
{
a;
circle(i,430,10);
b;
}
for(i=430;i>=290;i=i-5)
{
a;
circle(380,i,10);
b;
}
for(i=380;i>=335;i=i-5)
{
a;
circle(i,290,10);
b;
}

// for R
for(i=430;i>=290;i=i-5)
{
 a;
 circle(410,i,10);
 b;
}
for(i=410;i<=455;i=i+5)
{
 a;
 circle(i,290,10);
 b;
}
for(i=290;i<=360;i=i+5)
{
 a;
 circle(455,i,10);
 b;
}
for(i=455;i>=410;i=i-5)
{
 a;
 circle(i,360,10);
 b;
}
for(i=360;i<=430;i=i+5)
{
 a;
 circle(440,i,10);
 b;
}
for(i=440;i<=455;i=i+5)
{
 a;
 circle(i,430,10);
 b;
}
//for D

for(i=290;i<=430;i=i+5)
{
a;
circle(485,i,10);
b;
}
for(j=485,i=290;j<=520,i<=350;j=j+5,i=i+5)
{
a;
circle(j,i,10);
b;
}
for(j=545,i=350;j>=485,i<=430;j=j-5,i=i+7)
{
a;
circle(j,i,10);
b;
}

}
getch();
closegraph();

}


void write_student()
   {

    int l;
    char *pt;
    fptr=fopen("student.dat","ab");
    g;
    cprintf("\nPlease Enter The Details of Student \n");
    h;
    printf("\nEnter The roll number of student:  ");
    scanf("%d",&st.rollno);
    fflush(stdin);
    printf("\n\nEnter The Name of student:  ");
    gets(st.name);

    //*******CHECKING IF ONLY ALPHABETS OR SPACES ARE ENTERED IN NAME****

    for(int i=0; i<strlen(st.name);i++)
	{
    while(!(isalpha(st.name[i]) || isspace(st.name[i])))
     {
     printf("Wrong input\nEnter name again:\n");
     gets(st.name);
     }
    }
//***********MALLOC***************
    l=strlen(st.name);
    pt=(char*)malloc(l+1);
    strcpy(pt,st.name);
    printf("\nEnter marks in Programming Language(CT-153) out of 100 : ");
    scanf("%d",&st.p_marks);
    printf("\nEnter marks in Fundamentals of Information Technology(CT-174) out of 100 : ");
    scanf("%d",&st.c_marks);
    printf("\nEnter marks in Discrete Structures(CT-162) out of 100 : ");
    scanf("%d",&st.m_marks);
    printf("\nEnter marks in Functional English(HS-104) out of 100 : ");
    scanf("%d",&st.e_marks);
    printf("\nEnter marks in Calculus(MT-173) out of 100 : ");
    scanf("%d",&st.cs_marks);
    printf("\nEnter marks in Pakistan Studies(HS-105) out of 100 : ");
    scanf("%d",&st.ps_marks);

    st.per=(st.p_marks+st.c_marks+st.m_marks+st.e_marks+st.cs_marks+st.ps_marks)/6.0;
    if(st.per>=94)
	       {strcpy(st.grade,"A+"); st.cgpa=4.0;}
	    else if(st.per>=85 && st.per<94)
	      {strcpy(st.grade,"A");   st.cgpa=4.0;}
	    else if(st.per>=80 && st.per<85)
	      {strcpy(st.grade,"A-");  st.cgpa=3.7;}
		 else if(st.per>=75 && st.per<80)
	      { strcpy(st.grade,"B+");  st.cgpa=3.4;}
	    else if(st.per>=70 && st.per<75)
	     {  strcpy(st.grade,"B");   st.cgpa=3.0;}
		else if(st.per>=67 && st.per<70)
	      { strcpy(st.grade,"B-");  st.cgpa=2.7; }
	    else if(st.per>=64 && st.per<67)
	    {   strcpy(st.grade,"C+");  st.cgpa=2.4; }
		 else if(st.per>=60 && st.per<64)
	   {    strcpy(st.grade,"C");  st.cgpa=2.0; }
	    else if(st.per>=57 && st.per<60)
	     {  strcpy(st.grade,"C-"); st.cgpa=1.7; }
		else if(st.per>=54 && st.per<57)
	     {  strcpy(st.grade,"D+"); st.cgpa=1.4; }
	    else if(st.per>=50 && st.per<54)
	    {   strcpy(st.grade,"D");   st.cgpa=1.0; }

	    else
	      { strcpy(st.grade,"F");
	       st.cgpa=0.0;
		}
    fwrite(&st,sizeof(st),1,fptr);
    fclose(fptr);
    printf("\n\nStudent Record Has Been Created ");
    getch();
}




void display_all()
{
    clrscr();
    g;
    cprintf("\n\n\n\t\t\tDISPLAYING ALL RECORDS !!!\n\n");
    fptr=fopen("student.dat","rb");
    while((fread(&st,sizeof(st),1,fptr))>0)
    {
     h;
      printf("\nRoll Number of Student :\t\t\t\t %d",st.rollno);
      printf("\nName of student :\t\t\t\t\t %s",st.name);
      printf("\nMarks in Programming Language(CT-153) :\t\t\t %d",st.p_marks);
      printf("\nMarks in Fundamentals of Information Technology(CT-174) :%d",st.c_marks);
      printf("\nMarks in Discrete Structures(CT-162) :\t\t\t %d",st.m_marks);
      printf("\nMarks in  Functional English(HS-104) :\t\t\t %d",st.e_marks);
      printf("\nMarks in Calculus(MT-173) :\t\t\t\t %d",st.cs_marks);
      printf("\nMarks in Pakistan Studies(HS-105) :\t\t\t %d",st.ps_marks);
      printf("\nPercentage of student is  :\t\t\t\t %.2f",st.per);
      printf("\nGrade of student is :\t\t\t\t\t %s",st.grade);
      printf("\nCGPA of student is : \t\t\t\t\t %-1.2f",st.cgpa);
      printf("\n\n====================================\n");
      h;
      getch();
    }
    fclose(fptr);
    getch();
}



void display_sp(int n)
{
    int flag=0;
    fptr=fopen("student.dat","rb");
    while((fread(&st,sizeof(st),1,fptr))>0)
    {
     if(st.rollno==n)
	{
	 clrscr();
	  printf("\nRoll Number of Student :\t\t\t\t %d",st.rollno);
      printf("\nName of student :\t\t\t\t\t %s",st.name);
      printf("\nMarks in Programming Language(CT-153) :\t\t\t %d",st.p_marks);
      printf("\nMarks in Fundamentals of Information Technology(CT-174) :%d",st.c_marks);
      printf("\nMarks in Discrete Structures(CT-162) :\t\t\t %d",st.m_marks);
      printf("\nMarks in  Functional English(HS-104) :\t\t\t %d",st.e_marks);
      printf("\nMarks in Calculus(MT-173) :\t\t\t\t %d",st.cs_marks);
      printf("\nMarks in Pakistan Studies(HS-105) :\t\t\t %d",st.ps_marks);
      printf("\nPercentage of student is  :\t\t\t\t %.2f",st.per);
      printf("\nGrade of student is :\t\t\t\t\t %s",st.grade);
      printf("\nCGPA of student is : \t\t\t\t\t %-1.2f",st.cgpa);
	 flag=1;
	}
    }
    fclose(fptr);
if(flag==0)

 printf("\n\nRecord does not exist");
    getch();
}




void modify_student()
{
    int x,i,no,found=0;
    char *ptr;
     clrscr();
    g;
    cprintf("\n\n\tTo Modify ");
    printf("\n\n\tPlease enter the roll number of student:  ");
    h;
    scanf("%d",&no);
    fptr=fopen("student.dat","rb+");
    while((fread(&st,sizeof(st),1,fptr))>0 && found==0)
    {
    if(st.rollno==no)
	   {
	    	    printf("\nRoll Number of Student :\t\t\t\t %d",st.rollno);
      printf("\nName of student :\t\t\t\t\t %s",st.name);
      printf("\nMarks in Programming Language(CT-153) :\t\t\t %d",st.p_marks);
      printf("\nMarks in Fundamentals of Information Technology(CT-174) :%d",st.c_marks);
      printf("\nMarks in Discrete Structures(CT-162) :\t\t\t %d",st.m_marks);
      printf("\nMarks in  Functional English(HS-104) :\t\t\t %d",st.e_marks);
      printf("\nMarks in Calculus(MT-173) :\t\t\t\t %d",st.cs_marks);
       printf("\nMarks in Pakistan Studies(HS-105) :\t\t\t %d",st.ps_marks);
      printf("\nPercentage of student is  :\t\t\t\t %.2f",st.per);
      printf("\nGrade of student is :\t\t\t\t\t %s",st.grade);
      printf("\nCGPA of student is : \t\t\t\t\t %-1.2f",st.cgpa);

       h;
	    printf("\n\n\t***Please Enter The New Details of student*** \n");
	    printf("\nEnter the roll number of student:  ");
	    scanf("%d",&st.rollno);
	    fflush(stdin);
	    printf("\n\nEnter the Name of student:  ");
	    gets(st.name);
    //*********CHECKING IF INPUT IS ALPHABETS********
	    for(i=0;i<strlen(st.name);i++)
	    {
	     while(!(isalpha(st.name[i]) || isspace(st.name[i])))
	     {
	      printf("Wrong input\nEnter name again:\n");
	      gets(st.name);
	     }
	    }
    //**********MALLOC***********************
	    x=strlen(st.name);
	    ptr=(char*)malloc(x+1);
	    strcpy(ptr,st.name);

	    printf("\nEnter The marks in Programming Language(CT-153) out of 100 : ");
	    scanf("%d",&st.p_marks);
	    printf("\nEnter The marks in Fundamentals of Information Technology(CT-174) out of 100 : ");
	    scanf("%d",&st.c_marks);
	    printf("\nEnter The marks in Discrete Structures(CT-162) out of 100 : ");
	    scanf("%d",&st.m_marks);
	    printf("\nEnter The marks in Functional English(HS-104) out of 100 : ");
	    scanf("%d",&st.e_marks);
	    printf("\nEnter The marks in Calculus(MT-173) out of 100 : ");
	    scanf("%d",&st.cs_marks);
	    printf("\nEnter The marks in Pakistan Studies(HS-105) out of 100 : ");
	    scanf("%d",&st.ps_marks);
	    st.per=(st.p_marks+st.c_marks+st.m_marks+st.e_marks+st.cs_marks+st.ps_marks)/6.0;
     if(st.per>=94)
	       {strcpy(st.grade,"A+"); st.cgpa=4.0;}
	    else if(st.per>=85 && st.per<94)
	      {strcpy(st.grade,"A");   st.cgpa=4.0;}
	    else if(st.per>=80 && st.per<85)
	      {strcpy(st.grade,"A-");  st.cgpa=3.7;}
		 else if(st.per>=75 && st.per<80)
	      { strcpy(st.grade,"B+");  st.cgpa=3.4;}
	    else if(st.per>=70 && st.per<75)
	     {  strcpy(st.grade,"B");   st.cgpa=3.0;}
		else if(st.per>=67 && st.per<70)
	      { strcpy(st.grade,"B-");  st.cgpa=2.7; }
	    else if(st.per>=64 && st.per<67)
	    {   strcpy(st.grade,"C+");  st.cgpa=2.4; }
		 else if(st.per>=60 && st.per<64)
	   {    strcpy(st.grade,"C");  st.cgpa=2.0; }
	    else if(st.per>=57 && st.per<60)
	     {  strcpy(st.grade,"C-"); st.cgpa=1.7; }
		else if(st.per>=54 && st.per<57)
	     {  strcpy(st.grade,"D+"); st.cgpa=1.4; }
	    else if(st.per>=50 && st.per<54)
	    {   strcpy(st.grade,"D");   st.cgpa=1.0; }

	    else
	      { strcpy(st.grade,"F");
	       st.cgpa=0.0;
		}
	    fseek(fptr,-(long)sizeof(st),1);
	    fwrite(&st,sizeof(st),1,fptr);
	    printf("\n\n\t\t\t Record Updated");
	    found=1;
	   }
	 }
    fclose(fptr);
    if(found==0)
    printf("\n\n \t\t\tRecord Not Found ");
    getch();
}




void delete_student()
   {
    int no;
    FILE *fptr2;
    clrscr();
  g;
    cprintf("\n\n\n\tDelete Record");
   h;
    printf("\n\nPlease Enter the roll number of student you want to Delete:  ");
    scanf("%d",&no);
    fptr=fopen("student.dat","rb");

    fptr2=fopen("Temp.dat","wb");
    rewind(fptr);
    while((fread(&st,sizeof(st),1,fptr))>0)
    {
       if(st.rollno!=no)
       {
      fwrite(&st,sizeof(st),1,fptr2);
       }
    }
    fclose(fptr2);
    fclose(fptr);
    remove("student.dat");
    rename("Temp.dat","student.dat");
    printf("\n\n\t\t\tRecord Deleted ..");
    getch();
}


    void class_result()
    {
     clrscr();
     fptr=fopen("student.dat","rb");
     if(fptr==NULL)
     {
       printf("\n\nERROR!!! FILE COULD NOT OPEN\n\n\n Go To Entry Menu to create File");
       printf("\n\n\n File is closing ....");
       getch();
       exit(0);
     }

     printf("\n\n******************************************************************************\n");
     printf("\t\t\t\tCLASS RESULT ");
     printf("\n******************************************************************************\n\n");
     printf("================================================================================\n");
     printf("R.No.  Name          PL    CAL    DS    FE    FIT    PS    %age    Grade   CGPA\n");
     printf("================================================================================\n");

      while((fread(&st,sizeof(st),1,fptr))>0)
     {
       printf("%-2d   %-15s %-3d   %-3d    %-3d   %-3d   %-3d   %-3d   %-3.2f     %-2s     %-1.2f\n",st.rollno,st.name,st.p_marks,st.c_marks,st.m_marks,st.e_marks,st.cs_marks,st.ps_marks,st.per,st.grade,st.cgpa);
     }
     fclose(fptr);
     getch();
}




void gr_result()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


graph();
getch();
closegraph();
}



void graph()
{
int n;
int flag=0;

clrscr();

 printf("\n\nEnter roll no of the student:  ");
 scanf("%d",&n);

    fptr=fopen("student.dat","rb");
    while((fread(&st,sizeof(st),1,fptr))>0)
    {
     if(st.rollno==n)
	{

 clrscr();
      printf("\nRoll Number of Student :\t\t\t\t %d",st.rollno);
      printf("\nName of student :\t\t\t\t\t %s",st.name);
      printf("\nMarks in Programming Language(CT-153) :\t\t\t %d",st.p_marks);
      printf("\nMarks in Fundamentals of Information Technology(CT-174) :%d",st.c_marks);
      printf("\nMarks in Discrete Structures(CT-162) :\t\t\t %d",st.m_marks);
      printf("\nMarks in  Functional English(HS-104) :\t\t\t %d",st.e_marks);
      printf("\nMarks in Calculus(MT-173) :\t\t\t\t %d",st.cs_marks);
      printf("\nMarks in Pakistan Studies(HS-105) :\t\t\t %d",st.ps_marks);
      printf("\nPercentage of student is  :\t\t\t\t %.2f",st.per);
      printf("\nGrade of student is :\t\t\t\t\t %s",st.grade);
      printf("\nCGPA of student is : \t\t\t\t\t %-1.2f",st.cgpa);

      printf("\n\n\t\tPress ENTER to get the graph\t\t\t\t");
getch();
	 clrscr();
setbkcolor(WHITE);
setcolor(8);

line(102,250,102,450);
line(100,250,100,450);
line(80,397,450,397);
line(80,399,450,399);
line(90,300,100,300);
outtextxy(70,300,"100");
line(90,325,100,325);
outtextxy(70,325,"75");
line(90,350,100,350);
outtextxy(70,350,"50");
line(90,375,100,375);
outtextxy(70,375,"25");
outtextxy(90,410,"0");
line(150,410,150,400);
outtextxy(150,420,"PL");
line(200,410,200,400);
outtextxy(200,420,"DS");
line(250,410,250,400);
outtextxy(250,420,"PS");
line(300,410,300,400);
outtextxy(300,420,"FIT");
line(350,410,350,400);
outtextxy(350,420,"CAL");
line(400,410,400,400);
outtextxy(400,420,"FE");

outtextxy(100,210,"Y-AXIS");
outtextxy(480,400,"X-AXIS");

 line(150,400-st.p_marks,150,400); //pl
 line(200,400-st.m_marks,200,400); //ds
 line(250,400-st.ps_marks,250,400); //ps
 line(300,400-st.c_marks,300,400); //fit
 line(350,400-st.cs_marks,350,400); //cal
 line(400,400-st.e_marks,400,400); //fe


 flag=1;
	}
    }
    fclose(fptr);
if(flag==0)
printf("\n\nRecord does not exist");

}

//***************************************************************
//        INTRODUCTION FUNCTION
//****************************************************************					`
void intro()
{

 clrscr();
 t=time(NULL);
    gotoxy(55,2);
 printf("%s",ctime(&t));
    gotoxy(30,11);
 printf("THIS DATABASE IS");
    gotoxy(32,14);
 printf("DESIGNED BY");
    gotoxy(25,17);
 printf("Aiman Izhar & Arisha Kashif");
    gotoxy(28,18);
 printf("(FESE-22 & FESE-35)");

 getch();
}
//***************************************************************
//        ENTRY / EDIT MENU FUNCTION
//****************************************************************
void entry_menu()
{
    char ch2;
   clrscr();
  t=time(NULL);
      gotoxy(55,2);
  printf("%s",ctime(&t));
g;
  cprintf("\n\n\n\tENTRY & EDITING MENU");
h;
  printf("\n\n\t1.CREATE STUDENT RECORD");
  printf("\n\n\t2.DISPLAY ALL STUDENTS RECORDS");
  printf("\n\n\t3.SEARCH STUDENT RECORD ");
  printf("\n\n\t4.MODIFY STUDENT RECORD");
  printf("\n\n\t5.DELETE STUDENT RECORD");
  printf("\n\n\t6.BACK TO MAIN MENU");
  printf("\n\n\tPlease Enter Your Choice (1-6) ");
  ch2=getche();
  switch(ch2)
  {
    case '1': clrscr();
	  write_student();
	  break;
    case '2': display_all();
        break;
    case '3':
	   int num;
	   clrscr();
	   printf("\n\n\tPlease enter the roll number ");
	   scanf("%d",&num);
	   display_sp(num);
	   break;
      case '4': modify_student();break;
      case '5': delete_student();break;
      case '6': break;
      default:printf("\a");entry_menu();
   }
}



   void result()
   {
    int rno,ans;
    char ch;
    clrscr();
    t=time(NULL);
      gotoxy(55,2);
 printf("%s",ctime(&t));
    g;
    cprintf("\n\n\nRESULT MENU");
    h;
    printf("\n\n\n1. Class Result\n\n2. Student Report Card\n\n3. Graphical Result\n\n4. Back to Main Menu");
    printf("\n\n\nEnter Choice (1/2/3/4)? ");
    scanf("%d",&ans);
    switch(ans)
    {
     case 1 : class_result();break;
     case 2 : {
	do{
	char ans;
	clrscr();
	printf("\n\nEnter Roll Number Of Student :  ");
	scanf("%d",&rno);
	display_sp(rno);
	printf("\n\nDo you want to see more results (Y/N)?");
	scanf("%c",&ans);
	}while(ans=='y'||ans=='Y');
	break;
	   }

     case 3: gr_result(); break;
     case 4: break;
     default:  printf("\a");
    }
 }



//***************************************************************
//        MAIN FUNCTION
//****************************************************************


void main()
{

    gph();
  char ch;
  intro();

//*************LOGIN SCREEN*********
char userid[]="miss uzma",password[]="123",p[15],u[15];
   int n=1,a1,b1;

   clrscr();
  t=time(NULL);
      gotoxy(55,2);
 printf("%s",ctime(&t));
   printf("\n\n\n\n\n\n\n\tThis Database is password protected and is only accessible by the\n\t\t\t\tClass Advisor of FESE.\n\n\t*You have only three chances to enter correct login details*");
   getch();
   while(n<=3)
   {

      clrscr();
      g;
      cprintf("\n\n\n\n\t\tUSER ID: ");
      h;
      fflush(stdin);
      gets(u);
      g;
      cprintf("\n\t\tPASSWORD: ");
      h;
      fflush(stdin);
      gets(p);
      a1=strcmp(u,userid);
      b1=strcmp(p,password);
      if(a1==0&&b1==0)
      {

	 printf("\n\n\n\n\n\n\n\t\t\t  ****Welcome Class Advisor****\n\n\t\t\tYou have logged in successfully.");

	 //*********LOGIN SOUND*********
	 for(int y=800;y>=50;y=y-50)
    {
        sound(y);
        delay(100);
    }
        nosound();
	    getch();


    do {
      clrscr();
      t=time(NULL);
      gotoxy(55,2);
 printf("%s",ctime(&t));
      g;
      cprintf("\n\n\n\tMAIN MENU");
      h;
      printf("\n\n\t01. RESULT MENU");
      printf("\n\n\t02. ENTRY/EDIT/SEARCH MENU");
      printf("\n\n\t03. EXIT");
      printf("\n\n\tPlease Select Your Option (1-3) ");
      ch=getche();
      switch(ch)
      {
	 case '1': clrscr();
	       result();
	       break;
	  case '2': entry_menu();
		break;
	  case '3':exit(0);
	  default :printf("\a");
    }
    }
    while(ch!='3');

      }
      else
      {
	 printf("\n\tWrong PASSWORD and/or USER ID. Now you have %d more chance/s.",3-n);
	 //*****ERROR SOUND***
    for(int e=480;e>=50;e=e-10)
    {
    sound(e);
    delay(28);
    }
    nosound();
	  }
      getch();
      n++;
   }
   if(n==4)
     {

    printf("\n\n  You are not the Class Advisor.\n\t You can't log in.");

       //*****ERROR SOUND***
    for(int e=480;e>=50;e=e-10)
    {
    sound(e);
    delay(28);
    }
    nosound();
     }
   getch();

}
