#pragma once

void f4t1()
{
	int x = 100;
	ofstream fout("file1.bin", ios::binary | ios::out);
	
	// The following line says that from the address &x read sizeof(x) number of bytes
	// and copy those bytes into the file at put pointer
	fout.write(reinterpret_cast<const char*>(&x), sizeof(x));

	fout.close();

	int xFromFile = 0;
	// now reading
	ifstream fin("file1.bin", ios::binary | ios::in);
	fin.read(reinterpret_cast<char*>(&xFromFile), sizeof(xFromFile));

	cout << "From file: " << xFromFile << endl;
}

void testFiles4()
{
	f4t1();
}