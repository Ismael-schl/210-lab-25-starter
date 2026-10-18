//Lab 25|COMSC 210|Ismael Hadi
#include <iostream>
#include <chrono>
#include <set>
#include <list>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
using namespace chrono;
const int NUM_CODES = 20000;

//function protypes for functions that add elements for every container type
void add_item(vector<string> &v, const string &s);
void add_item(list<string> &l, const string &s);
void add_item(set<string> &se, const string &s);

//read time calculator function that works for all three data types
template <typename Container>
int readTime(Container &c);

//sort functions for vectors and lists, respectively
void sort_c(vector<string> &v);
void sort_c(list<string> &l);

//sort time function that works for vectors and lists
template <typename Container>
Container sortTime(Container &c);

int main() {
    list<string> myList;
    set<string> mySet;
    vector<string> myVec;
    

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

void add_item(list<string> &l, const string &s) {
    l.push_back(s);
}

void add_item(set<string> &se, const string &s) {
    se.insert(s);
}

//read time calculator function that works for all three data types
template <typename Container>
int readTime(Container &c) {
    ifstream fin("codes.txt");
    string line;
    auto start = high_resolution_clock::now()
    while (getline(fin, line)) {
        add_item(c,line);
    }
    auto end = high_resolution_clock::now();
    fin.close();
    auto duration = duration_cast<nanoseconds>(end-start);
    return (int)duration.count();
}

//sort functions for vectors and lists, respectively
void sort_c(vector<string> &v) {

}
void sort_c(list<string> &l) {
    l.sort();
}

//sort time function that works for vectors and lists
template <typename Container>
Container sortTime(Container &c) {

}