#include  <iostream>
using namespace std;

int main()
{
	 int year,month,day;
	  
       cout<<"please input year month day£º";
      cin>>year;
	  cin>>month;
	  cin>>day;
	   
      int y=2012,m=1,d=22;
      int id=0;
      int a[]={31,28,31,30,31,30,31,31,30,31,30,31}   ;   
      while(y<=year)
      {
      	d++;
      	id++;
      	if(d>a[m-1])
      	 {
      	 	d=1;
      	 	m++;
      	 }
      	 
      	 if(month>12)
      	 {
      	 	year++;
      	 	month=1;
      	 	d=1;
      	 }
      	 
      	 if(y==year&&m==month&&d==day)
      	  break;
      	
      }
      
      int yy;
      yy=(year-y)/4;
    
      if(month>2)
      id=id+yy+1;
      
      
      int wd;
      wd=id%7;
      
      switch(wd)
      {
      	case 0 :cout<<"sunday";break; 
      	case 1 :cout<<"monday";break;
        case 2:cout<<"tuesday";break;
        case 3:cout<<"wensday";break;
        case 4:cout<<"thursday";break;
        case 5:cout<<"friday";break;
        case 6:cout<<"saturday";break;
        
      }
} 
