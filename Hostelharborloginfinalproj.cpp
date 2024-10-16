#include<iostream>
using namespace std;

class Hostel{
	
	public :
	
	    int number,pnum,total;
        string ssc[5],hssc[5],hb[5],re[5],oc[5],sp[5];
		string ntr[5],ftr[5],ptr[5],Ptr[5],ctr[5],uni[5],dep[5],gender[5];
		
								
		void StartMenu();
		void AddMembers();
		void ViewHostelDetails();
		void ViewEducationalBackground();
	    void ViewGeneralInformation();
	    void ViewWholeHostelDetails();
		
};

void Hostel::StartMenu(){

	int i;
while (i<=4 ){
 i++;
 ptr[0]="Jilbaz";Ptr[0]="Khan";ftr[0]="Mirbaz khan";gender[0]="Male";ssc[0]="90 %";hssc[0]="85 %";uni[0]="UMt";dep[0]="CS";
 hb[0]="Movie watching";re[0]="Islam";oc[0]="student";sp[0]="MMA Fighter";
 ptr[1]="Ibad";Ptr[1]="Ullah";ftr[1]="Javed khan";gender[1]="Male";ssc[1]="92 %";hssc[1]="91 %";uni[1]="UMT";dep[1]="CS";
 hb[1]="Books reading , jogging ";re[1]="Islam";oc[1]="student";sp[1]="Hockey";
 ptr[2]="Hafiz";Ptr[2]="Arslan";ftr[2]="Ghulam Mustafa";gender[2]="Male";ssc[2]="90 %";hssc[2]="87 %";uni[2]="UMT";dep[2]="CS";
 hb[2]="exercise,visiting to new places";re[2]="Islam";oc[2]="student";sp[2]="Rugby";

			
				
	cout<<"________________________________________ UMT BOYS HOSTEL LDA ____________________________________  "<<endl;
	cout<<endl;
	
	cout<<endl;
	cout<<"[Press 1] To Enter Details Of New Member: "<<endl;
	cout<<"[Press 2] To View Hostel Details Of Any Member: "<<endl;
	cout<<"[Press 3] To View Educational Baground Of Any Member: "<<endl;
	cout<<"[Press 4] To View General Information Of Any Member:"<<endl;
	cout<<"[Press 5] TO veiw Whole Hostel Detail "<<endl; 
	cin>>number;
	cout<<endl;
	if (number >5||number<1)
	{cout <<"Inavlide Number Plz Check It "<<endl;
	cout<<"      Thank you  "<<endl;
	}
	
		
	switch(number){
		while (number==1){
			case 1:
				{
					AddMembers();
					break;
				}
		}
		while (number==2){
			case 2:{
				ViewHostelDetails();
				break;
			}
		}
		while (number==3){
			case 3:{
				
				 ViewEducationalBackground();
				break;}
		}
		
		while (number==4){
			case 4 :{
				ViewGeneralInformation();
				break;
			}
		}
		while (number==5){
			case 5:{
				ViewWholeHostelDetails();
				break;
			}	
		}
		
	
	}
	
	
}

}//firts function starting menu was close here //
//second function is started here //
void Hostel::AddMembers(){
	
		cout<<" Enter Details Of New Member: "<<endl;
		
	cout<<"THERE ARE TWO SEATS FREE "<<endl;
	cout<<"PRESS [1] for seat NUMBER 4 AND PRESS [2] for seat NUMBER 5  "<<endl;
	cout<<"PLEASE CHOSE ONE "<<endl;
	int i;
	cin>>i;
	switch (i){
		
		case 1:
			{
			
		cout<<"Enter the name of the participant :"<<endl;
		cout<<"First Name "<<endl;
		cin>>ptr[3];
		cout<<"Last Name"<<endl;
		cin>>Ptr[3];
		cout<<"Enter the Fathers name of participant :"<<endl;
		cin>>ftr[3];
		cout<<"Enter gender "<<endl;
		cin>>gender[3];
		cout<<"Enter phone number :"<<endl;
		cin>>ntr[3];
		cout<<"Enter the CNIC of participant :"<<endl;
		cin>>ctr[3];
		cout<<"Enter the SCC percentage "<<endl;
		cin>>ssc[3];
		cout<<"Enter the HSSC percentage "<<endl;
	    cin>>hssc[3];
		cout<<"Enter the universtiy name "<<endl;
		cin>>uni[3];
		cout <<"Enter the Department name  "<<endl;
		cin>>dep[3];
		cout<<"Enter the  Hobby "<<endl;
		cin>>hb[3];
		cout<<"Enter  the Religion"<<endl;
		cin>>re[3];
		cout<<"Enter the Occupation "<<endl;
		cin>>oc[3];
		cout<<"Enter the Sports "<<endl;
		cin>>sp[3];
		cout<<"THANK YOU! YOUR DATA IS STORED"<<endl<<endl;
		break;
	
	}
	 case 2:
	 	{
		cout<<"Enter the name of the participant :"<<endl;
		cout<<"First Name "<<endl;
		cin>>ptr[4];
		cout<<"Last Name"<<endl;
		cin>>Ptr[4];
		cout<<"Enter the Fathers name of participant :"<<endl;
		cin>>ftr[4];
		cout<<"Enter gender "<<endl;
		cin>>gender[4];
		cout<<"Enter phone number :"<<endl;
		cin>>ntr[4];
		cout<<"Enter the CNIC of participant :"<<endl;
		cin>>ctr[4];
		cout<<"Enter the SCC percentage "<<endl;
		cin>>ssc[4];
		cout<<"Enter the HSSC percentage "<<endl;
		cin>>hssc[4];
		cout<<"Enter the universtiy name "<<endl;
		cin>>uni[4];
		cout <<"Enter the Department name  "<<endl;
		cin>>dep[4];
		cout<<"Enter the  Hobby "<<endl;
		cin>>hb[4];
		cout<<"Enter  the Religion"<<endl;
	    cin>>re[4];
		cout<<"Enter the Occupation "<<endl;
		cin>>oc[4];
		cout<<"Enter the Sports "<<endl;
	    cin>>sp[4];
		cout<<"THANK YOU! YOUR DATA IS STORED"<<endl<<endl;
		break;
	}
	default :
	 {
	 cout<<"THERE IS NO MORE SPACE OR CHOSE WRITE OPTION "<<endl;
	 cout<<"THANK YOU "<<endl;	
	}
	}
		cout<<"Enter 1 for move to next page "<<endl;
		string j;
		cin>>j;
		if (j=="1"){
			system ("cls");
		}		
		cout<<"Choose a room!"<<endl;
		cout<<"Press 1 : Second room! ONE BED IS FREE "<<endl;
		cout<<"Press 2 : Third room! TWO BED ARE FREE "<<endl;
		cin>>pnum;		
		switch(pnum)
		{			
			case 1:
				{
					cout<<"There is one bed free "<<endl;
					cout<<"Fee of Second  room  is : 18000"<<endl;
					cout<<"Security fee is : 2000"<<endl;
					total=18000+2000;
					cout<<"Total fee for second room is :"<<total<<endl;
					cout<<"YOU HAVE ALLOTED ROOM NUMBER 2 "<<endl;
                    					
					break;
				}
		    case 2:
				{
					cout<<"There is two bed and both are free"<<endl;
					cout<<"Fee of third room is : 18000"<<endl;
					cout<<"Security fee  is : 2000"<<endl;
					total=18000+2000;
					cout<<"Total fee for third room is :"<<total<<endl;
					cout<<"YOU HAVE ALLOTED ROOM NUMBER 3 "<<endl;
									
					}
			default :
				{   
					
					cout<<"Thank you"<<endl;	
					break;
				   } 
	      } 
	      string k ;
	    cout<<"Enter 1 for return to  HOME page "<<endl;
	    cin>>k;
	    if(k=="1"){
	    	system ("cls") ;
		}
		}
