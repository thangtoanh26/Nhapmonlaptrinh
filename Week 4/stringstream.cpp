#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseIntg(string str) {
    stringstream ss(str);
    vector<int> tokens;
    string token;
    char delimeter = ',';
    while (getline(ss, token, delimeter)) {
        tokens.push_back(stoi(token));
    }
    return tokens;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseIntg(str);
    for (auto i : integers) {
        cout << i << endl;
    }
}
