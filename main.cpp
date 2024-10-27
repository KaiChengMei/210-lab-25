#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
#include <fstream>
#include <algorithm>

using namespace std;
using namespace std::chrono;


vector<string> readdata( const string&  "codes.txt") {
    vector<string> data;
    ifstream fin( "codes.txt");
    string line;

    while ( getline(file,line) ) {
        data.push_back(line);
    }

    return data;
}

int mReadV(vecctor<string>& v, const vector<string>& data) {
    auto start = high_resolution_clock::now()
    v = data;
    auto end = high_resolution_clock::now()
    auto duration = duration_cast<milliseconds>(end - start)
    return duration.count();
}

int mReadL(list<string>& l, const vector<string>& data) {
    auto start = high_resolution_clock::now()
    
    auto end = high_resolution_clock::now()
    auto duration = duration_cast<milliseconds>(end - start)
    return duration.count();
}


int main() {
    // read data 
    




    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/