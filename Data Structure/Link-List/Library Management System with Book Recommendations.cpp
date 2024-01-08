#include <iostream>
using namespace std;

struct node{
	
    int ISBN;
    string author;
    string title;
    string genre;
    int day, month, year;
    node *next;
    node *prev;

    node(int ISBN, string author, string title, string genre, int day, int month, int year){
    	
        this->ISBN = ISBN;
        this->author = author;
        this->title = title;
        this->genre = genre;
        this->day = day;
        this->month = month;
        this->year = year;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkList{
private:
    node *head;
    node *temp;
    node *newNode;

public:
    DoublyLinkList(){
        head = NULL;
        temp = NULL;
        newNode = NULL;
    }

    void insertAtHead(int ISBN, string author, string title, string genre, int day, int month, int year){
        newNode = new node(ISBN, author, title, genre, day, month, year);
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }

        head = newNode;
        cout << endl << "Book Successfully Added" << endl;
    }

    void insertAtPosition(int ISBN, string author, string title, string genre, int day, int month, int year){
        if (head == NULL || 
			(head->year > year) ||
			(head->year == year && head->month > month) ||
            (head->year == year && head->month == month && head->day >= day)) {
            insertAtHead(ISBN, author, title, genre, day, month, year);
            return;
        }

        temp = head;

        while (temp->next != NULL &&
               !(temp->next->year > year || 
			   (temp->next->year == year && temp->next->month > month) ||
                (temp->next->year == year && temp->next->month == month && temp->next->day >= day))){
            temp = temp->next;
        }

        newNode = new node(ISBN, author, title, genre, day, month, year);
        newNode->next = temp->next;

        if (temp->next != NULL){
            temp->next->prev = newNode;
        }

        newNode->prev = temp;
        temp->next = newNode;

        cout << endl << "Book Successfully Added" << endl;
    }

    void DeleteHead() {
        if (head->next == NULL){
            delete head;
            head = NULL;
            cout << endl << "Book Removed" << endl;
            return;
        }

        temp = head;

        head = head->next;
        head->prev = NULL;

        delete temp;
        cout << endl << "Book Removed" << endl;
        temp = NULL;
    }

    void Delete(){
        if (head == NULL){
            cout << endl << "Nothing to Delete" << endl;
            return;
        }

        Display();

        int isbn;
        cout << "Enter ISBN Number: ";
        cin >> isbn;

        temp = head;

        while (temp != NULL){
            if (temp->ISBN == isbn){
                if (temp == head) {
                    DeleteHead();
                } else {
                    temp->next->prev = temp->prev;
                    temp->prev->next = temp->next;
                    delete temp;
                    cout << endl << "Book Removed" << endl;
                }
                return;
            }

            temp = temp->next;
        }
    }

    void Display(){
        if (head == NULL){
            cout << endl << "Nothing to Display!" << endl;
            return;
        }

        temp = head;
        int i = 1;
	
		cout << endl;
        while (temp != NULL){
            cout << "Information of Book no " << i << endl;
            i++;
            cout << "ISBN: " << temp->ISBN << endl;
            cout << "Author: " << temp->author << endl;
            cout << "Title: " << temp->title << endl;
            cout << "Genre: " << temp->genre << endl;
            cout << "Date of Publication: " << temp->day << "/" << temp->month << "/" << temp->year << endl << endl;
            temp = temp->next;
        }

        cout << endl;
    }

    void Search(){
        if (head == NULL){
            cout << endl << "Books are not Available!" << endl;
            return;
        }

        int isbn;
        cout << "Enter ISBN Number: ";
        cin >> isbn;

        bool isFound = false;

        temp = head;

        while (temp != NULL){

            if (temp->ISBN == isbn){
                cout << "ISBN: " << temp->ISBN << endl;
                cout << "Author: " << temp->author << endl;
                cout << "Title: " << temp->title << endl;
                cout << "Genre: " << temp->genre << endl;
                cout << "Date of Publication: " << temp->day << "/" << temp->month << "/" << temp->year << endl;
                isFound = true;
                break;
            }

            temp = temp->next;
        }

        if (!isFound){
            cout << endl << "Book not Available !" << endl;
        }
    }

	
	void Recommend(){
		
	    if (head == NULL) {
	        cout << "Nothing to Recommend" << endl;
	        return;
	    }
	    
	    newNode = NULL;
	
	    string bookName;
	    
	    cout << "Enter Book Name: ";
	    fflush(stdin);
	    getline(cin, bookName);
	
	    // 1. to find the book.
	    // 2. to find same genre books as the user searched
	
	    // 1
	    temp = head;
	    while (temp != NULL) {
	        if (temp->title == bookName) {
	            newNode = temp;
	            break;
	        }
	
	        temp = temp->next;
	    }
	
	    // 2
	    int i = 1;
	    temp = head;
	
		if(newNode != NULL){
			
	   		cout << endl << "Recommended Books:- " << endl;
		    
			while (temp != NULL) {
		        // i <= 3 because I have to recommend a maximum of 3 books to the user
		        if (newNode != NULL && temp != newNode && newNode->genre == temp->genre && i <= 3){
		            cout << i << ". " << temp->title << endl;
		            i++;
		        }
		
		        temp = temp->next;
		    }
		
		} else {
			cout << endl << "Recommended Book's Not Available !" << endl << endl;
		}  
	}

};

int main(){
	
   	int option;
	
	int ISBN;
	string author;
	string title;
	string genre;
	int day, month, year;
	
	DoublyLinkList list;

    do{
		cout << endl;
		cout << "1. Add a Book" << endl;
		cout << "2. Delete a Book" << endl;
		cout << "3. Display Books" << endl;
		cout << "4. Search a Book" << endl;
		cout << "5. Recommend Books" << endl;
		cout << "0. Exit" << endl << endl;
		cout << "Your Option: ";
		cin >> option;
		cout << endl;
		
		if(option == 1){
			
			cout << endl << "Enter the following Data for Book:-" << endl;
			cout << "ISBN: ";
			cin >> ISBN;
			cout << "Author: ";
			fflush(stdin);
			getline(cin, author);
			cout << "Title: ";
			fflush(stdin);
			getline(cin, title);
			cout << "Genre: ";
			fflush(stdin);
			getline(cin, genre);
			cout << "Now Enter the Date of Publication:-" << endl;
			
			do{
				
				cout << "Day: ";
				cin >> day;
			
				if(day > 31){
					cout << endl <<  "Day Should between '1 - 31' " << endl << endl;
				}
			
			} while(day > 31);
			
			do{
				
				cout << "Month: ";
				cin >> month;
				
				if(month > 12){
					cout << endl << "Month Should between '1 - 12' " << endl << endl;
				}
				
			}while( month > 12);
			
			do{
				
				cout << "Year: ";
				cin >> year;
				
				if(year > 2023){
					cout << endl << "Year Should Below or Equal than Current Year" << endl << endl; 
				}
				
			} while(year > 2023);
					
			list.insertAtPosition(ISBN, author, title, genre, day, month, year);
			
		} else if(option == 2){
			list.Delete();
		} else if(option == 3){
			list.Display();
		} else if(option == 4){
		    list.Search();
		} else if(option == 5){	
			list.Recommend();
		} else if(option == 0){
			break;
		} else {
			cout << endl << "Invalid Input " << endl << endl;
		}
		
	}while(option != 0);
	
	return 0;
}