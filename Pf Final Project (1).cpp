#include <iostream>
#include <string>
using namespace std;

struct hospital {
    string name;
    int time,age, appnum;
    long long contact;
};
hospital e[25];

void doctor();
int firstpage();
int Appointment();
void details();
void display();
int information();

int main()
{system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t@@  _______________________________________________________________________________________  @@\n";
cout<<"\t\t\t\t\t@@ |                                           		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                           		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                           		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                           		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                         		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                           		                                   | @@\n";
cout<<"\t\t\t\t\t@@ |                                      WELCOME TO                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                              HOSPITAL MANAGEMENT SYSTEM                               | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |                                                                                       | @@\n";
cout<<"\t\t\t\t\t@@ |_______________________________________________________________________________________| @@\n";
cout<<"\t\t\t\t\t@@                                           		                                     @@\n";
cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

cout<<" \t\t\t<< THANK YOU FOR VISITING OUR HOSPITAL >>\n\n\n\n";
cout<<"\t\t\t Our Members :\n"<<endl;
cout<<"\t\t\t1: SAIM RAZA (23-CS-116)"<<endl;
cout<<"\t\t\t2: MUNEEB AHMAD (23-CS-70)"<<endl;
cout<<"\t\t\t3: ALISHBA MUDASSAR (23-CS-109)"<<endl;
cout<<"\t\t\t4: DANIAH BATOOL (23-CS-53) \n\n"<<endl;

system("pause");
firstpage();
}
int firstpage()
{
	system("cls");
	int choice; 
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|                      :<< MAIN MENU >>:                          |\n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1  >> For Available Doctor Information              |\n";
cout<<"\t\t\t\t\t\t|             2  >> For Doctor Appointment                        |\n";
cout<<"\t\t\t\t\t\t|             3  >> For Full History of the Patient               |\n";
cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	
	cout<<"Please Enter Your Choice : ";
	cin>>choice;
	cout<<"\n";
	cout<<"\n";
	int n;
	hospital *e;
	switch(choice)
	{
		case 1:{system("cls");
			doctor();
			break;
		}
			
			
		case 2:{system("cls");
			Appointment();
			break;
		}
		case 3:{system("cls");
            display();
			break;
		}
		case 4:{
			system("cls");
			information();
			break;
		}
		case 5:{system("cls");
			main();
			break;
		}
		default:
         cout << "Invalid choice. Please enter a valid option." << endl;
			
	}

}
	
int n;

void display() {
    for (int i = 0; i < n; i++) {
        cout << "Name: " << e[i].name << endl;
        cout << "Age: " << e[i].age << endl;
        cout << "Appointment Time: " << e[i].time << endl;
        cout << "Contact No: " << e[i].contact << endl;
        cout << "Appointment No: " << e[i].appnum << endl;
        cout << "**************************" << endl;
    }
    system("pause");
    firstpage();
    
}

void details() {
    int gapp;
    cout << "Enter The Number of patients You want to Admit: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of patient " << i + 1;
        cout << "\nEnter The Patient Name: ";
        cin >> e[i].name;
        cout << "Enter The Appointment Time: ";
        cin >> e[i].time;
        cout << "Enter Age: ";
        cin >> e[i].age;
        cout << "Enter Contact No: ";
        cin >> e[i].contact;
        cout << "Appointment Number: ";
        cin >> e[i].appnum;
    }

    cout << "\n<< Your Entry Has Been Saved >>" << endl;
    cout << "\n";
    cout << "Enter 1 >> to more Appointments" << endl;
    cout << "Enter 2 >> to go Mainpage" << endl;
    cin >> gapp;

    if (gapp == 1) {
        system("cls");
        Appointment();
        cout << "\n";
        
    } 
	else if (gapp == 2) {
        system("cls");
        cout << "\n";
        firstpage();
    }
    
}




