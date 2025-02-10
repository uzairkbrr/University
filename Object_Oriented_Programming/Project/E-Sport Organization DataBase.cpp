#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Person{
	private:
		string name;
		int age;
		int salary;
		string gender;
	
	public:
		
		//setters
		void setName(string name){
			this->name = name;
		}
		
		void setAge(int age){
			this->age = age;
		}
		
		void setGender(string gender){
			this->gender = gender;
		}
				
		void setSalary(int salary){
			this->salary = salary;
		}

		// getters
		string getName(){
			return this->name;
		}
		
		int getAge(){
			return this->age;
		}
		
		string getGender(){
			return this->gender;
		}
		
		int getSalary(){
			return this->salary;
		}
		
		// the below password is for manager;
		string password = "manager123";
		
		void updatePassword(string newPassword)
		{
			this->password = newPassword;
			
			cout << endl;
			cout << " ------------------" << endl;
			cout << "| Password Updated !" << endl;
			cout << " ------------------" << endl;
		}
		
	
		string getPassword(){
			return this->password;
		}
		
};

// Manager is a person ( Manager is inhereted by person)
class Manager{
	// all the public properties of person will be accessed by Manager
	int size = 0;
	
	public:
	Person *manager;
		
		// constructor 
		Manager(int size){
			this->size = size;
			manager = new Person[size];
		}
		
		void AddManager(){
			
			Person *newManager = new Person[size+1];
			
			for(int i=0 ; i<size ; i++)
			{
				newManager[i] = manager[i];
			}
			
			string managerName,gender;
			int age, salary;
			
			cout << endl;
			cout << "Enter the following Data of New Manager :-" << endl << endl;
			cout << "Name => ";
			fflush(stdin);
			getline(cin, managerName);
			
			
			do{
				cout << "Age => " ;
				cin >> age;
								
				if(age < 18)
				{
					cout << endl;
					cout << "Manager must be 18+ to be a part of our Organization !" << endl;
					cout << endl;	
				}
				else if(age > 50)
				{
					cout << endl;
					cout << "Manager must be under 50 to be a part of our organization !" << endl;
					cout << endl;
				}
								
			}while(age < 18 || age > 50);
			
			cout << "Salary => ";
				
			do{
				
				cin >> salary;
					
				if(salary <= 0)
				{
					cout << endl;
					cout << "Enter Valid salary => ";
				}
			
			}while(salary <= 0);
				
			cout << "Gender => ";
			fflush(stdin);
			getline(cin, gender);
			
			newManager[size].setName(managerName);
			newManager[size].setAge(age);
			newManager[size].setGender(gender);
			newManager[size].setSalary(salary);
			
			delete []manager;
			
			manager = newManager;
			
			size++;
			
			cout << endl;
			cout << " ____________________________" << endl;
			cout << "|                            |" << endl; 
			cout << "| Manager Successfully Added |" << endl;
			cout << "|____________________________|" << endl;
			cout << endl;
		}
		
		void UpdateManager(string ManagerToUpdate){
			
			bool check = false;
			string ManagerName,gender;
			int age, salary;
			
			// if manager is found then check variable will become true
			for (int i=0 ; i<size ; i++)
			{
				if(manager[i].getName() == ManagerToUpdate)
				{
					check = true;
				}
			}
			
			// if check variable is true its mean that manager is available in our organization
			// else (false) then its mean that manager is not available in our organization
			if(check == true)
			{
				cout << endl;
				cout << "Enter the following Data for new Manager " << endl;
				cout << "Name => " ;
				fflush(stdin);
				getline(cin, ManagerName);
				
				
				
				do{
					cout << "Age => " ;
					cin >> age;
								
					if(age < 18)
					{
						cout << endl;
						cout << "Manager must be 18+ to be a part of our Organization !" << endl;
						cout << endl;	
					}
					else if(age >50)
					{
						cout << endl;
						cout << "Manager must be under 50 to be a part of our organization !" << endl;
						cout << endl;
					}
								
				}while(age <18 || age > 50);
				
				cout << "Salary => ";
				
				do{
					
					cin >> salary;
					
					if(salary <= 0)
					{
						cout << endl;
						cout << "Enter Valid salary => ";
					}
					
				}while(salary <= 0);
				
				cout << "Gender => ";
				fflush(stdin);
				getline(cin, gender);
				
				for (int i=0 ; i<size ; i++)
				{
					if(manager[i].getName() == ManagerToUpdate)
					{
						manager[i].setName(ManagerName);
						manager[i].setAge(age);
						manager[i].setGender(gender);
						manager[i].setSalary(salary);
					}
				}
				
					cout << endl;
					cout << " ______________________________" << endl;
					cout << "|                              |" << endl; 
					cout << "| Manager Successfully Updated |" << endl;
					cout << "|______________________________|" << endl;
					cout << endl;
			}
			else {
				cout << endl << endl;
				cout << " ------------------" << endl;
				cout << "| Manager Not Found !" << endl;
				cout << " -------------------" << endl;
				cout << endl;
				cout << endl << endl;
			}
		}
		
