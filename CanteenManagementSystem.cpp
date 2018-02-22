using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip>
#include<dos.h>
#include<stdlib.h>

main()
 {
  unsigned int sum,add,d,j,e,f,g,h,k,l,w,x,y,z;
  unsigned int ter=10,cfr=30,swr=110,mur=8,chr=110,frr=90,spr=199, fjr=20, wtr=10,
	       thr=499;
  int qutea=1000,atea=0,qucof=1000,acof=0,qusnd=110,asnd=0,qumun=1000,amun=0,qucho=500,acho=0,qufrc=400,afrc=0,qusup=100,asup=0,qufrj=1000,afrj=0,quwtr=1000,awtr=0,quthl=300,athl=0;
  unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
  char name[50],pu,c[20],a[15],b[15],ok;
  main:;
  cout<<"\n\n\n\t\t\t     NIT CANTEEN MANAGEMENT SYSTEM";
      cout<<"\n\n\nUSER INFORMATION";
      cout<<"\n\n NAME:";
      gets(name);
      again:;
      cout<<"\n\n1.MENU & PURCHASE";
      cout<<"\n2.DETAILS";
      cout<<"\n3.NEW CUSTOMER";
      cout<<"\n4.QUANTITY AVAILABLE";
      cout<<"\n5.EXIT";
      cout<<"\n\nENTER YOUR CHOICE:";
      cin>>d;
  switch(d)
  {
     case 1:
      cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nTEA\t\t\t\t\t\t\t\t10  ";
      cout<<"\nCOFFEE\t\t\t\t\t\t\t\t30";
      cout<<"\nSANDWICH\t\t\t\t\t\t\t110   ";
      cout<<"\nMUNCH\t\t\t\t\t\t\t\t8  ";
      cout<<"\nCHOWMIEN\t\t\t\t\t\t\t110   ";
      cout<<"\nFRIED RICE\t\t\t\t\t\t\t90  ";
      cout<<"\nSOUP\t\t\t\t\t\t\t\t119   ";
      cout<<"\nFRUIT JUICE\t\t\t\t\t\t\t20   ";
      cout<<"\nWATER\t\t\t\t\t\t\t\t10   ";
      cout<<"\nTHALI\t\t\t\t\t\t\t\t499   ";
      start:
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
	if(pu=='Y'||pu=='y')
	{switch(pu)
	 case 1:
	  cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  tea:;
	  cout<<"\nTEA(MAX 10): ";
	  cin>>m;

	  if(m>10)
	  {
	   cout<<"Enter Quantity Smaller than 10";
	  getch();
	  goto tea;
	  }
	  else
	  atea=qutea-m;
	  cof:;
	  cout<<"\nCOFFEE(MAX 10): ";
	  cin>>n;
	   if(n>10)
	  {
	   cout<<"Enter Quantity Smaller than 10";
	  getch();
	  goto cof;
	  }
	  else
	  acof=qucof-n;
	  snd:;
	  cout<<"\nSANDWICH(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto snd;
	  }
	  else
	  asnd=qusnd-o;
	  mun:;
	  cout<<"\nMUNCH(MAX 50): ";
	  cin>>p;

	  if(p>50)
	  {
	   cout<<"Enter Quantity Smaller then 50";
	  getch();
	  goto mun;
	  }
	  else
	  amun=qumun-p;
	  cho:;
	  cout<<"\nCHOWMIEN(MAX 5): ";
	  cin>>q;

	  if(q>5)
	  {
	   cout<<"Enter Quantity Smaller then 5";
	  getch();
	  goto cho;
	  }
	  else
	  acho=qucho-q;
	  frc:;
	  cout<<"\nFRIED RICE(MAX 5): ";
	  cin>>r;

	  if(r>5)
	  {
	   cout<<"Enter Quantity Smaller then 5";
	  getch();
	  goto frc;
	  }
	  else
	  afrc=qufrc-r;
	  sup:;
	  cout<<"\nSOUP(MAX 5): ";
	  cin>>s;

	  if(s>5)
	  {
	   cout<<"Enter Quantity Smaller then 5";
	  getch();

	  goto sup;
	  }
	  else
	  asup=qusup-s;
	  frj:;
	  cout<<"\nFRUIT JUICE(MAX 10): ";
	  cin>>t;

	  if(t>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto frj;
	  }
	  else
	  afrj=qufrj-t;
	  wtr:;
	  cout<<"\nWATER(MAX 20): ";
	  cin>>u;

	  if(u>20)
	  {
	   cout<<"Enter Quantity Smaller then 20";
	  getch();
	  goto wtr;
	  }
	  else
	  awtr=quwtr-u;
	  thl:;
	  cout<<"\nTHALI(MAX 4): ";
	  cin>>v;

	  if(v>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto thl;
	  }
	  else
	  athl=quthl-v;
	  cout<<"\n";
	  cout<<"\n\n\n\n\n\n\t\t\t\tAFFWA CANTEEN\n";
	  cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nNAME:";
	  cout<<name;
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	    cout<<"\nTEA"        <<setw(42)<<m<<setw(28)<<"Rs."<<m*ter;
	  if(n>0)
	    cout<<"\nCOFFEE"        <<setw(39)<<n<<setw(28)<<"Rs."<<n*cfr;
	  if(o>0)
	    cout<<"\nSANDWICH"     <<setw(37)<<o<<setw(28)<<"Rs."<<o*swr;
	  if(p>0)
	    cout<<"\nMUNCH"            <<setw(40)<<p<<setw(28)<<"Rs."<<p*mur;
	  if(q>0)
	    cout<<"\nCHOWMIEN"<<setw(37)<<q<<setw(28)<<"Rs."<<q*chr;
	  if(r>0)
	    cout<<"\nFRIED RICE" <<setw(35)<<r<<setw(28)<<"Rs."<<r*frr;
	  if(s>0)
	    cout<<"\nSOUP"      <<setw(41)<<s<<setw(28)<<"Rs."<<s*spr;
	  if(t>0)
	    cout<<"\nFRUIT JUICE"         <<setw(34)<<t<<setw(28)<<"Rs."<<t*fjr;
	  if(u>0)
	    cout<<"\nWATER"             <<setw(40)<<u<<setw(28)<<"Rs."<<u*wtr;
	  if(v>0)
	    cout<<"\nTHALI"     <<setw(40)<<v<<setw(28)<<"Rs."<<v*thr;
		e=m*ter;
		f=n*cfr;
		g=o*swr;
		h=p*mur;
		k=q*chr;
		l=r*frr;
		w=s*spr;
		x=t*fjr;
		y=u*wtr;
		z=v*thr;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(40)<<add<<setw(27)<<"Rs."<<sum;
	    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
	getch();

	goto again;
	}
	else
	{goto again;

	}


	case 2:
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n#CANTEEN WILL CLOSED ON TUESDAY";
	cout<<"\n\n#FOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#CANTEEN MANAGEMENT IS NOT RESPONSIBLE FOR MISPLACEMENT OF YOUR BELONGINGS";
	cout<<"\n\n#DO NOT BREAK ANY CANTEEN ITEMS";
	getch();

	goto again;
	case 3:
	goto main;
	case 4:
	   if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\nTEA"        <<setw(42)<<atea;
	  cout<<"\nCOFFEE"        <<setw(39)<<acof;
	  cout<<"\nSANDWICH"     <<setw(37)<<asnd;
	  cout<<"\nMUNCH"            <<setw(40)<<amun;
	  cout<<"\nCHOWMIEN"<<setw(37)<<acho;
	  cout<<"\nFRIED RICE" <<setw(35)<<afrc;
	  cout<<"\nSOUP"      <<setw(41)<<asup;
	  cout<<"\nFRUIT JUICE"         <<setw(34)<<afrj;
	  cout<<"\nWATER"             <<setw(40)<<awtr;
	  cout<<"\nTHALI"     <<setw(40)<<athl;
	  cout<<"\n*******************************************************************************";
	  getch();
	  goto again;
	  }
	  else
	  {{cout<<"\n\t\t\tItems Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\nTEA"        <<setw(42)<<qutea;
	  cout<<"\nCOFFEE"        <<setw(39)<<qucof;
	  cout<<"\nSANDWICH"     <<setw(37)<<qusnd;
	  cout<<"\nMUNCH"            <<setw(40)<<qumun;
	  cout<<"\nCHOWMIEN"<<setw(37)<<qucho;
	  cout<<"\nFRIED RICE" <<setw(35)<<qufrc;
	  cout<<"\nSOUP"      <<setw(41)<<qusup;
	  cout<<"\nFRUIT JUICE"         <<setw(34)<<qufrj;
	  cout<<"\nWATER"             <<setw(40)<<quwtr;
	  cout<<"\nTHALI"     <<setw(40)<<quthl;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  goto again;

	  }
	case 5:
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS\n\n\n\t\t\t\tPress any key to Exit.......";
	getch();
    exit(0);
	default:
		cout<<"Your choice is wrong";
	getch();
	goto again;
	 }
 }

}
