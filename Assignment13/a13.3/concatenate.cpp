// CH-230-A
// a13_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string file;
    int n;
    cout << "Number of files: ";
    cin >> n;

    ofstream out("concatn.txt", ios::binary | ios::trunc);
    if (!out.good()) {
        cout << "Error detected!" << endl;
        exit(1);
    }
    
    for (int i = 0; i < n; i++) {
        cin >> file;
        ifstream in(file, ios::binary);
        if (!in.good()) {
            cout << "Error detected! "
                << file << endl;
            exit(2);
        }

        if (in.is_open() && out.is_open()) {
            in.seekg(0, ios::end); 
            int lFILE = in.tellg();
            in.seekg(0, std::ios::beg); 

            char *buf = new char[lFILE];
            in.read(buf, lFILE);
            out.write(buf, lFILE); 
            out << endl;

            delete [] buf;
        }
        in.close(); 
    }
    out.close();
    return 0;
}