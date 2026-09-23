// We use C++ to create, open, read, write & modify file using C++
// We use <fstream> it provide
// ofstream - write | ifstream - read | fstream - read + write
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
// ----- WRITING INTO FILE -------------------------------------------------
    ofstream file("data.txt"); // Creates .txt file in current folder

    file << "Hello, User";    // Writes contents into data.txt
    file.close();             // Just closing the file
// -------------------------------------------------------------------------

// ----- READING FROM FILE -------------------------------------------------
    ifstream read_file("enum.cpp");  // Read the file 'enum.cpp' from current folder

    string line;    // Read each line into string 'line' using getline()

        while(getline(read_file, line))  // Get each line in the file using getline() into line
        {
            cout<< line << endl;     // Display each line
        }

        // Using while : can read contents & stops when there is empty line
//----------------------------------------------------------------------------------

// -------- CHECK IS FILE IS OPENED SUCEESSFULLY ------------------------------------
ifstream Check_file("enum.cpp");

if(!Check_file.is_open())   // is_open() return true is a file is opened succesfully
{
    cout<<"Cannot Open File!"<<endl;
}
// ----------------------------------------------------------------------------------

// ----- Append into file -----------------------------------------------------------
// Normally when we write into file, It clears all contents from file

ofstream append_file("data.txt", ios::app); // ios::app not clear existing data when open file
                                            // So, we can add contents into existing file
append_file << "Appended Contents...";
//--------------------------------------------------------------------------------------

// ----------- Using fstream -----------------------------------------------------------
fstream f_file("data.txt", ios::in | ios::out); // Now, we can use to read/write

f_file << "Writing To File";

f_file.seekg(0);    // Reset the file pointer to begining. After writing the pointer will be at 
                    // the end of file, then its nothing to read 
                    // so, we use seekg(0) to move pointer to the begining

getline(f_file, line);  // Read a line from file
cout<<line;

f_file.close();

return 0;
}