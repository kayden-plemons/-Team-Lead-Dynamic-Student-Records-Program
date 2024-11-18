#include "krp0190Project3_header.h"
int main ()
{
	cout<<endl;
	cout<<"\t"<<"\t"<<"Computer Science and Engineering"<<endl;
	cout<<"\t"<<"\t"<<"CSCE 1030 - Computer Science I"<<endl;
	cout<<"\t"<<"Kayden Plemons, krp0190, kaydenplemons@my.unt.edu"<<endl;
	cout<<"\t"<<"Hansley Omonzane, heo0024, hansleyomonzane@my.unt.edu"<<endl;
	cout<<"\t"<<"Micheal Egboh, mce0100, michealegboh@my.unt.edu"<<endl;
	cout<<"\t"<<"Sunita Abbasi, sqa0009, sunnitaabbasi@my.unt.edu"<<endl;
	cout<<endl;
	
	
	int choice = 0;
    while (choice != Exit) //while loop with switc case to display menu options until exit 
    {
		cout<<endl;
        cout << "Menu Options:" << endl;
        cout << "1. Add a new student." << endl;
        cout << "2. Remove student record." << endl;
        cout << "3. Display all records." << endl;
        cout << "4. Search for student." << endl;
        cout << "5. Export to file." << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        char input[15];
        cin >> input;
        choice = atoi(input);

        switch (choice)
        {
        case Add:
            add_Student();
            break;

        case Remove:
            cout << "Enter Student ID: ";
            int removeID;
            cin >> removeID;
            remove_student(removeID);
            break;

        case Display:
            display();
            break;

        case Search:
            cout << "Enter Student ID to search: ";
            int searchID;
            cin >> searchID;
            search(searchID);
            break;

        case Results:
            exportResults();
            break;

        case Exit:
            cout << "Goodbye!" << endl;
			cout<<endl;
            break;

        default:
            cout << "Invalid choice. Please choose a valid option from the menu." << endl;
            break;
        }
    }
	
	return 0;
}