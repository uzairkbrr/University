//Write a program in C++ where there is a class named Favourite_Songs, it contains
//the size of the array (string array) and a pointer to dynamic array of strings
//containing the song names. The class should have a methods for adding a new song
//addSong(string song). This method will create another array of size+1, copy the
//values from the previous array into that array along with the new song), deleteing a
//song (now think of the logic to delete a song and update the array), updating the
//song, printing the songs. Make use of the new and delete keyword where required.
//The program must have a copy constructor that creates a deep copy of the object
//passed. Copy constructor should be called when the user selects Create backup of
//the songs.The class should also have the destructor.

#include <iostream>
#include <fstream>
using namespace std;

class fav_naat{
		
	private:
        int size;
        string* naat;
        
    public:
    	// constructer that set the size for naats ;
    	fav_naat(int size)
		{
    		this->size = size ; // setting size from user on run time;
    		this->naat = new string[size] ; //dynamic array of string data type 

		}
		
		// copy constructer 
		fav_naat(fav_naat &obj)
		{
			this->size = size ; // setting size from user on run time;
    		this->naat = new string[size] ; //dynamic array of string data type;
			
			for(int i=0 ; i<size ; i++)
			{
				this->naat[i] = obj.naat[i]; // copying all the naats from obj to new object 	
			}			
		}

		// function to add new naat
        void add_naat(string naat_to_add) 
		{
            // Creating new array of size+1;
            // Create arrow of size+1 because we have to add a naat to our collection;
			// so the size of our collection will be increased by 1;
            string* new_naat = new string[size+1];
            
            // To Copy the values from the previous array into the new array
            for (int i = 0; i < size; i++) 
			{
                new_naat[i] = naat[i];
            }
            
            // Adding new naat;
            
            // new_naat[size] means last index ;
            // adding new naat to the last index ;
            new_naat[size] = naat_to_add;
            
            // Deleting the previous array;
            delete[] naat;
            
            // Set the new array as the naat array;
            // i delete naat array and now i assign new_naat array to it because new_array have updated naats;
            naat = new_naat;
            
            // increasing the size of our collection by 1;
            size++;
            
            cout << endl;
            cout << " -------------------------------" << endl;
            cout << "| Naat Added to your Collection |" << endl;
            cout << " -------------------------------" << endl;
        }
        
        // function to delete a naat
        void Delete_naat(string naat_to_delete) 
		{
            // Find the index of the naat
            int index = -5; // setting index to negative value 
            
            for (int i = 0; i < size; i++) 
			{
				// checking if the naat is available in our collection or not
                if (naat[i] == naat_to_delete)
				{
					// if naat is available in our collection then assign that index no to "index" varibale 
                    index = i;
                    
                    // if we found naat in our collection then "break" ; go outside from loop
                    break;
                }
            }
            
            
            // If the naat is found, delete it and update the array
            // if index varibale is not equal to the negative value which we assigned it in time of declaration 
            // its mean we found naat in our collection and index variable have now the index of naat;
            if (index != -5) 
			{
                // Create a new array of size-1
             	// Create arrow of size-1 because we have to delete a naat from our collection;
				// so the size of our collection will be decreased by 1;
				     
                string* new_naat = new string[size - 1];
                
                // Copying the values from the previous array into the new array;
                
                int j = 0 ; // this variable is for the indexing of new array; 
                
                for (int i = 0; i < size; i++) 
				{
					// when index of this array is not equal to the index varibale in which we have the index of "naat" which user want to delete 
					// because we dont want to copy that "naat" which user want to delete 
                    if (i != index) 
					{
                        new_naat[j] = naat[i];
                        
                        j++; // increment in j variable when 1 naat is copied in new array to shift to next index;
                    }
                }
                
                // Now Delete the previous array;
                delete[] naat;
                
                // Setting the new array as the naat's array;
                // i delete naat array and now i assign new_naat array to it because new_array have updated naats;
                naat = new_naat;
                
                // decreasing the size of our collection by 1;
                // because we delete 1 naat from our collection so array size must be decreased by 1;
                size--; 
                
                cout << endl;
                cout <<  "-----------------------------------" << endl;
                cout << "| Naat Deleted from your Collection | " << endl;
                cout <<  "-----------------------------------" << endl;

                
                
            }
            else if( index == -5)
            {
            	cout << endl;
            	cout << "Naat Not Found !" << endl;
			}
        }
        
         // Function to update a naat of our collection;
         
        void Update_naat(int index, string naat_to_update) 
		{
            // If the index is valid, update the song
            // means that index is positive and lesser then size of array;
            if (index >= 0 && index < size) 
			{
				// setting the new naat to the selected index number of array; 
                naat[index] = naat_to_update;
            }
            
            cout << endl;
            cout << " ---------------------------" << endl;
            cout << "| Naat Successfully Updated | " << endl;
            cout << " ---------------------------" << endl;
            
        }

         // Function to print the naats
        void Print_naats() 
		{
			cout << endl;
			cout << " ------------------------" << endl;
			cout << "| Your Naat's Collection | " << endl;
			cout << " ------------------------" << endl;

			
            for (int i = 0; i < size; i++) 
			{
				cout << i+1 << ") " ;
                cout << naat[i] << endl;
            }
        }
        

		// Destructer
		// whenever destructer called then it will delete the naats 
		~fav_naat()
		{
			delete[] naat;
		}
};

int main(){
	
	int size = 0 ; // Catching the size of user will for naat collection;
	int option , naat_index_to_update ;
	string naat_name_to_update,  naat_to_delete , naat_to_add;
	
	int index_count = 0 ;
	
	
	// now creating array of fav_naat class and setting the size of array of user will ;
	fav_naat my_naats(size); 
	
	do{
		
		cout << endl;
		cout << " -------------------" << endl;
		cout << "| 1. Display Naat's |" << endl;
		cout << "| 2. Update Naat    |" << endl;
		cout << "| 3. Delete Naat    |" << endl;
		cout << "| 4. Add Naat 	    |" << endl;	
		cout << "| 5. Exit           |" << endl;
		cout << " -------------------" << endl;

		cout << endl;
		cout << "Your Option => " ;
		cin >> option ;
		cout << endl;
		
		if(option == 1)
		{
			my_naats.Print_naats();

		}
		else if(option == 2)
		{
			cout << endl;
			cout << "On which Index do you want to update the naat (0 - " << index_count-1 << ") => " ;
			cin >> naat_index_to_update ;
			cout << endl;
			cout << "Enter New Naat Name => " ;
			fflush(stdin);
			getline(cin ,naat_name_to_update);
			
			// sending naat_index_to_update-1 because i take input according to size and array start from 0 ;
			my_naats.Update_naat(naat_index_to_update, naat_name_to_update);
		}
		else if(option == 3)
		{
			cout << "Enter Naat Name which you want to delete => " ;
			fflush(stdin);
			getline(cin, naat_to_delete);
			my_naats.Delete_naat(naat_to_delete);
			index_count--;
		}
		else if(option == 4)
		{
			cout << "Enter New Naat Name for your collection => " ;
			fflush(stdin);
			getline(cin, naat_to_add);
			my_naats.add_naat(naat_to_add);
			index_count++;
		}
		else if(option == 5)
		{
			break;
		}
		else 
		{
			cout << "Input Valid !" << endl;
		}
		
	}while(option != 5);
	
	cout << " -------------------------------" << endl;
	cout << "| Thank's for Using our Program |" << endl;
	cout << " -------------------------------" << endl;

	
	return 0;
}