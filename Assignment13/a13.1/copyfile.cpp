// CH-230-A
// a13_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char **argv) {
    string inputFile, extension, outputFile;
    string copyFile = "_copy";

    cout << "Enter file name: ";
    cin >> inputFile;

    //Stores name of output file
    for (int i = 0; i < (int)inputFile.length(); i++) {
        if (inputFile[i] == '.') {
            //copying input to output
            outputFile.append(inputFile, 0, i);
            //then copy extension
            extension.append(inputFile, i);
            //adds _copy
            outputFile.append(copyFile);
            //then add an extension to outputFile
            outputFile.append(extension);
            break;
        }
    }

    ifstream in(inputFile);
    // Check if it opens successfully
	if (!in.good()) {
        cerr << "Couldn't open input file!" << endl;
        exit(1);
    }

    string temp;
    ofstream out(outputFile);
    // Check if it opens successfully
	if (!out.good()) {
        cerr << "Couldn't open input file!" << endl;
        exit(2);
    }
    else{
        while (getline(in,temp)) {
            out << temp << "\n";
        }
    }
    in.close();
    out.close();
    return 0;
}
