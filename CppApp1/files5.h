#pragma once

enum PersonsOption
{
	InsertNewData = 1,
	UpdatePerson,
	DeletePerson,
	PrintAllPersons,
	PrintSpecificPerson,
	Exit
};

const int MAX_NAME_SIZE = 248;
const int RECORD_SIZE = sizeof(int) + MAX_NAME_SIZE + sizeof(int);

PersonsOption getMenuChoice();
bool openFile(fstream& fs, const char* fileName);
bool insertNewRecord(fstream& fs);
bool insertNewRecord(fstream& fs, int id, const char* nameBuffer, int age);
int getFileOffset(int id);
bool readRecord(fstream& fs, int id, char* nameBuffer, int& age, bool& readSuccess);
bool updateRecord(fstream& fs, int id, const char* newNameBuffer, int newAge);
bool updateRecord(fstream& fs);
void getParameters(int& id, char* nameBuffer, int& age);
void getIdParameter(int& id);
bool deleteRecord(fstream& fs);
bool deleteRecord(fstream& fs, int id);
bool recordExists(fstream& fs, int id);
void printAllRecords(fstream& fs);
void printSpecificPerson(fstream& fs);
void printSpecificPerson(fstream& fs, int id);

void RunApplication()
{
	const char* personsFileName = "persons.bin";
	fstream fs;
	if (!openFile(fs, personsFileName))
	{
		cerr << "The file could not be opened. Aborting the program.";
		abort();
	}

	PersonsOption option;
	do
	{
		option = getMenuChoice();
		switch (option)
		{
		case InsertNewData:
			insertNewRecord(fs);
			break;
		case UpdatePerson:
			updateRecord(fs);
			break;
		case DeletePerson:
			deleteRecord(fs);
			break;
		case PrintAllPersons:
			printAllRecords(fs);
			break;
		case PrintSpecificPerson:
			printSpecificPerson(fs);
			break;
		case Exit:
			return;
		default:
			cerr << "Unknown option passed. Aborting the program.";
			fs.close();	// close the file before aborting
			break;
		}
	} while (option != Exit);
}

PersonsOption getMenuChoice()
{
	cout << "\n\nEnter the choice according to the following menu:" << endl
		<< "\t1 - Insert New Record" << endl
		<< "\t2 - Update Existing Record" << endl
		<< "\t3 - Delete Existing Record" << endl
		<< "\t4 - Print All Records" << endl
		<< "\t5 - Print Specific Record" << endl
		<< "\t6 - Exit" << endl;
	int choice;
	cin >> choice;
	return (PersonsOption)choice;
}

void getIdParameter(int& id)
{
	cout << "Enter id of the person: ";
	cin >> id;
}

void getParameters(int& id, char* nameBuffer, int& age)
{
	getIdParameter(id);

	cout << "Enter the name of the person: ";
	cin.ignore();
	cin.getline(nameBuffer, MAX_NAME_SIZE);

	cout << "Enter age: ";
	cin >> age;
}

bool insertNewRecord(fstream& fs)
{
	int id, age;
	char nameBuffer[MAX_NAME_SIZE]{};

	getParameters(id, nameBuffer, age);
	return insertNewRecord(fs, id, nameBuffer, age);
}

bool recordExists(fstream& fs, int id)
{
	int testAge;
	char testNameBuffer[MAX_NAME_SIZE];
	bool readSuccess;
	return readRecord(fs, id, testNameBuffer, testAge, readSuccess);
}

bool insertNewRecord(fstream& fs, int id, const char* nameBuffer, int age)
{
	if (recordExists(fs, id))
	{
		// if the record having the same id exists already, do not create a new one!
		return false;
	}

	int offset = getFileOffset(id);
	fs.seekp(offset, ios::beg);

	fs.write(reinterpret_cast<const char*>(&id), sizeof(id));
	fs.write(nameBuffer, MAX_NAME_SIZE);
	fs.write(reinterpret_cast<const char*>(&age), sizeof(age));

	return true;
}