void stars()
{
	cout<<"\t\t\t\t\t\t\t************************************************\n";
}
void doctor()
{
	int app;
	stars();
	stars();
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t(Five Doctors Are Available)"<<endl;
	cout<<"\t\t\t\t\t\t\t  [Information And Timings Are Given Below]"<<endl;
	cout<<"\n";
	stars();
	stars();
	cout<<"\t\t\t\t\t\t\t\t  Dr.Ahmad (Skin Specialist)"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t[Timing]:"<<endl;
	cout<<"\t\t\t\t\t\t\t\tMonday to Friday\t9AM To 5PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSaturday\t\t9AM To 1PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSunday\t\t\tOFF"<<endl;
	stars();
	cout<<"\t\t\t\t\t\t\t\t  Dr.Waqar (Child Specialist)"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t[Timing]:"<<endl;
	cout<<"\t\t\t\t\t\t\t\tMonday to Friday\t2PM To 8PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSaturday\t\t8AM To 1PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSunday\t\t\t12PM To 9PM"<<endl;
	stars();
	cout<<"\t\t\t\t\t\t\t\t  Dr.Sana (Cardiologists)"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t[Timing]:"<<endl;
	cout<<"\t\t\t\t\t\t\t\tMonday to Friday\t8AM To 5PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSaturday\t\t10AM To 1PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSunday\t\t\tOFF"<<endl;
	stars();
	cout<<"\t\t\t\t\t\t\t\t  Dr.Shahzam (Endocrinologists)"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t[Timing]:"<<endl;
	cout<<"\t\t\t\t\t\t\t\tMonday to Friday\t10AM To 4PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSaturday\t\t4AM To 10PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSunday\t\t\t2PM To 6PM"<<endl;
	stars();
	cout<<"\t\t\t\t\t\t\t\t  Dr.Mehwish (Neurologists)"<<endl;
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t[Timing]:"<<endl;
	cout<<"\t\t\t\t\t\t\t\tMonday to Friday\t8AM To 2PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSaturday\t\t10AM To 12PM"<<endl;
	cout<<"\t\t\t\t\t\t\t\tSunday\t\t\tOFF"<<endl;
	stars();
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t\t\t\t\t\t\t  >>Enter 2 for appointment<< "<<endl;
	cout<<"\t\t\t\t\t\t\t\t  >>Enter 3 for main page<< "<<endl;
	cin>>app;
	if(app==2)
	{system("cls");
		cout<<"\n";
		Appointment();
	}
	if(app==3)
	{system("cls");
		cout<<"\n";
		firstpage();
	}
}
int Appointment()
{
	int appointement;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL APPOINTEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t ~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~ \n";
cout<<"\t\t\t\t\t\t!                                           	                    !\n";
cout<<"\t\t\t\t\t\t!             1  >> For Doctor Ahmad                                !\n";
cout<<"\t\t\t\t\t\t!             2  >> For Doctor Waqar                                !\n";
cout<<"\t\t\t\t\t\t!             3  >> For Doctor Sana                                 !\n";
cout<<"\t\t\t\t\t\t!             4  >> For Doctor Shahzam                              !\n";
cout<<"\t\t\t\t\t\t!             5  >> For Doctor Mehwish                              !\n";
cout<<"\t\t\t\t\t\t!             6  >> For Main Menu                                   !\n";
cout<<"\t\t\t\t\t\t!             7  >> For Exit                                        !\n";
cout<<"\t\t\t\t\t\t!                                           	                    !\n";
cout<<"\t\t\t\t\t\t ~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~ \n\n";
	
	cin>>appointement;
	if(appointement==1||appointement==2||appointement==3||appointement==4||appointement==5)
	{
		cout<<"\n";
		details();
	}
	else if(appointement==6)
	{
		system("cls");
		cout<<"\n";
		firstpage();
	}
	else if(appointement==7)
	{
		system("cls");
		cout<<"\n";
		main();
	}
}
int information()
{
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t<< INFORMATION ABOUT HOSPITAL >>\n\n";
	cout<<"\t\t\t\t\t\t\t\t<< TORENTO GENERAL HOSPITAL >>";
	cout<<"\n\n\n\n\n\t\t\t\t~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~\n"; 
	cout<<"\t\t\t\t!                                                                                                       !\n";
	cout<<"\t\t\t\t! Toronto General Hospital (TGH) is a prominent healthcare institution in Toronto, Ontario,             !\n";
	cout<<"\t\t\t\t! affiliated with the University of Toronto. Specializing in cardiovascular care, transplantation,      !\n";
	cout<<"\t\t\t\t! and complex surgeries,TGH is recognized for its contributions to medical research and education.      !\n";
	cout<<"\t\t\t\t! As part of the University Health Network (UHN),it actively engages in cutting-edge research,          !\n";
	cout<<"\t\t\t\t! fostering advancements in healthcare. TGH is a teaching hospital, playing a vital rolein training     !\n";
	cout<<"\t\t\t\t! medical professionals.Located at 200 Elizabeth St, Toronto, TGH provides state-of-the-art facilities  !\n";
	cout<<"\t\t\t\t! and patient-centered care. Its focus on cardiac services, including heart transplantation andcardiac  !\n";
	cout<<"\t\t\t\t! surgery, has positioned it as a leading center in the field. For the most current information, it is  !\n";
	cout<<"\t\t\t\t!\tadvisable to contactthe hospital directly or refer to its official website.                     !\n";
	cout<<"\t\t\t\t!                                                                                                       !\n";
	cout<<"\t\t\t\t~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~\n\n\n";  
system("pause");
return firstpage();

}

