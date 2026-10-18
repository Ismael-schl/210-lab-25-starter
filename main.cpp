//Lab 25|COMSC 210|Ismael Hadi
#include <iostream>
#include <chrono>
#include <set>
#include <list>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

const int NUM_CODES = 20000;

//function protypes for functions that add elements for every container type
void add_item(vector<string> &v, const string &s);
void add_item(list<string> &v, const string &s);
void add_item(set<string> &v, const string &s);

int readTime()

int main() {
    list<string> myList;
    set<string> mySet;
    vector<string> myVec;
    ifstream fin("codes.txt");
    string line;
    while (getline(fin, line)) {
        myList.push_back(line);
    }
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
void add_item(vector<string> &v, const string &s) {
    v.push_back(s);
}

void add_item(vector<string> &v, const string &s) {
    v.push_back(s);
}

void add_item(vector<string> &v, const string &s) {
    v.push_back(s);
}