//case 1 end//
void Hostel::ViewHostelDetails(){


//case 2 is started //
			 string firstname,lastname;
			 

				cout<<"____Wellcom to UMT Hostel Boys Details____"<<endl;
				cout<<endl;
	cout<<"Enter First Name :"<<endl;
	cin>>firstname;
	cout<<"Enter last Name "<<endl;
	cin>>lastname ;
	cout<<endl;
	if(firstname== ptr[0]&&lastname==Ptr[0]){

	cout<<"Full Name : "<<ptr[0]<<" "<<Ptr[0]<<endl;
	cout<<"Father Name : "<<ftr[0]<<endl;
	cout<<"Gender : "<<gender[0]<<endl;
	cout<<"CNIC : "<<ctr[0]<<endl;
	cout<<"Birth Date : 3/3/2000"<<endl;
	cout<<"Phone Number : "<<ntr[0]<<endl;
	cout<<"Gmail : jilbazmughal4455@gmail.com"<<endl;
	cout<<"Address : Bulchi Phatti Oshikhandass gilgit baltistan "<<endl;
	cout<<"Room Number : 1 "<<endl;
	cout<<"Joining Date : 3/3/2022"<<endl;
	cout<<"Thank you :)"<<endl;
	
	}
	
	
	else if (firstname== ptr[1]&&lastname==Ptr[1])
	{
		
	
	cout<<"Full Name : "<<ptr[1]<<" "<<Ptr[1]<<" Khan"<<endl;
	cout<<"Father Name : "<<ftr[1]<<endl;
	cout<<"Gender : "<<gender[1]<<endl;
	cout<<"CNIC : "<<ctr[1]<<endl;
	cout<<"Birth Date : 3/3/2000"<<endl;
	cout<<"Phone Number : "<<ntr[1]<<endl;
	cout<<"Gmail : ibadullah4455@gmail.com"<<endl;
	cout<<"Address :  KPK Mardan Main City "<<endl;
	cout<<"Room Number : 3"<<endl;
	cout<<"Joining Date : 25/2/2023"<<endl;
	cout<<"Thank you :)"<<endl;
	
	}
	
		else if (firstname== ptr[2]&&lastname==Ptr[2])
	{
		
	
	cout<<"Full Name : "<<ptr[2]<<" "<<Ptr[2]<<endl;
	cout<<"Father Name : "<<ftr[2]<<endl;
	cout<<"Gender : "<<gender[2]<<endl;
	cout<<"CNIC : "<<ctr[2]<<endl;
	cout<<"Birth Date : 3/3/2000"<<endl;
	cout<<"Phone Number : "<<ntr[2]<<endl;
	cout<<"Gmail : hafizarslaan@gmail.com"<<endl;
	cout<<"Address :  bahual pur bahwal nagahr "<<endl;
	cout<<"Room Number : 3"<<endl;
	cout<<"Joining Date : 25/2/2023"<<endl;
	cout<<"Thank you :)"<<endl;
	
	}
	
		

	else if ( firstname==ptr[3]&&lastname==Ptr[3]){
		cout <<"name : "<<ptr[3]<<" "<<Ptr[3] <<endl;
			cout <<"father name : "<<ftr[3]<<endl;
			cout <<"phone number  is : "<<ntr[3]<<endl;
			cout<<"cinic is : "<<ctr[3]<<endl;
			
			if (pnum==1){
			
			cout <<"room number 2 is aloted"<<endl;}
			else if (pnum==2){
				cout<<"Room number 3 is aloted"<<endl;
			}
			
			else{
				cout<<"Wait! Room process is in progress"<<endl;
			}
			
			cout <<"             Thank you"<<endl;
	}
		else if ( firstname==ptr[4]&&lastname==Ptr[4]){
		cout <<"name : "<<ptr[4]<<" "<<Ptr[4] <<endl;
			cout <<"father name : "<<ftr[4]<<endl;
			cout <<"phone number  is : "<<ntr[4]<<endl;
			cout<<"cinic is : "<<ctr[4]<<endl;
			
			if (pnum==1){
			
			cout <<"room number 2  is aloted"<<endl;}
			else if (pnum==2){
				cout<<"Room number 3 is aloted"<<endl;
			}
			
			else{
				cout<<"Wait! Room process is in progress"<<endl;
			}
			
			cout <<"             Thank you"<<endl;
	}
	
	else 
	{
		cout<<"Enter a valid Name !"<<endl;
	} 
	
		cout<<"Enter 1 for HOME page "<<endl;
		string  g;
		cin>>g;
		if (g=="1"){
			system ("cls");
		}
		
			
	}
