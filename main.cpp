#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<graphics.h>
int sc=0;
void score()
{
ifstream f("rep.txt");
ifstream g("ans.txt");
char a[50],b[50];
for(int i=1;i<=5;i++)
{
f.getline(a,50,'\n');
g.getline(b,50,'\n');
if(strcmpi(a,b)==0)
sc+=10;
}
f.close();
g.close();
}
void kids()
{
ofstream f("rep.txt");
ofstream g("ans.txt");
char reply[50];
randomize();
int ch;
int k1=1,k2=1,k3=1,k4=1,k5=1,k6=1,k7=1,k8=1;
for(int i=1;i<=5;i++)
{
temp: ch=random(8)+1;
switch(ch)
{
case 1:
if(k1==1)
{
clrscr();
textbackground(4);
textcolor(11);
cout<<"Question no. 1"<<endl;
cout<<"I have four legs but cannot walk. I hold food but I can't eat.What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Table\n";
k1=0;
}
else
goto temp;
break;
case 2:
if(k2==1)
{
clrscr();
textbackground(5);
textcolor(10);
cout<<"Question no. 2"<<endl;
cout<<"You can make the number one disappear by adding one letter to it. Which is that letter?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"G\n";
k2=0;
}
else
goto temp;
break;
case 3:
if(k3==1)
{
clrscr();
textbackground(1);
textcolor(15);
cout<<"Question no. 3"<<endl;
cout<<"I am black and blind but can still see. When i sleep my head is down but over the ground. What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Bat\n";
k3=0;
}
else
goto temp;
break;
case 4:
if(k4==1)
{
clrscr();
textbackground(6);
textcolor(9);
cout<<"Question no. 4"<<endl;
cout<<"I am always pronounced wrong,even by teachers and parents. What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Wrong\n";
k4=0;
}
else
goto temp;
break;
case 5:
if(k5==1)
{
clrscr();
textbackground(9);
textcolor(6);
cout<<"Question no. 5"<<endl;
cout<<"I am made of water. But if you put me into water I disapppear. What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Ice\n";
k5=0;
}
else
goto temp;
break;
case 6:
if(k6==1)
{
clrscr();
textbackground(7);
textcolor(8);
cout<<"Question no. 6"<<endl;
cout<<"How much dirt is there in a hole 1 foot deep,1 foot long and 1 foot wide?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"There is no dirt\n";
k6=0;
}
else
goto temp;
break;
case 7:
if(k7==1)
{
clrscr();
textbackground(8);
textcolor(7);
cout<<"Question no. 7"<<endl;
cout<<"I don't have wings, but I can fly.\nI dont have eyes but i can cry!\nI am miles away but you cannot see me.\nWhat am I? "<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Cloud\n";
k7=0;
}
else
goto temp;
break;
case 8:
if(k8==1)
{
clrscr();
textbackground(6);
textcolor(5);
cout<<"Question no. 8"<<endl;
cout<<"It has a long neck and a name of a bird.\nIt feeds on cargo of ships and is not alive.\nWhat is it?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Crane\n";
k8=0;
}
else
goto temp;
break;
}
}
f.close();
g.close();
score();
}
void middle()
{
ofstream f("rep.txt");
ofstream g("ans.txt");
char reply[50];
randomize();
int ch;
int m1=1,m2=1,m3=1,m4=1,m5=1,m6=1,m7=1,m8=1;
for(int i=1;i<=5;i++)
{
temp: ch=random(8)+1;
switch(ch)
{
case 1:
if(m1==1)
{          clrscr();
textbackground(1);
textcolor(15);
cout<<"Question no. 1"<<endl;
cout<<"An old man, who was born in the year 1948, quite recently celebrated his 17th birthday. What is his date of birth(dd/mm/yyyy)?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"29/02/1948\n";
m1=0;
}
else
goto temp;
break;
case 2:
if(m2==1)
{          clrscr();
textbackground(2);
textcolor(14);
cout<<"Question no. 2"<<endl;
cout<<"A snail is at the bottom of a 20 m wall. Every hour, it slides up by 3m and slides down by 2m. How many hours does it take to reach the top?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"17\n";
m2=0;
}
else
goto temp;
break;
case 3:
if(m3==1)
{
clrscr();
textbackground(3);
textcolor(13);
cout<<"Question no. 3"<<endl;
cout<<"The man who built it,sells it.\nThe man who bought it doesn't need it.\nThe man who is using it is unaware of it. What is it ?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Coffin\n";
m3=0;
}
else
goto temp;
break;
case 4:
if(m4==1)
{
clrscr();
textbackground(4);
textcolor(12);
cout<<"Question no. 4"<<endl;
cout<<"What room do ghosts avoid?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Living Room\n";
m4=0;
}
else
goto temp;
break;
case 5:
if(m5==1)
{
clrscr();
textbackground(5);
textcolor(11);
cout<<"Question no. 5"<<endl;
cout<<"What belongs to you,but other people use it more than you?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Your name\n";
m5=0;
}
else
goto temp;
break;
case 6:
if(m6==1)
{
clrscr();
textbackground(6);
textcolor(10);
cout<<"Question no. 6"<<endl;
cout<<"What begins with a T, ends with a T and has T in it?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Teapot\n";
m6=0;
}
else
goto temp;
break;
case 7:
if(m7==1)
{
clrscr();
textbackground(7);
textcolor(9);
cout<<"Question no. 7"<<endl;
cout<<"What starts with 'P', ends with 'E' and has millions of letters in it? "<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Post Office\n";
m7=0;
}
else
goto temp;
break;
case 8:
if(m8==1)
{
clrscr();
textbackground(1);
textcolor(13);
cout<<"Question no. 8"<<endl;
cout<<"What begins when things end and ends all things that begin?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Death\n";
m8=0;
}
else
goto temp;
break;
}
}
f.close();
g.close();
score();
}
void adults()
{
ofstream f("rep.txt");
ofstream g("ans.txt");
char reply[50];
randomize();
int ch;
int a1=1,a2=1,a3=1,a4=1,a5=1,a6=1,a7=1,a8=1;
for(int i=1;i<=5;i++)
{
temp: ch=random(8)+1;
switch(ch)
{
case 1:
if(a1==1)
{             clrscr();
textbackground(1);
textcolor(15);
cout<<"Question no. 1"<<endl;
cout<<"I speak without a mouth and hear without ears.\n I have no body, but i come alive with wind.\n What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Echo\n";
a1=0;
}
else
goto temp;
break;
case 2:
if(a2==1)
{             clrscr();
textbackground(2);
textcolor(14);
cout<<"Question no. 2"<<endl;
cout<<"You measure my life in hours and I serve you by expiring\n. I'm quick when I'm thin and slow when I'm fat\n. The wind is my enemy.\n What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"28\n";
a2=0;
}
else
goto temp;
break;
case 3:
if(a3==1)
{             clrscr();
textbackground(3);
textcolor(13);
cout<<"Question no. 3"<<endl;
cout<<"I have cities,but no houses.\n I have mountains,but no trees.\n I have water, but no fish \n What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Map\n";
a3=0;
}
else
goto temp;
break;
case 4:
if(a4==1)
{           clrscr();
textbackground(4);
textcolor(12);
cout<<"Question no. 4"<<endl;
cout<<"The first two letters of this word signify a male,the first three a female and the first four a great person,while the entire word signifies a great woman. What is the word?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Herione\n";
a4=0;
}
else
goto temp;
break;
case 5:
if(a5==1)
{          clrscr();
textbackground(5);
textcolor(11);
cout<<"Question no. 5"<<endl;
cout<<"What english word does have three consecutive double letters?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Table\n";
a5=0;
}
else
goto temp;
break;
case 6:
if(a6==1)
{         clrscr();
textbackground(6);
textcolor(10);
cout<<"Question no. 6"<<endl;
cout<<"I came from a mine and get surrounded by wood always. What am I?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Pencil lead\n";
}
else
goto temp;
break;
case 7:
if(a7==1)
{     clrscr();
textbackground(7);
textcolor(9);
cout<<"Question no. 7"<<endl;
cout<<"I have keys but no locks and space, but no rooms.\n You can enter but can't go outside. \n What am I ? "<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Keyboard\n";
a7=0;
}
else
goto temp;
break;
case 8:
if(a8==1)
{           clrscr();
textbackground(8);
textcolor(8);
cout<<"Question no. 8"<<endl;
cout<<"A is the father of B.\nB is the brother of C.\nC is the father of D.\nSo how is D related to A ?"<<endl;
gets(reply);
cout<<endl;
f<<reply<<'\n';
g<<"Aunt\n";
a8=0;
}
else
goto temp;
break;
}
}
f.close();
g.close();
score();
}
void main()
{
textbackground(4);
textcolor(10);
clrscr();
char name[50];
int age;
int p,y;
cout<<"Welcome to the IQ TEST."<<endl;
cout<<"The one-stop destination to discover your true potential."<<endl;
cout<<"Let us start off with some details about you"<<endl;
cout<<"Name:";
gets(name);
cout<<"Age:";
cin>>age;
if(age>=8 && age<=12)
p=1;
else if(age>12 && age<18)
p=2;
else if(age>18)
p=3;
else
cout<<"Looks like you are too young now for this test. Hope to see you again next time.";
cout<<"Lets begin "<<name<<"!"<<endl;
cout<<"Instructions: 10 questions will be displayed to you in a sequence to which you have to fill in the appropriate answer.\tThe final result will be shown separately in the end."<<endl;
cout<<"All the best!  "<<endl<<"*******************"<<endl<<"  Enter y to START!!";
cin>>y;
clrscr();
switch(p)
{
case 1:
kids();
break;
case 2:
middle();
break;
case 3:
adults();
break;
}
clrscr();
textbackground(4);
textcolor(10);
cout<<"Name  :"<<name<<endl;
cout<<"Age   :"<<age<<endl;
cout<<"Score :"<<sc<<endl;
cout<<"IQ level: ";
if(sc==50)
{
cout<<150<<endl;
cout<<"You have done an amazing job "<<name<<endl<<"You are among the top 1% of the world. \nPlease uncap your potential to the maximum extent."<<endl;
cout<<"You have the power to be at the 'TOP'"<<endl<<"Expected National Ranking:1-200";
}
else if(sc==40)
{
cout<<120<<endl;
cout<<"Well done "<<name<<endl<<"You stand among the top 10% of the world."<<endl<<"Strive to be greater."<<endl;
cout<<"Expected National Ranking= 200-1000";
}
else if(sc==30)
{
cout<<100<<endl;
cout<<"Decent job "<<name<<"You have been keeping well with the competition but have to work harder to achieve your full potential."<<endl;
cout<<"Expected National Ranking=1000-20000";
}
else
{
textbackground(10);
textcolor(2);
cout<<80<<endl;
cout<<"Nice try "<<name<<endl<<"This is not the end of line for you\n You need to work a lot harder now \nHave confidence and strive for success."<<endl;
cout<<"You have a long road ahead of you and great room to grow. It is hard to  expect a rank for you from now. Please take the quiz after more preparation.";
}
getch();
}
