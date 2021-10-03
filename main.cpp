#include <iostream>
//Sallam Rady 's Project with C++
using namespace std;
struct seat{
int id;
bool t;//to know seat's state

} ;
int main()
{

    seat train[10][30];int c=1,x=1,n,carnum,seatnum,l=0,p=0;
    //c for initialing array  && n number for choice from user// l to refer to car number
    for(int  i=0;i<10;i++)
    {
        for(int j=1;j<=30;j++)
        {
            train[i][j].id=c; train[i][j].t=true;
            ++c;
        }
        c=1;//to make every seats from 1 to 30
    }

    //introduction

    cout<<"\t \t \t \t \t Welcome in The Train Tickets reservation system\n";
    cout<<"in this system we can present this services for you"<<endl;
    cout<<"1-Reserve a ticket."<<endl;
    cout<<"2-Cancel the reservation."<<endl;
    cout<<"3-Check whether a specific car has available seat or not."<<endl;
    cout<<"4-Check whether a specific seat is available or not."<<endl;
    cout<<"5-Get the number of the available seats in a specific car."<<endl;
    cout<<"6-Show all the seats status of a specific car."<<endl;
    cout<<"7-Exit."<<endl;


do{
    cout << "Enter your choice" << endl;
    cin>>n;
    if(n>7 || n<1)
    {
        cout<<"we can't understand your choice,Please Enter a number from 1 to 7 "<<endl;
    }
    else{
    switch(n)
    {
    case 1:
        {
            cout<<"Enter the car number and seat number you want to reserve"<<endl;
            cin>>carnum>>seatnum;
            if(carnum<0 || carnum>10)//to make sure the carnum from 1 to 10
            {
             cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
            }
            else if(seatnum>30 ||seatnum<0)//to make sure the seatnum from  to 30
            {
                cout<<"we can't understand your choice,Please Enter a number from 1 to 30 for seat "<<endl;
            }
            else{
            //to chick this seat is reserved or no?
            carnum-=1;
            if(train[carnum][seatnum].t==false)
            {
                cout<<"this is seat is relay reserved"<<endl;
            }
            else{
            train[carnum][seatnum].t=false;//to make the seat is reserved
            cout<<"your reservation is done well"<<endl;
            cout<<"Your ticket\n";
            cout<<"--------------------------------------------------------------------\n";
            cout<<"the car number is "<<carnum+1<<" the seat number is "<<seatnum<<endl;
            cout<<"the cost equal = 14.5 P.E"<<endl;
            cout<<"---------------------------------------------------------------------\n";
        }
            }
        }
        break;

  case 2:
  {
      cout<<"Enter the car number and seat number you want to Cancel the reservation"<<endl;
      cin>>carnum>>seatnum;
     if(carnum<0 || carnum>10)//to make sure the carnum from 1 to 10
     {
        cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
     }
       else if(seatnum>30 ||seatnum<0)//to make sure the seatnum from 1 to 30
       {
        cout<<"we can't understand your choice,Please Enter a number from 1 to 30 for seat "<<endl;
       }
     else{
      //to chick this seat is unreserved or no?
      carnum-=1;
      if(train[carnum][seatnum].t==true)
      {
          cout<<"this seat is relay unreserved"<<endl;
      }
      else{
        train[carnum][seatnum].t=true;
      cout<<" your request is done successfully  "<<endl;
      }
    }
  }
  break;

  case 3:
  {
      cout<<"Enter the number of car you want to chick if it has available seats or no?"<<endl;
      cin>>carnum;
     if(carnum<0 || carnum>10)
     {
        cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
     }
     else{
      carnum-=1;
      for(int s=1;s<=30;s++)
      {
          if(train[carnum][s].t==true)
          {
              ++p;
              break;
            //'P' that increase if there are a available seat.
          }

      }
      if(p>0)
        cout<<"Yes,there are found an available seats"<<endl;
      else
        cout<<"No,there aren't found an available seats"<<endl;
     }
  }
  break;
  case 4:
  {
      cout<<"Enter a number of car & seat you want to chick this seat is available or no?"<<endl;
      cin>>carnum>>seatnum;
       if(carnum<0 || carnum>10)
        {
            cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
        }
        else if(seatnum>30 ||seatnum<0)
        {
         cout<<"we can't understand your choice,Please Enter a number from 1 to 30 for seat "<<endl;
        }
     else{
      carnum-=1;
       //to chick this seat is reserved or no?
      if(train[carnum][seatnum].t==true)
      {
          cout<<"the seat is available"<<endl;
      }
      else{
          cout<<"the seat is not available"<<endl;
      }
    }
  }
  break;

  case 5:
  {
      cout<<"Enter the number of car you want to know the numbers of seats available on it"<<endl;
      cin>>carnum;
      if(carnum<0 || carnum>10)
            {
             cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
            }
       else{
       carnum-=1;
     int cont=0;
      for(int s=1;s<=30;s++)
      {
          if(train[carnum][s].t==true)
          {
            cont++;
            //cont to count the numbers of seats are available
          }
      }
      cout<<"there is : "<<cont<<" available\n";
       }
  }
  break;
  case  6:
   {
     cout<<"Enter a number of car you want to chick it"<<endl;
     cin>>carnum;
     if(carnum<0 || carnum>10)
            {
             cout<<"we can't understand your choice,Please Enter a number from 1 to 10 for car "<<endl;
            }
      else{
      carnum-=1;
      for(int s=1;s<=30;s++)
      {
          if(train[carnum][s].t==true)
          {
              cout<<" the seat  "<<train[carnum][s].id<<"  is available"<<endl;
          }
          else
          {
              cout<<" the seat  "<<train[carnum][s].id<<"  is not available"<<endl;
          }
      }
      }
   }
break;

case 7:
{
    x=0;
}
break;
    }

}
if(x!=0)
{
    cout<<"\n ";
    cout<<"==============================================================================================="<<endl;
    cout<<"\t \t \t \t \t \t  The Options \n ";
    cout<<"in this system we can present this services for you"<<endl;
    cout<<"1-Reserve a ticket."<<endl;
    cout<<"2-Cancel the reservation."<<endl;
    cout<<"3-Check whether a specific car has available seat or not."<<endl;
    cout<<"4-Check whether a specific seat is available or not."<<endl;
    cout<<"5-Get the number of the available seats in a specific car."<<endl;
    cout<<"6-Show all the seats status of a specific car."<<endl;
    cout<<"7-Exit."<<endl;
}

}while(x);
cout<<"Thank you for your use "<<endl;
    return 0;
}