		void DisplayManagers(){
			
			int count = 1;
			for(int i=0 ; i<size ; i++)
			{
				cout << endl;
				cout <<"------------------------" << endl;
				cout << "Manager Number " << count << endl << endl; 
				count++;
				cout << "Name : " << manager[i].getName() << endl;
				cout << "Age : " << manager[i].getAge() << endl;
				cout << "Gender : " << manager[i].getGender() << endl;
				cout << "Salary : " << manager[i].getSalary() << endl;
				cout <<"------------------------" << endl;
				cout << endl;
			}
		}
		
		
		
		// getters
		int getSize(){
			return this->size;
		}
		
};

// every player is person (player is inhereted by person) 
class Player: public Person{
	
	private:
		string dateOfJoining;
		string roleInTeam;
		string password = "player123";
	
	public:
		
		//setters
		void setdateOfJoining(string dateOfJoining){
			this->dateOfJoining = dateOfJoining;
		}
		
		void setRoleInTeam(string roleInTeam){
			this->roleInTeam = roleInTeam;
		}

		//getters
		string getdateOfJoining(){
			return this->dateOfJoining;
		}
		
		string getRoleInTeam(){
			return this->roleInTeam;
		}
		
		string getPassword(){
			return this->password;
		}
		
		void updatePassword(string newPassword)
		{
			this->password = newPassword;
			
			cout << endl;
			cout << " ------------------" << endl;
			cout << "| Password Updated !" << endl;
			cout << " ------------------" << endl;	
		}
		
};

// TeamReq == team requirnments
class TeamReq{

	// there will be a team for specific Game
	string gameName;
	
	public:
		
		// in one team there are 5 players so we create an array of 5 players 
		Player p[5];
	
		//setter
		void setGameName(string gameName){
			this->gameName = gameName;
		}
		
		//getter
		string getGameName(){
			return this->gameName;
		}
		

};

class Team{
	
	private:
		int size;
	
		
	public:
		TeamReq *team;
		// constructor that will create a dynamic array of TeamReq class with the help of which we can make alot of Teams in runtime
		Team(int size){
			this->size = size;
			team = new TeamReq[size];
		}
		
		void AddTeam(){
			
			TeamReq *newTeam = new TeamReq[size+1];
			
			// copying all old teams to newTeam;
			for(int i=0 ; i<size ; i++)
			{
//				newTeam[i] = team[i];
				for(int j=0; j<5 ; j++)
				{
					newTeam[i].p[j] = team[i].p[j]; 
				}
			}
			
			string whichGameTeam;
			
			cout << endl;
			cout << "Which Game Team it is ? => " ;
			fflush(stdin);
			getline(cin, whichGameTeam);
			newTeam[size].setGameName(whichGameTeam);
			
			cout << endl;
			cout << "Enter Players for the New Team : " << endl;
			
			int age, salary ;
			string name, gender, roleInTeam, DateOfJoining;
			
			for(int i=0 ; i<5 ; i++)
			{
				cout << endl;
				cout << "Player no " << i+1 << endl;
				cout << endl;
				cout << "Name => " ;
				fflush(stdin);
				getline(cin, name);
				
				
					do{
						cout << "Age => " ;
						cin >> age;
								
						if(age < 18)
						{
							cout << endl;
							cout << "Player must be 18+ to be a part of our Organization !" << endl;
							cout << endl;	
						}
							else if(age >30)
						{
							cout << endl;
							cout << "Player must be under 30 to be a part of our organization !" << endl;
							cout << endl;
						}
								
					}while(age <18 || age > 30);
				
				cout << "Gender => ";
				fflush(stdin);
				getline(cin, gender);
				
				
				cout << "Salary => ";
				
				do{
					
					cin >> salary;
					
					if(salary <= 0)
					{
						cout << endl;
						cout << "Enter Valid salary => ";
					}
				}while(salary <= 0);
				
				cout << "Role in Team => ";
				fflush(stdin);
				getline(cin, roleInTeam);
				
				cout << "Date of Joining => " ;
				fflush(stdin);
				getline(cin, DateOfJoining);
				
				newTeam[size].p[i].setName(name);
				newTeam[size].p[i].setAge(age);
				newTeam[size].p[i].setGender(gender);
				newTeam[size].p[i].setSalary(salary);
				newTeam[size].p[i].setRoleInTeam(roleInTeam);
				newTeam[size].p[i].setdateOfJoining(DateOfJoining);
			}
			
			delete []team;
			
			team = newTeam;
			
			cout << endl;
			cout << " -------------------------" << endl;
			cout << "| Team Successfully Added |" << endl;
			cout << " -------------------------" << endl;
			
			size++;
			
		}
		