//case 2 is ended//
  //case 3 is started here//
  void Hostel::ViewEducationalBackground()
  

			{ 
			string firstnam,lastnam;
			
				cout<<"____Wellcom To Educational Background____"<<endl;
				cout<<endl;
	cout<<"Enter First Name :"<<endl;
	cin>>firstnam;
	cout<<"Enter last Name "<<endl;
	cin>>lastnam ;
	cout<<endl;
	
	if(firstnam== ptr[0]&&lastnam==Ptr[0])
	{
		
	
	cout<<"Full Name : "<<ptr[0]<<" "<<Ptr[0]<<endl;
	cout<<"Father Name : "<<ftr[0]<<endl;
	cout<<"Gender : "<<gender[0]<<endl;	
	cout<<"SSCI & SSCII (%): "<<ssc[0]<<endl;
	cout<<"HSSCI & HSSCII (%): "<<hssc[0]<<endl;
	cout<<"Universty : "<<uni[0]<<endl;
	cout<<"Deparnment : "<<dep[0]<<endl;
	cout<<"Thank you :)"<<endl;
		
	}
	
	
	else if(firstnam== ptr[1]&&lastnam==Ptr[1])
	{
	
	
	cout<<"Full Name : "<<ptr[1]<<Ptr[1]<<endl;
	cout<<"Father Name : "<<ftr[1]<<endl;
	cout<<"Gender : "<<gender[1]<<endl;	
	cout<<"SSCI & SSCII (%): "<<ssc[1]<<endl;
	cout<<"HSSCI & HSSCII (%): "<<hssc[1]<<endl;
	cout<<"Universty : "<<uni[1]<<endl;
	cout<<"Deparnment : "<<dep[1]<<endl;
	cout<<"Thank you :)"<<endl;
	
	}
	
	
		else if(firstnam== ptr[2]&&lastnam==Ptr[2])
	{
	
	
	cout<<"Full Name : "<<ptr[2]<<Ptr[2]<<endl;
	cout<<"Father Name : "<<ftr[2]<<endl;
	cout<<"Gender : "<<gender[2]<<endl;	
	cout<<"SSCI & SSCII (%): "<<ssc[2]<<endl;
	cout<<"HSSCI & HSSCII (%): "<<hssc[2]<<endl;
	cout<<"Universty : "<<uni[2]<<endl;
	cout<<"Deparnment : "<<dep[2]<<endl;
	cout<<"Thank you :)"<<endl;
	
	}
	

 else if (firstnam==ptr[3]&&lastnam==Ptr[3]){
		cout <<"Full Name : "<<ptr[3]<<" "<<Ptr[3]<<endl;
			cout <<"father name : "<<ftr[3]<<endl;
			cout <<"phone number  is : "<<ntr[3]<<endl;
	        cout<<"Gender : "<<gender[3]<<endl;
	        cout<<"SSCI & SSCII (%) : " <<ssc[3]<<endl;
	        cout<<"HSSCI & HSSCII (%) : "<<hssc[3]<<endl;
			cout<< "University  "<<uni[3]<<" "<<endl;
	cout<<"Deparnment :" <<dep[3]<<endl;
	cout<<"Thank you :)"<<endl;
	}
	else if (firstnam==ptr[4]&&lastnam==Ptr[4]){
		cout <<"Full Name : "<<ptr[4]<<" "<<Ptr[4]<<endl;
			cout <<"father name : "<<ftr[4]<<endl;
			cout <<"phone number  is : "<<ntr[4]<<endl;
	        cout<<"Gender : "<<gender[4]<<endl;
	        cout<<"SSCI & SSCII (%) : " <<ssc[4]<<endl;
	        cout<<"HSSCI & HSSCII (%) : "<<hssc[4]<<endl;
			cout<< "University  "<<uni[4]<<" "<<endl;
	cout<<"Deparnment :" <<dep[4]<<endl;
	cout<<"Thank you :)"<<endl;
	}
	else {
	cout<<"Enter a valid Name !"<<endl;
	}string y;
		cout<<"Enter 1 for return to HOME page ";
		cin>>y;
		if (y=="1"){
			system ("cls");
		}
	}//case 3 is ended here//
		void Hostel::ViewGeneralInformation()
