#include <iostream>
#include <fstream>
#include <string>




using namespace std;

struct Studenttype{int Id;string name;int age; float score; char grade; string gender;};

int main(int argc, char **argv)
{
    int i,j,a=i, Totalscore, Totalage, Malecount =0, Femalecount=0;
    double avgage,avgscore;
   Studenttype student[5];
   for(int i=0; i<5; i++)
   {
       cout<<"STUDENT: " <<a<<endl<<endl;
       a++;
       cout<<" Id Number: "; cin>>student[i].Id;
       cout<<" NAME: ";  cin>>student[i].name;
       cout<<" AGE:"; cin>>student[i].age;
       cout<<" GENDER: "; cin>>student[i].gender;

       if(student[i].gender==" MALE ")
       {
           Malecount++;
       }
       else
            Femalecount++;


   cout<<" SCORE: "; cin>>student[i].score;
    if(student[i].score>=80)
        student[i].grade='A';
    else if (student[i].score>=70)
        student[i].grade='B';
    else if (student[i].score>=60)
             student[i].grade='C';
    else if (student[i].score>=50)
             student[i].grade='D';
    else if (student[i].score>=40)
        student[i].grade='E';
    else if (student[i].score<40)
        student[i].grade='F';

    cout<<" GRADE: "<<student[i].grade;
    cout<<endl<<endl<<endl;
  }


  Totalage = student[0].age +  student[1].age + student[2].age + student[3].age + student[4].age;
  Totalscore = student[0].score + student[1].score + student[2].score + student[3].score + student[4].score;
  avgage=Totalage/5.0;
  avgscore=Totalscore/5.0;

  ofstream outf( "student.txt" );

  outf <<"   ID Number      "<<"    Name     "<<"     Age     "<<"    Gender     "<<"    Score    "<<"    Grade     "<<endl<<endl<<endl;
  outf <<"   ********************************************************************************************************"<<endl<<endl<<endl;
        for(int j=0; j<5; j++)
            outf<< j <<" . "<<"  "<<"  "<<student[j].Id<<"     "<<student[j].name<<"     "<<student[j].age<<"      "<<student[j].gender<<"      "<<student[j].score<<"      "<<student[j].grade<<endl<<endl<<endl;

   outf <<"   ********************************************************************************************************"<<endl<<endl<<endl;

   outf<<"Number of males :"<< Malecount <<endl;
   outf<<"Number of females :"<< Femalecount <<endl;
    outf<<"Average age :"<< avgage<<endl;
    outf<<"Average score :"<<avgscore<<endl;
    return 0;
}
