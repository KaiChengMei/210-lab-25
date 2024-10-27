#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <set>
#include <fstream>
#include <algorithm>

using namespace std;
using namespace std::chrono;


vector<string> readdata( const string&  fn) {
    vector<string> data;
    ifstream fin(fn);
    string line;

    while ( getline(fin,line) ) {
        data.push_back(line);
    }

    return data;
}

int mReadV(vector<string>& v, const vector<string>& data) {
    auto start = high_resolution_clock::now();
    v = data;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    return duration.count();
}

int mReadL(list<string>& l, const vector<string>& data) {
    auto start = high_resolution_clock::now();
    l.assign(data.begin(), data.end());
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    return duration.count();
}

int mReadS(set<string>& s, const vector<string>& data) {
    auto start = high_resolution_clock::now();
    s.insert(data.begin(), data.end());
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    return duration.count();
}


int main() {
    string fn = "codes.txt";
    // read data 
    vector<string> data = readdata(fn); 
    vector<string> v;
    list<string> l;
    set<string> s;



    int readVectorTime = mReadV(v, data);
    int readListTime = mReadL(l, data);
    int readSetTime = mReadS(s, data);
    cout << " Read " << readVectorTime << "      " << readListTime << "      " << readSetTime << endl;




    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/