bool openFile(fstream& fs, const char* fileName)
{
	// first try to open the already existing file if it exists
	fs.open(fileName, ios::binary | ios::in | ios::out);
	if (!fs)
	{
		// if the file does not exist already, create a new file
		ofstream fout(fileName);
		if (!fout)
		{
			// if the file could not be created, there is some other issue which we can't handle!
			return false;
		}

		// now close the created file. It's purpose has been served.
		fout.close();
		
		fs.open(fileName, ios::binary | ios::in | ios::out);
		if (!fs)
		{
			// if the file could not be opened, there is some other issue which we can't handle!
			return false;
		}

		return true;
	}

	return true;
}

inline int getFileOffset(int id)
{
	return RECORD_SIZE * (id - 1);
}

bool readRecord(fstream& fs, int id, char* nameBuffer, int& age, bool& readSuccess)
{
	readSuccess = true;
	int offset = getFileOffset(id);
	fs.seekg(offset, ios::beg);
	fs.read(reinterpret_cast<char*>(&id), sizeof(id));

	if (!fs)	// check if read operation failed
	{
		readSuccess = false;
		fs.clear();	// reset the flag
		return false;
	}

	if (id == 0)	// check if the record exists, if not exists, return false
	{
		return false;
	}

	// since the id was read successfully, we are sure that there are more bytes to follow.
	// so the following operations are safe.
	fs.read(nameBuffer, MAX_NAME_SIZE);
	fs.read(reinterpret_cast<char*>(&age), sizeof(age));

	return true;
}

bool updateRecord(fstream& fs, int id, const char* newNameBuffer, int newAge)
{
	if (!recordExists(fs, id))
	{
		return false;
	}

	int offset = getFileOffset(id) + sizeof(int);	// we don't want to change the id
	fs.seekp(offset, ios::beg);

	fs.write(newNameBuffer, MAX_NAME_SIZE);
	fs.write(reinterpret_cast<const char*>(&newAge), sizeof(newAge));

	return true;
}

bool updateRecord(fstream& fs)
{
	int id, age;
	char nameBuffer[MAX_NAME_SIZE]{};

	getParameters(id, nameBuffer, age);

	return updateRecord(fs, id, nameBuffer, age);
}

bool deleteRecord(fstream& fs, int id)
{
	if (!recordExists(fs, id))
	{
		return false;
	}

	char nullArray[RECORD_SIZE]{};
	int offset = getFileOffset(id);
	fs.seekp(offset, ios::beg);

	fs.write(nullArray, RECORD_SIZE);
	return true;
}

bool deleteRecord(fstream& fs)
{
	int id;
	getIdParameter(id);

	return deleteRecord(fs, id);
}

void printAllRecords(fstream& fs)
{
	cout << left << setw(10) << "ID" << left << setw(35) << "Name" << "Age" << endl;
	
	bool readSuccess = true;
	for (int id = 1; readSuccess; id++)
	{
		int age;
		char nameBuffer[MAX_NAME_SIZE];

		// print only the read records
		if (readRecord(fs, id, nameBuffer, age, readSuccess))
		{
			cout << left << setw(10) << id << left << setw(35) << nameBuffer << age << endl;
		}
	}
}

void printSpecificPerson(fstream& fs, int id)
{
	int age;
	char nameBuffer[MAX_NAME_SIZE];
	bool readSuccess;
	if (readRecord(fs, id, nameBuffer, age, readSuccess))
	{
		cout << " ID: " << id << endl
			<< " Name: " << nameBuffer << endl
			<< " Age: " << age << endl;
	}
	else
	{
		cout << "Record with ID " << id << " does not exist." << endl;
	}
}

void printSpecificPerson(fstream& fs)
{
	int id;
	getIdParameter(id);

	printSpecificPerson(fs, id);
}

void testFiles5()
{
	RunApplication();
}