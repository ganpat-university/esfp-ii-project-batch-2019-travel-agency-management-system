#include"iostream"
#include"fstream"
using namespace std;
class TAMS
{
	string name,mob;
	string fname,fadd,ffr,fto,fmob,fclass,fconf;					//Flights
	string tname,tadd,tfr,tto,tmob,tclass,tconf,ttype;				//Trains
	string hname,hadd,htype,hconf;							//Hotels
	string cname,cpick,cdrop,ctype,cconf;						//Cabs
	int fnop,tnop,cnop,famt,tamt,hamt,camt,opt,hday,hroom;
	char m;
	public:
	void entry();
	void menu();
	void Flights();
	void Trains();
	void Hotels();
	void Cabs();
	void Print();
};
void TAMS::Print()
{
		cout<<"\nName : "<<name;
		cout<<"\nMobile No. : "<<mob;
		exit(0);
}
///////////////////////////////////////////////////////////////////////////
void TAMS::entry()								//entry
	{
		cout<<"\nEnter Your Name : ";
		cin>>ws;
		getline(cin,name);
		cout<<"\nEnter Your Mobile No. : ";
		cin>>ws;
		getline(cin,mob);
	}
//////////////////////////////////////////////////////////////////////////////
void TAMS::menu()								//menu
	{
	cout<<endl;
	cout<<"\n Welcome To Travel Agency Management System \n"<<endl;
	cout<<"\n1. Flights";
	cout<<"\n2. Trains";
	cout<<"\n3. Hotels";
	cout<<"\n4. Cabs";
	cout<<endl;
	cout<<"\n5. Display Entries";
	cout<<"\n6. Exit";
	cout<<endl;
	cout<<endl;
	cout<<"Enter Your Choice: ";
	cin>>opt;
		
	switch(opt){
		case 1: Flights();
		break;
		case 2: Trains();
		break;
		case 3: Hotels();
		break;
		case 4: Cabs();
		break;
		case 5: Print();
		break;
		case 6: exit(0);
		break;
	    }
	
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////
void TAMS::Flights() 									//Flights
{
	system("clear");
	cout<<endl;
	cout<<"\nName:";
	cin >> ws;
	getline(cin,fname);
	cout<<"\nAddress:";
	cin >> ws;
	getline(cin,fadd);
	cout<<"\nMobile No.:";
	cin>>ws;
 	getline(cin,fmob);
	cout<<"\nFrom:";
	cin >> ws;
	getline(cin,ffr);
	cout<<"\nTo:";
	getline(cin,fto);
	cout<<"\nClass (FirstClass,EconomyClass,BusinessClass):";
	getline(cin,fclass);
	cout<<"\nNo. Of Persons:";
	cin>>fnop;
	cout<<endl;
a:	cout<<"Are You Sure? Do You want to proceed for payment.";
	cin >> ws;
	getline(cin,fconf);
		if(fconf=="yes")
		{
			if(fclass=="FirstClass")
			{
				famt=2020;
			}
			if(fclass=="EconomyClass")
			{
				famt=4020;
			}
			if(fclass=="BusinessClass")
			{
				famt=10020;
			}
			cout<<endl;
			cout<<"Amount To Be Paid: "<<fnop * famt;
			
			cout<<"\nEnter 'm' to SHOW MENU or 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}
		}
		if(fconf=="no"){
			cout<<"\nEnter 'm' to SHOW MENU or 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}
		}
		else{
			cout<<"\nPlease Enter A valid input.\n"; 
			goto a;
		}
}
///////////////////////////////////////////////////////////////////////////////////////////
void TAMS::Trains()										//Trains
{
	system("clear");
	cout<<endl;
	cout<<"\nName: ";
	cin>>ws;
	getline(cin,tname);
	cout<<"\nAddress: ";
	cin>>ws;
	getline(cin,tadd);
	cout<<"\nMobile No.: ";
	cin>>ws;
	getline(cin,tmob);
	cout<<"\nFrom: ";
	cin>>ws;
	getline(cin,tfr);
	cout<<"\nTo: ";
	cin>>ws;
	getline(cin,tto);
	cout<<"\nClass (Sleeper, AC-II, FirstClass): ";
	cin>>ws;
	getline(cin,tclass);
	cout<<"\nTrain Type (MailExp,SuperFast,HighPriority): ";
	cin>>ws;
	getline(cin,ttype);
	cout<<"\nNo. Of Person: ";
	cin>>tnop;
	cout<<endl;
b:	cout<<"Are You Sure? Do You want to proceed for payment."<<endl;
	cin >> ws;
	getline(cin,tconf);
		if(tconf=="yes")
		{
			if(tclass=="Sleeper")
			{
				tamt=480;
			}
			if(tclass=="AC-II")
			{
				tamt=1000;
			}
			if(tclass=="FirstClass")
			{
				tamt=2000;
			}
			if(ttype=="MailExp")
			{
				tamt+=500;
			}
			if(ttype=="SuperFast")
			{
				tamt+=1000;
			}
			if(ttype=="HighPriority")
			{
				tamt+=2000;
			}
			cout<<endl;
			cout<<"Amount To Be Paid: "<<tnop * tamt;
			
			cout<<"\nEnter 'm' to SHOW MENU & 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}			
		}
		if(tconf=="no"){
			cout<<"\nEnter 'm' to SHOW MENU or 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}
		}
		else{
			cout<<"\nPlease Enter A valid input.\n"; 
			goto b;
		}
}
///////////////////////////////////////////////////////////////////////////////////////////////
void TAMS::Hotels()										//Hotels
{
	system("clear");
	cout<<"\nName: ";
	cin>>ws;
	getline(cin,hname);
	cout<<"\nAddress: ";
	cin>>ws;
	getline(cin,hadd);
	cout<<"\nRoom Type (Delux,Non-Delux): ";
	cin>>ws;
	getline(cin,htype);
	cout<<"\nNo. Of Days Want To Stay: ";
	cin>>hday;
	cout<<"\nNo. Of Rooms: ";
	cin>>hroom;
	cout<<endl;
c:	cout<<"Are You Sure? Do You want to proceed for payment."<<endl;
	cin >> ws;
	getline(cin,hconf);
		if(hconf=="yes")
		{
			if(htype=="Delux")
			{
				hamt=2000;
			}
			if(htype=="Non-Delux")
			{
				hamt=1500;
			}
			cout<<endl;
			cout<<"Amount To Be Paid: "<< hroom * hday * hamt;
			
			cout<<"\nEnter 'm' to SHOW MENU & 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}			
		}
		if(hconf=="no"){
			cout<<"\nEnter 'm' to SHOW MENU or 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}
		}
		else{
			cout<<"\nPlease Enter A valid input.\n"; 
			goto c;
		}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
void TAMS::Cabs()												//Cabs
{
	system("clear");
	cout<<"\nHello Sir/Ma'am .... Where to?";
	
	cout<<"\nMobile No. ";
	cin>>ws;
	getline(cin,cname);
	cout<<"\nPick Up point: ";
	cin>>ws;
	getline(cin,cpick);
	cout<<"\nDestination: ";
	cin>>ws;
	getline(cin,cdrop);
	cout<<"\nType (Pool,Micro,PrimeSedan): ";
	cin>>ws;
	getline(cin,ctype);
	cout<<"\nNo. Of Persons: ";
	cin>>cnop;
	cout<<endl;
d:	cout<<"Are You Sure? Do You want to proceed for payment."<<endl;
	cin >> ws;
	getline(cin,cconf);
		if(cconf=="yes")
		{
			if(ctype=="Pool")
			{
				camt=100;
			}
			if(ctype=="Micro")
			{
				camt=150;
			}
			if(ctype=="PrimeSedan")
			{
				camt=200;
			}
			cout<<endl;
			cout<<"Amount To Be Paid: "<<  cnop * camt;
			
			cout<<"\nEnter 'm' to SHOW MENU & 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}			
		}
		if(cconf=="no"){
			cout<<"\nEnter 'm' to SHOW MENU or 'e' to make NEW ENTRY.";
			cin>>m;
			if(m=='m')
			{
			  system("clear");
			  menu();
			}
			if(m=='e')
			{
			  system("clear");
			  entry();
			  menu();
			}
		}
		else{
			cout<<"\nPlease Enter A valid input.\n"; 
			goto d;
		}
}
////////////////////////////////////////////////////////////////////////////////////////////////////
/*
//writing the record
void TAMS::write_rec()
{
ofstream outfile;
outfile.open("record.tams", ios::binary|ios::app);
get();
outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
outfile.close();
}
//Reading the record
void TAMS::read_rec()
{
ifstream infile;
infile.open("record.tams", ios::binary);
if(!infile)
{
cout<<"Error in Opening! File Not Found!!"<<endl;
return;
}
cout<<"\n****Data from file****"<<endl;
while(!infile.eof())
{
if(infile.read(reinterpret_cast<char*>(this), sizeof(*this)))
{
Print();
}
}
infile.close();
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	TAMS obj;
	obj.entry();
	obj.menu();
	//obj.write_rec();
	//obj.read_rec();
	return 0;
}