//case four is started here//
			{
			
				cout<<"WELLCOME TO GENERAL INFORMATION OF ANY MEMBER IN HOSTEL "<<endl<<endl;
			string fn,ln;
			cout<<"Enter First Name "<<endl;
			cin>>fn;
			cout<<"Enter Last Nmae"<<endl;
			cin>>ln;
			if (fn==ptr[0]&&ln==ptr[0]){
				cout<<"NAME : "<<ptr[0]<<" "<<Ptr[0]<<endl;
				cout<<"FATHER NAME : "<<ftr[0]<<endl;
				cout<<"HOBBY : "<<hb[0]<<endl;
				cout<<"RELIGION  : "<<re[0]<<endl;
				cout<<"OCCUPATON : "<<oc[0]<<endl;
				cout<<"SPORTS : "<<sp[0]<<endl;
				cout<<"THANK YOU "<<endl;
				}
			   else  if (fn==ptr[1]&&ln==Ptr[1]){
				cout<<"NAME : "<<ptr[1]<<" "<<Ptr[1]<<endl;
				cout<<"FATHER NAME : "<<ftr[1]<<endl;
				cout<<"HOBBY : "<<hb[1]<<endl;
				cout<<"RELIGION  : "<<re[1]<<endl;
				cout<<"OCCUPATON : "<<oc[1]<<endl;
				cout<<"SPORTS : "<<sp[1]<<endl;
				cout<<"THANK YOU "<<endl;
				}
			   else  if (fn==ptr[2]&&ln==Ptr[2]){
				cout<<"NAME : "<<ptr[2]<<" "<<Ptr[2]<<endl;
				cout<<"FATHER NAME : "<<ftr[2]<<endl;
				cout<<"HOBBY : "<<hb[2]<<endl;
				cout<<"RELIGION  : "<<re[2]<<endl;
				cout<<"OCCUPATON : "<<oc[2]<<endl;
				cout<<"SPORTS : "<<sp[2]<<endl;
				cout<<"THANK YOU "<<endl;
				}
			    
			else  if (fn==ptr[3]&&ln==Ptr[3]){
				cout<<"NAME : "<<ptr[3]<<" "<<Ptr[3]<<endl;
				cout<<"FATHER NAME : "<<ftr[3]<<endl;
				cout<<"HOBBY : "<<hb[3]<<endl;
				cout<<"RELIGION  : "<<re[3]<<endl;
				cout<<"OCCUPATON : "<<oc[3]<<endl;
				cout<<"SPORTS : "<<sp[3]<<endl;
				cout<<"THANK YOU "<<endl;
				}
				else  if (fn==ptr[4]&&ln==Ptr[4]){
				cout<<"NAME : "<<ptr[4]<<" "<<Ptr[4]<<endl;
				cout<<"FATHER NAME : "<<ftr[4]<<endl;
				cout<<"HOBBY : "<<hb[4]<<endl;
				cout<<"RELIGION  : "<<re[4]<<endl;
				cout<<"OCCUPATON : "<<oc[4]<<endl;
				cout<<"SPORTS : "<<sp[4]<<endl;
				cout<<"THANK YOU "<<endl;
				}
				else {
					cout<<"Invalide Name "<<endl;
				}
					string r;
				cout<<"Enter 1 for return to HOME page ";
		cin>>r;
		if (r=="1"){
			system ("cls");
		}
			
			}
			//four case is close here//
			
