#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class Account{
    
	//name and balance data member will be private 
    private:
    string name ;
    int balance ;
    
	//All the below getter ,setter and other functions will be public and be accessable from main 
    public:
    
    
	//when user want to deposit money then this function will be called 
    int deposit_amount(int x){
        balance += x ; // balance = balance + x ;
        
        return balance ;
    }
    
    //when user want to withdrawal money then this function will be called 
    int withdrawal_amount(int x){
        balance -= x ; // balance = balance - x ;
        
        return balance ;
    }
    
    // Getters for name and balance ;
    void get_name(string a){
        name = a ;
    }
    
    void get_balance(float b){
        balance = b ;
    }
    
    // Setter for name and balance ;
    void set_name(string name){
        cout << "Name : " << name << endl;
    }
    
    void set_balance(float balance){
        cout << "Balance : " << balance << endl;
    }
    
};

//By using this function we will be creating an object for the class 
Account Create_Account(){
	   
	// creating object inside the function
   Account my_account ;
   
   // variables for objects 
   string name ;
   int balance ;
   
   // Getting input from user ;
   cout << "Enter Name for Creating Account : " ;
   fflush(stdin);
   getline(cin, name);
   
   cout << "Enter Amount for your Account : " ;
   cin >> balance ;
   
   // now setting it with the help of getters ;
   my_account.get_name(name);
   my_account.get_balance(balance);
   
   // returning object to main 
   return my_account ;
}


int main() {

   int option , balance;
   
   // create new object of name (my_account) and catch the returned object in it from function 
   Account my_account = Create_Account();
   
   do{
       
        cout << endl;
        cout << "1. Display Balance " << endl;
        cout << "2. Depsoit Amount" << endl;
        cout << "3. Withdrawal Amount" << endl;
        cout << "4. Exit" << endl;
        
        cout << endl;
        cout << "You Option : " ;
        cin >> option ;
        
        if(option == 1)
        {
        	cout << endl;
            my_account.set_balance(balance);
            cout << endl;
        }
        else if(option == 2)
        {
        	int amount_to_be_deposit ;
        	
        	cout << endl;
        	cout << "Select Amount : " ;
        	cin >> amount_to_be_deposit ;
        	
        	// sending amount for depositing as an argument and then catching updated value / balance in balance variable ;
        	balance = my_account.deposit_amount(amount_to_be_deposit) ;
        	
        	cout << endl;
			cout << "Deposit Successfully !" << endl ;
			cout << "New Balance is " << balance ;	
			cout << endl;	     	
		}
		else if(option == 3)
		{
			int amount_to_be_withdrawal ;
			
			cout << endl;
			cout << "Select Amount : " ;
			cin >> amount_to_be_withdrawal ;
			
			// sending amount for withdrawal as an argument and then catching updated value / balance in balance variable ;
			balance = my_account.withdrawal_amount(amount_to_be_withdrawal);
			
			cout << endl;
			cout << "WithDrawal Successfully !" << endl;
			cout << "New Balance is " << balance << endl;
			cout << endl;
		}
		else if (option == 4)
		{
		//if user select 4 then break statement will be executed 
			break ;
		}
   
   
   }while(option != 4);
	// this do while loop will be executed till option variable is not equal to 4 ;

	cout << "Thanks for using our ATM !" << endl;
    return 0;
}