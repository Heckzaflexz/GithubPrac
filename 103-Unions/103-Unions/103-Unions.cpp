#include <iostream>
#include <string>

/*--------------------------------------Start of UNION-------------------------------------------------------------------*/
//enum flags are used to handle multiple scenarios 
//flags are mainly used in relation to the development side of things 
//-to handle user selectiion 


//Bold Italics Underline 

enum Flags
{
	None = 0,
	B = 1,
	I = 2,
	U = 4

};


void returnValue(int i)
{
	switch (i)
	{

	case 0:
		std::cout << "None\n";
			break;
	case 1:
		std::cout << "Bold\n";
			break;
	case 2:
		std::cout << "Italic\n";
			break;
	case 3:
		std::cout << "Bold and Italic\n";
			break;
	case 4:
		std::cout << "Underline\n";
			break;
	case 5:
		std::cout << "Underline and Bold\n";
			break;
	case 6:
		std::cout << "Italic and Underline\n";
			break;
	case 7:
		std::cout << "Bold Italic and Underline\n";
		break;
	}
}


int main()
{
	//bitwise or takes the binary of items being added and sums the binary 
	/*int test = Flags::B | Flags::I;
	std::cout << test << "\n";*/


	int flagInfo = 0;
	int flag;

	do
	{
		switch(flag)
		{
		case 1:
			flagInfo += B;
			break;

		case 2:
			flagInfo += I;
			break;

		case 3:
			flagInfo += U;

		}
	} while (flagInfo != 4);

	returnValue(flagInfo);
	


}






































//
//
///*--------------------------------------Start of UNION-------------------------------------------------------------------*/
//
////The size of this union is 4 bytes
//
////union Account
////{
////	std::string name; // 4 bytes
////	std::string email; // 4 bytes
////	std::string password; // 4 bytes
////	int age; // 1 byte
////};
//
////A union will take the largest data size allocate that memeory 
////An instance we could use an union is where there are different
////-options but only one of them may be used
//
//
//
//
//
//
//
//struct User
//{
//	std::string name;
//	std::string password;
//	int age;
//
//};
//
//
//struct Admin
//{
//	std::string name;
//	std::string pass;
//};
//
//union Account
//{
//	User user;
//	Admin admin;
//
//
//
//
//	//Default constructor
//
//	Account();
//};
//
//
//void runUser(User acc)
//{
//	//user functionality
//
//
//}
//
//
//void runAdmin(User acc)
//{
//	//Admin functionality
//
//
//}
//
//
//
//int main()
//{
//	//Instance of union. Allows one definition to hold one or two different types 
//	Account* acc = new Account();
//
//	int accessLevel = 0;
//
//	switch (/*fileContent*/)
//	{
//	case 0:
//		acc->user.name = "Name read from file";
//		acc->user.password = "Password from file";
//		acc->user.age = 0;
//		runUser(acc->user);
//		break;
//
//	case 1:
//		acc->admin.name = "Name read from file";
//		acc->admin.pass = "Password from file";
//		runAdmin(acc->user);
//		break;
//
//	}
//
//
//
//
//
//
//
//
//
//	//std::cout << "size of an int is " << sizeof(int) << "\n";
//	//std::cout << "size of a string is " << sizeof(std::string) << "\n";
//	//std::cout << "size of a bool is " << sizeof(bool) << "\n";
//	//std::cout << "size of a float  is " << sizeof(float) << "\n";
//	//std::cout << "size of a double is " << sizeof(double) << "\n";
//	//std::cout << "size of a long float " << sizeof(long float) << "\n";
//	//std::cout << "size of a long double is " << sizeof(long double) << "\n";
//
//
//}
//

/*--------------------------------------------------------End of UNION-------------------------------------------------------------------*/


