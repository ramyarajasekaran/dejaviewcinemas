#include <iostream.h>
#include<fstream.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
struct tick
{
    char *MOVIENAME,*SHOWTIME,snackcode[5][30],*VENUE,*TICKETTYPE;
    int no_of_tickets,price,snackprice[10],vat,qty[5];
};
fstream f;
void ticket(tick e)
{
 int n;
 f.open("ticket.dat",ios::in||ios::app||ios::binary);

 cout<<"Select movie: ";cin>>n;
 switch(n)
 {
  case '1': strcpy(e.MOVIENAME,"Inside Out");
	    break;
  case '2': strcpy(e.MOVIENAME,"Baahubali");
	    break;
  case '3': strcpy(e.MOVIENAME,"X-Men:First Class");
	    break;
  case '4': strcpy(e.MOVIENAME,"Bangalore Days");
	    break;
  case '5': strcpy(e.MOVIENAME,"Narasimha");
	    break;
   case '6': strcpy(e.MOVIENAME,"Sura");
	    break;
 }

clrscr();
cout<<"\nSelect showtime: ";
cout<<"\n\t1)10:00 ";
cout<<"\t2)12:30 ";
cout<<"\n\t3)15:10 ";
cout<<"\t4)18:00 ";
cout<<"\n5)22:00 ";
cout<<"\t6)23:30";
cin>>n;
cout<<"\nChoose showtime: ";

switch(n)
{
case '1': strcpy(e.SHOWTIME,"10:00");
	  break;
case '2':strcpy(e.SHOWTIME,"12:30");
	  break;
case '3':strcpy(e.SHOWTIME,"15:10");
	  break;
case '4':strcpy(e.SHOWTIME,"18:00");
	  break;
case '5':strcpy(e.SHOWTIME,"22:00");
	  break;
case '6':strcpy(e.SHOWTIME,"23:30");
	  break;
}
cout<<"\nEnter number of tickets: ";cin>>e.no_of_tickets;
cout<<"\n\n\tChoose ticket type: "; cin>>e.TICKETTYPE;
cout<<"\n1)Executive\t2)Sofa";
cout<<"\n3)Elite\t4)Platform";
cin>>n;
switch(n)
{
case '1':
	 {strcpy(e.TICKETTYPE,"Executive");
	  e.price=200;
	  break;    }
case '2':{
	  strcpy(e.TICKETTYPE,"Sofa");
	  e.price=150;
	  break;    }
case '3':{
	 strcpy(e.TICKETTYPE,"Elite");
	  e.price=100;
	  break; }
case '4':{strcpy(e.TICKETTYPE,"Platform");
	  e.price=10;
	  break;}
}
f.write((char*)&e,sizeof(e));
f.close();
}
void address(tick e)
{
 f.open("ticket.dat",ios::in||ios::out||ios::binary);
 f.read((char*)&e,sizeof(e));
 int n;
 cout<<"\n\t\tLOCATION";
 cout<<"\n\t\t--------";
 cout<<"\n\t1.2nd Floor, Phoenix Market City, No.142, Velachery Main Road, Velachery, Chennai - 600 042";
 cout<<"\n\t2.RUN-3rd Floor, Express Avenue, Whites Road, Royapettah, Chennai - 600 014";
 cout<<"\n\t3.4th Floor, Brookefields Mall, Krishnaswamy Road, Coimbatore - 641 001";
 cout<<"\n\t4.2nd Floor, Spectrum Mall, Paper Mills Road, Perambur, Chennai - 600 011";
 cout<<"\n\t5.# 60, Lattice Bridge Road (Dr.Muthu Lakshmi Road) Thiruvanmiyur, Chennai - 600 041";
 cout<<"\n\tChoose your desired location: ";
 cin>>n;
switch(n)
{
case '1':
	 {strcpy(e.VENUE,"V01");
	  break;    }
case '2':{
	  strcpy(e.VENUE,"V02");
	  break;    }
case '3':{
	 strcpy(e.VENUE,"V03");
	  break; }
case '4':{strcpy(e.VENUE,"V04");
	  break;}
case '5':{strcpy(e.VENUE,"V05");
	  break;}
}
f.write((char*)&e,sizeof(e));
f.close();
}
int noofitem=0;
void food(tick e)
 {
   f.open("ticket.dat",ios::in||ios::out,ios::binary);
   f.read((char*)&e,sizeof(e));
   int n;
   e.snackprice[noofitem]=0;char ch;
   do
   {
   clrscr();
   cout<<"MENU: ";
   cout<<"\n1.COMBO 1:     Burger,Pepsi and Fries ";
   cout<<"\n2.COMBO 2:     Popcorn, Pepsi";
   cout<<"\n3.COMBO 3:     Samosa, Coffee";
   cout<<"\n4.COMBO 4:     Brownie,Ice Cream,Milkshake";
   cout<<"\n5.COMBO 5:     Pizza, Pepsi";
   cout<<"\n6.Fries ";
   cout<<"\n7.Pepsi";
   cout<<"\n8.Popcorn";
   cout<<"\n9.Coffee";
   cout<<"\n10.Brownie";

   cout<<"\n\t Enter choice :";
   cin>>n;

      switch(n)
      {
      case 1: strcpy(e.snackcode[noofitem],"C01");
	       e.snackprice[noofitem]+=99;
	       break;
      case 2: strcpy(e.snackcode[noofitem],"C02");
	       e.snackprice[noofitem]+=300;
	       break;
      case 3: strcpy(e.snackcode[noofitem],"C03");
	       e.snackprice[noofitem]+=449;
	       break;
      case 4: strcpy(e.snackcode[noofitem],"C04");
	       e.snackprice[noofitem]+=399;
	       break;
      case 5: strcpy(e.snackcode[noofitem],"C05");
	       e.snackprice[noofitem]+=349;
	       break;
      case 6: strcpy(e.snackcode[noofitem],"I6");
	       e.snackprice[noofitem]+=59;
	       break;
      case 7: strcpy(e.snackcode[noofitem],"I7");
	       e.snackprice[noofitem]+=59;
	       break;
      case 8: strcpy(e.snackcode[noofitem],"I8");
	       e.snackprice[noofitem]+=49;
	       break;
      case 9: strcpy(e.snackcode[noofitem],"I9");
	       e.snackprice[noofitem]+=99;
	       break;
      case 10: strcpy(e.snackcode[noofitem],"I10");
	       e.snackprice[noofitem]+=79;
	       break;

      default: cout<<"INVALID";
	       break;

    }

      cout<<"\n\t Quantity: ";
     cin>>e.qty[noofitem];

     e.snackprice[noofitem]=e.snackprice[noofitem]*e.qty[noofitem];
     ++noofitem;
     cout<<"\n\tWould you like to continue?:";cin>>ch;
     }while(ch=='y');
f.write((char*)&e,sizeof(e));
f.close();
}

