#include <bits/stdc++.h>
using namespace std;

bool byCount (pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second) 
       return a.first < b.first;
        return a.second > b.second;
}

int main() {
    vector<string> logbook = {"Rafi", "Nadia", "Rafi", "Tanvir", "Nadia", "Rafi"};

    set<string> students;
    map<string, int> cnt;

    for(string name: logbook) {
        students. insert(name);
        cnt[name]++;
    }
    cout << "Unique students: " << students.size() << "\n";
    vector<pair<string, int>> board(cnt.begin(), cnt.end());

    sort(board.begin(), board.end(), byCount);
    for (auto p: board) 
        cout << p.first << ":" << p.second << "\n";

    return 0;
}