		void UpdatePlayer(string PlayerName, string TeamName)
		{
			
			int age, salary ;
			string name, gender, roleInTeam, DateOfJoining;
			
			int count = 0, playerCount = 0;
			
			bool teamAvail = false ;
			
			for(int i=0 ; i<size ; i++)
			{
				if(TeamName == team[i].getGameName())
				{
					teamAvail = true;
				}
			}
			
			if(teamAvail == true)
			{
				
				for(int i=0 ; i<size ; i++)
				{
					if(TeamName == team[i].getGameName())
					{
						for(int j=0 ; j<5 ; j++)
						{
							if(PlayerName == team[i].p[j].getName())
							{
	
								cout << endl;
								cout << "Name => " ;
								fflush(stdin);
								getline(cin, name);
									
								
								do{
									cout << "Age => " ;
									cin >> age;
											
									if(age < 18)
									{
										cout << endl;
										cout << "Player must be 18+ to be a part of our Organization !" << endl;
										cout << endl;	
									}
										else if(age >30)
									{
										cout << endl;
										cout << "Player must be under 30 to be a part of our organization !" << endl;
										cout << endl;
									}
											
								}while(age <18 || age > 30);
									
								cout << "Gender => ";
								fflush(stdin);
								getline(cin, gender);
								
								cout << "Salary => ";
								do{
					
									cin >> salary;
									
									if(salary <= 0 )
									{
										cout << endl;
										cout << "Enter Valid Salary => ";
									}
									
								}while(salary <= 0);
													
								cout << "Role in Team => ";
								fflush(stdin);
								getline(cin, roleInTeam);
								
								cout << "Date of Joining => " ;
								fflush(stdin);
								getline(cin, DateOfJoining);
								
								team[i].p[j].setName(name);
								team[i].p[j].setAge(age);
								team[i].p[j].setGender(gender);
								team[i].p[j].setSalary(salary);
								team[i].p[j].setRoleInTeam(roleInTeam);
								team[i].p[j].setdateOfJoining(DateOfJoining);
							}
							else 
							{
								playerCount++;
							}
						
							
						}
					}
				}
				
			
			}
			else
			{
				cout << endl;
				cout << " ----------------" << endl;
				cout << "| Team Not Found ! " << endl;
				cout << " ----------------" << endl;
				cout << endl;
			}
			
			
			if(playerCount == 5)
			{
				cout << endl;
				cout << " ------------------" << endl;
				cout << "| Player Not Found ! " << endl;
				cout << " ------------------" << endl;
				cout << endl;
			}
			
		}
		
		void DisplayTeam(string whichTeam){
			
			for(int i=0 ; i<size ; i++)
			{
				if(team[i].getGameName() == whichTeam )
				{
					cout << endl;
					cout << "-------------------------------" << endl;
					cout << "| This team is of " << team[i].getGameName() << " game" << endl;
					cout << endl;
					cout << "-------------------------------" << endl;
					
					int count = 1;
					for(int j=0 ; j<5 ;j++)
					{
					
						cout << "Player: " << count << endl;
						cout << endl;
						count++;
						cout << "Name : " << team[i].p[j].getName() << endl;
						cout << "Age : " << team[i].p[j].getAge() << endl;
						cout << "Salary : " << team[i].p[j].getSalary() << endl;
						cout << "Gender : " << team[i].p[j].getGender() << endl;
						cout << "Date of Joining : " << team[i].p[j].getdateOfJoining() << endl;
						cout << "Role in Team : " << team[i].p[j].getRoleInTeam() << endl;
						cout << "--------------------------" << endl;
					}
				}
			}
			
			// the below code will check if the team is not available
			bool check = false;
			for(int i=0 ; i<size ;i++)
			{
				if(team[i].getGameName() == whichTeam )
				{
					check = true;
				}
			}
			
			// if team is not found then :-
			if(check == false)
			{
				cout << endl;
				cout << " ----------------" << endl;
				cout << "| Team Not Found ! " << endl;
				cout << " ----------------" << endl;
				cout << endl;
			}
		}	
		