void bill(tick e)
{
    clrscr();
    f.open("ticket.dat",ios::in||ios::out||ios::binary);
    f.read((char*)&e,sizeof(e));
    int snacksum=0;
    for(int i=0;i<noofitem;++i)
    snacksum+=e.snackprice[i];
    int a,sum=(e.price*e.no_of_tickets)+snacksum+100;
    int vat=0.15*sum;sum+=vat;

    cout<<"\t\t\t**~~DEJA VIEW CINEMAS~~**";
    cout<<"\n\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout<<"\n\n\t\t\t\t  BILL";
    cout<<"\n\t\t\t\t  ****";
    cout<<"\n\t\t    MOVIE NAME: "<<e.MOVIENAME;
    cout<<"\n\t\t    SHOWTIME: "<<e.SHOWTIME;
    cout<<"\n\t\t    VENUE: "<<e.VENUE;
    cout<<"\n\t\t    TICKET TYPE: "<<e.TICKETTYPE;
    cout<<"\n\t\t NO. OF TICKETS: "<<e.no_of_tickets;
    cout<<"  PRICE: "<<e.price*e.no_of_tickets;
   /* cout<<"\n\t\t SNACKS: "<<e.snackcode;
    cout<<" QUANTITY: "<<e.qty; */
    cout<<" PRICE: "<<snacksum;
    cout<<"\n\t\t    VAT(15%): "<<vat;
    cout<<"\n\t\t     ONLINE BOOKING CHARGES: "<<"100";
    cout<<"\n\t\tTOTAL AMOUNT: "<<sum;
    cout<<"\n\n\t\t PAYMENT METHOD:(VISA[1]/MASTERCARD[2]/PAYPAL[3]/SBI[4]) ";
    cout<<"CHOICE: ";cin>>a;
    switch(a)
    {
    case 1:{
	    int Vpin,Vcardno;
	    cout<<"\n\t\t CARD NO.:  ";cin>>Vcardno;
	    cout<<"\n\t\t PIN: ";cin>>Vpin;
	    for(int i=0;i<100;++i)
	      ;
	     cout<<"\n\t\t PAYMENT SUCCESSFUL!";
	     }

    case 2:{

	    int Mpin,Mcardno;
	    cout<<"\n\t\t CARD NO.:  ";cin>>Mcardno;
	    cout<<"\n\t\t PIN: ";cin>>Mpin;
	    for(int i=0;i<100;++i)
	      ;
	     cout<<"\n\t\t PAYMENT SUCCESSFUL!";
	   }
    case 3:{
	     int Ppin,PIDno;
	    cout<<"\n\t\t ID:  ";cin>>PIDno;
	    cout<<"\n\t\t PIN: ";cin>>Ppin;
	    for(int i=0;i<100;++i);
	     cout<<"\n\t\t PAYMENT SUCCESSFUL!";
	   }
    case 4:{
	     int SBI_ID;
	     cout<<"\n\t\t Enter SBI ID: ";cin>>SBI_ID;
	     for(int i=0;i<100;++i);
	     cout<<"\n\t\t PAYMENT SUCCESSFUL!";
	  }
default:cout<<"\n\t\t INVALID";
    }
   cout<<"\n\tWOULD YOU LIKE TO PRINT YOUR TICKET?(Y/N):";
}
void main()
{
 tick e;
 address(e);
 food(e);
 bill(e);
}