//case 5 is started here //
void Hostel :: ViewWholeHostelDetails()
				{	
					string numb;
					cout<<"____Wellcom To Hostel Details____"<<endl<<endl;
					cout<<"There are 3 Room in this Hostel "<<endl;
					cout<<"1. Two seater"<<endl;
					cout<<"2. Two seater"<<endl;
					cout<<"3. Two seater"<<endl;
					cout<<"PRESS 1 - 3 to search Details of any room "<<endl;
					cout<<"ROOM NUMBER "<<endl;
					cin>>numb;
					
					if (numb=="1"){
						cout<<"WELCOME TO ROOM NUMBER 1 "<<endl<<endl;
						cout<<"There Are Two  Seats"<<endl;
					    cout <<"Two Student In ROOM 1  Already"<<endl;
					    cout<<"1. "<<ptr[0]<<" "<<Ptr[0]<<"2. "<<ptr[1]<<" "<<Ptr[1]<<endl;
						cout<<"    THANK YOU "<<endl;
						}
						
						else if (numb=="2"){
								cout<<"WELCOME TO ROOM NUMBER 2 "<<endl<<endl;
						cout<<"There Are Two Seats "<<endl;
						 cout<<"1. "<<ptr[2]<<" "<<Ptr[2]<<endl;
					    
					    if (pnum==1){
					    cout<<"2. "<<ptr[3]<<" "<<Ptr[3];
						}
						if (pnum==1){
							cout<<ptr[4]<<""<<Ptr[4]<<endl;
						}
						else{
						cout <<" 1 Student In ROOM 2   "<<endl;
						cout<<"second  Bed Is Free "<<endl;
						cout<<"    THANK YOU "<<endl;}
					        }
					        
                      else if (numb=="3"){
                      		cout<<"WELCOME TO ROOM NUMBER 3 "<<endl<<endl;
						cout<<"There Are Two Seats "<<endl;
						if (pnum==2){
							cout<<"there is one student "<<endl;
							cout<<"1. "<<ptr[3]<<" "<<Ptr[3];
						}
						if (pnum==2){
							cout<<ptr[4]<<" "<<Ptr[4]<<endl;
						}
						else {
						
						cout<<"Two Bed Is Free "<<endl;}
						cout<<"    THANK YOU "<<endl;
		                   }
					      
			
					  else {
					  	cout<<"INVALIDE NUMBER PLZ CHECK "<<endl;
					  cout<<"   THANK YOU  "<<endl;
		                    }
		                    
		                  string m;
					  	cout<<"Enter 1 for return to HOME page "<<endl;
		                cin>>m;
		                if (m=="1"){
			            system ("cls");
					        }	
		
		//case 5 is close here 

//swticth for whole program//
	}
	int main(){
		string nameS ,nameL;
		string idS, idL;
		string pass1S,pass1L;
		string pass2S,pass2L;
		cout<<"......................WELCOME TO THE SIGNUP PAGE FOR ADMIN....................... "<<endl;
		cout<<"ENTER YOUR NAME "<<endl;
		cin>>nameS;
		cout<<"ENTER YOUR ID "<<endl;
		cin>>idS;
		cout<<"ENTER YOUR PASSWORD"<<endl;
		cin>>pass1S;
		cout<<"CONFRIM YOUR PASSWORD "<<endl;
		cin>>pass2S;
		if (pass1S==pass2S){
			cout<<"YOUR ACCOUNT WAS CREATED SUCCESSFULLY "<<endl;
			string d;
			cout<<"ENTER 1 TO MOVE NEXT PAGE ";
			cin>>d;
			if (d=="1"){
			system("cls");
				cout<<"...............WELCOME TO LOGIN PAGE .................."<<endl;;
				cout<<"ENTER YOUR NAME "<<endl;
				cin>>nameL;
				cout<<"ENTER YOUR ID "<<endl;
				cin>>idL;
				cout<<"ENTER YOUR PASSWORD"<<endl;
				cin>>pass1L;
				if(nameL==nameS&&idS==idL&&pass1L==pass1S){
					
			Hostel hostel1;
		hostel1.StartMenu();
				}
					else {
				cout<<"SORRY! YOU DONT HAVE ANY ACCOUNT "<<endl;
			}
				
			}
		
		
		}
		else {
			cout<<"SORRY! SOMETHING IS WRONG. TRY SIGNING UP AGAIN"<<endl;
		}
		
		return 0;
	}
	