		void DisplaySinglePlayer(string playerName, string TeamName){
			
			
			bool check = false ;
			
			for(int i=0 ; i<size ; i++)
			{
				// compare the searching name of team to user search
				if(TeamName == team[i].getGameName())
				{
					
					for(int j=0; j<5 ; j++)
					{
						// finding the player name in the team
						if(playerName == team[i].p[j].getName())
						{
							
							check = true;
							
							cout << endl;
							cout << "Name : " << team[i].p[j].getName() << endl;
							cout << "Age : " << team[i].p[j].getAge()	<< endl;
							cout << "Gender : " << team[i].p[j].getGender() << endl;
							cout << "Salary : " << team[i].p[j].getSalary() << endl;
							cout << "Role in Team : " << team[i].p[j].getRoleInTeam() << endl;
							cout << "Date of Joining : " << team[i].p[j].getdateOfJoining() << endl ;
						}	
					}
				}	
			}	
			
			
			if(check == false)
			{
				cout << endl;
				cout << " ------------------" << endl;
				cout << "| Player not Found !" << endl;
				cout << " ------------------" << endl;	
			}	
		}
		
		// getter which will return size of team (MEANS how many teams are available in our organization)
		int getSize(){
			return this->size;
		}
};


int main(){
	
	Person boss; // owner is a person (owner is object of person class)
	Manager manager(0);
	Player *player; // dynamically object of player class
	Team team(0); // this will create dynamically object (array) of team, with the help of which we can create alot of teams in run time
	
	string password;
	
	int howManyPlayers=0;
	
	int option ;
	do{
	
		cout << endl;
		cout << " ---------------------" << endl;
		cout << "| 1. Login as Owner   |" << endl;
		cout << "| 2. Login as Manager |" << endl;
		cout << "| 3. Login as Player  |" << endl;
		cout << "| 4. Exit!            |" << endl;
		cout << " ---------------------" << endl;
		cout << endl;
		
		cout << "Your Option => " ;
		cin >> option;
		
		if(option == 1)
		{
			int adminOption;
			
			cout << endl;
			cout << "  ----------------------------------------" << endl;
			cout << " |             HELLO BOSS                 |" << endl;
			cout << " |                                        |" << endl;
			cout << " |     Welcome to Your Organization       |" << endl;
			cout << " |                                        |" << endl;
			cout << " |       What do you want to do ?         |" << endl;
			cout << " |                                        |" << endl;
			cout << "  ---------------------------------------- " << endl;
			cout << endl;
			cout << endl;
			
			
			do{
			
				cout << endl;
				cout << " --------------------" << endl;
				cout << "| 1. Add Manager     |" << endl;
				cout << "| 2. View Manager's  |" << endl;
				cout << "| 3. View Team       |" << endl;
				cout << "| 4. View Player     |" << endl;
				cout << "| 5. Exit!           |" << endl;
				cout << " --------------------" << endl;
				cout << endl;
				
				cout << "Your Option => ";
				cin >> adminOption;
				
				if(adminOption == 1)
				{
					manager.AddManager();	
				}
				else if(adminOption == 2)
				{
					if(manager.getSize() > 0)
					{
						manager.DisplayManagers();
					}
					else
					{
						cout << endl;
						cout << " -------------------" << endl;
						cout << "| Manager not Found !" << endl;
						cout << " -------------------" << endl;
						cout << endl;
						
					
					}
				}
				else if(adminOption == 3)
				{
					
					if(team.getSize() > 0)
					{
						string whichTeam;
						
						cout << endl;
						cout << "Which Game Team do you want to Check ? ";
						fflush(stdin);
						getline(cin, whichTeam);
					
						team.DisplayTeam(whichTeam);
					}
					else
					{
						cout << endl;
						cout << " --------------------" << endl;
						cout << "| Team not Available !" << endl;
						cout << " --------------------" << endl;
						cout << endl;
					}
					
				}
				else if(adminOption == 4)
				{
					if(howManyPlayers > 0)
					{
						string playerInWhichTeam, playerName;
						
						cout << endl;
						cout << "Enter Player Name => ";
						fflush(stdin);
						getline(cin, playerName);
						cout << "Team of the Player => ";
						fflush(stdin);
						getline(cin, playerInWhichTeam);
						
						team.DisplaySinglePlayer(playerName, playerInWhichTeam);
					}
					else
					{
						cout << endl << endl;
						cout << " ----------------------" << endl;
						cout << "| Player not Available !" << endl;
						cout << " ----------------------" << endl;
						cout << endl;
					}
					
				}
				else if(adminOption == 5)
				{
					break;
				}
				else 
				{
					cout << endl << endl;
					cout <<"  ---------------" << endl;
					cout << "| Invalid Input !"<< endl;
					cout <<"  ---------------" << endl;
					cout << endl;
				}
			}while(adminOption != 5);
				
		}
		else if(option == 2)
		{
			int managerOption ,managerCount=0;
			string managerName;
			
			// if any manager is available then give them access to login
			if(manager.getSize() > 0)
			{
			
			
			cout << endl;
			cout << "Enter Your Name => ";
			fflush(stdin);
			getline(cin, managerName);
			
			for(int i=0 ; i<manager.getSize() ; i++)
			{
				if(managerName == manager.manager[i].getName())
				{
					do{
				
						cout << "Enter Your Password => " ;
						fflush(stdin);
						getline(cin, password);
						
						if(password == manager.manager[i].getPassword())
						{
				
					
							do{
								cout << endl;
								cout << " --------------------" << endl;
								cout << "| 1. Add Team        |" << endl;
								cout << "| 2. Update Player   |" << endl;
								cout << "| 3. View Team       |" << endl;
								cout << "| 4. View Player     |" << endl;
								cout << "| 5. Update Password |" << endl;
								cout << "| 6. Exit!           |" << endl;
								cout << " --------------------" << endl;
						
								cout << endl;
								cout << "Your Option => " ;
								cin >> managerOption ;
							
								if(managerOption == 1)
								{
									team.AddTeam();
									howManyPlayers += 5 ; 
								}
								else if(managerOption == 2)
								{
									
									if(team.getSize() > 0)
									{
										string teamName, PlayerName;
								
										cout << endl;
										cout << "Enter Team Name : " ;
										fflush(stdin);
										getline(cin, teamName);
								
										cout << "Enter player Name  : " ;
										fflush(stdin);
										getline(cin, PlayerName);
										
										team.UpdatePlayer(PlayerName, teamName);
									}
									else
									{
										cout << endl;
										cout << " ----------------------" << endl;
										cout << "| Player not Available !" << endl;
										cout << " ----------------------" << endl;
										cout << endl;
									}
								}
								else if(managerOption == 3)
								{
									string whichTeam;
									
									if(team.getSize() > 0)
									{
										cout << endl;
										cout << "Which Game Team do you want to Check ? ";
										fflush(stdin);
										getline(cin, whichTeam);
										
										team.DisplayTeam(whichTeam);
									}
									else
									{
										cout << endl;
										cout << " --------------------" << endl;
										cout << "| Team Not Available ! " << endl;
										cout << " --------------------" << endl;
										cout << endl;
									}
								
									
								}
								else if(managerOption == 4)
								{
									string playerInWhichTeam, playerName;
									
									if(team.getSize() > 0)
									{
									
										cout << endl;
										cout << "Enter Player Name => ";
										fflush(stdin);
										getline(cin, playerName);
										cout << "Enter Team of Player => ";
										fflush(stdin);
										getline(cin, playerInWhichTeam);
										
										team.DisplaySinglePlayer(playerName, playerInWhichTeam);
									
									}
									else
									{
										cout << endl;
										cout << " ----------------------" << endl;
										cout << "| Player not Available !" << endl;
										cout << " ----------------------" << endl;
										cout << endl;
									}
								}
								else if(managerOption == 5)
								{
									cout << endl;
									cout << "Enter New Password => ";
									fflush(stdin);
									getline(cin, password);
									
									manager.manager[i].updatePassword(password);
									
								}
								else if(managerOption == 6)
								{
									break;
								}
								else
								{
									cout << endl;
									cout <<"  ---------------" << endl;
									cout << "| Invalid Input !"<< endl;
									cout <<"  ---------------" << endl;
								}
								}while(managerOption != 6);
							
							}
							else 
							{
								cout << endl;
								cout << " ------------------" << endl;
								cout << "| Invalid Password |" << endl;
								cout << " ------------------" << endl;
								cout << endl;
							}
							
						}while(password != manager.manager[i].getPassword());
			
				}
				else
				{
					managerCount++;	
				}				
			}
			
			if(managerCount == manager.getSize())
			{
				cout << endl;
				cout << " -------------------"<< endl;
				cout << "| Manager Not Found |" << endl;	
				cout << " -------------------"<< endl;
			}	
		
		}
		else 
		{
			cout << endl;
			cout << " ------------------------" << endl;
			cout << "| Manager Not Available  |" << endl;
			cout << " ------------------------" << endl;
			cout << endl;
			cout << " ------------------------------" << endl;
			cout << "| Kindly Add Any Manager First !" << endl;
			cout << " ------------------------------" << endl;
			cout << endl;
		}
		
		}
		else if(option == 3)
		{

			int playerOption ;
			string teamName;
			string playerName;
			
			int playerCount = 0 , teamCount=0;
			
			if(team.getSize() > 0 )
			{
			
			
				cout << endl;
				cout << "Enter Your Name => ";
				fflush(stdin);
				getline(cin, playerName);
				
				cout << endl;
				cout << "Enter Your Team Name => ";
				fflush(stdin);
				getline(cin, teamName);
			
			for(int i=0 ; i<team.getSize(); i++)
			{
			
				if(teamName == team.team[i].getGameName())
				{
				
				for(int j=0 ; j<5 ; j++)
				{
				
					if(playerName == team.team[i].p[j].getName())
					{
					
					do{
						
						cout << endl;
						cout << "Enter Your Password => ";
						fflush(stdin);
						getline(cin, password);
					
						if(password == team.team[i].p[j].getPassword())
						{
						
							do{
								
								cout << endl;
								cout << " --------------------------" << endl;
								cout << "| 1. View Your Information |" << endl;
								cout << "| 2. Update Your Password  |" << endl;
								cout << "| 3. View Your Team        |" << endl;
								cout << "| 4. Exit!                 |" << endl;
								cout << " --------------------------" << endl;
								
								cout << endl;
								cout << "Your Option => " ;
								cin >> playerOption ;
								
								if(playerOption == 1)
								{									
									team.DisplaySinglePlayer(playerName, teamName);
									cout << "Password : " << team.team[i].p[j].getPassword() << endl;
								}
								else if(playerOption == 2)
								{
									cout << endl;
									cout << "Enter Your New Password => " ;
									fflush(stdin);
									getline(cin, password);
									
									team.team[i].p[j].updatePassword(password);
								}
								else if(playerOption == 3)
								{
									team.DisplayTeam(teamName);
									
								}
								else if(playerOption == 4)
								{
									break;
								}
								else 
								{
									cout << endl;
									cout << " ---------------" << endl;
									cout << "| Invalid Input !" << endl;
									cout << " ---------------" << endl;
								}
								
						}while(playerOption != 4);
					}
					else
					{
						cout << endl;
						cout << " ------------------" << endl;
						cout << "| Invalid Password !" << endl;
						cout << " ------------------" << endl;
					}
					
					}while(password != team.team[i].p[j].getPassword());
				}
				else 
				{
					playerCount++;
				}
				}
				}
				else
				{
					teamCount++;
				}
			
				}
				
				if(teamCount != team.getSize())
				{
				
					if(playerCount == 5)
					{
						cout << endl;
						cout << " ------------------" << endl;
						cout << "| Player Not Found |" << endl;
						cout << " ------------------" << endl;
					}
				}
				else
				{
					cout << endl;
					cout << " ----------------" << endl;
					cout << "| Team Not Found |" << endl;
					cout << " ----------------" << endl;
				}
				
				}
				else 
				{
					cout << endl;
					cout << " ----------------------" << endl;
					cout << "| Player Not Available |" << endl;
					cout << " ----------------------" << endl;
					
					
				}
			
		}
		else if(option == 4)
		{
			break;
		}
		else 
		{
			cout << endl;
			cout << " ---------------" << endl;
			cout << "| Invalid Input !" << endl;
			cout << " ---------------" << endl;
			
		}
		
	}while(option != 4);
	
	
	cout << endl;
	cout << endl;
	cout << " -----------------------------------------------" << endl;
	cout << "|             . . . BYE BYE . . .               |" << endl;
	cout << "|        . . . Have a Nice Day . . .            |" << endl;
	cout << "|                                               |" << endl;
	cout << "| Thanks for visiting our E-Sport Organizartion | " << endl;
	cout << "|                                               |" << endl;
	cout << " -----------------------------------------------" << endl;
	cout << endl;
	cout << endl;

	
	return 0;
}