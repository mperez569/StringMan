#include <iostream>
using namespace std;

int main()
{
    string name = "Margin Butters";
    cout << name << endl;
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    /*
    name.push_back('a');
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }

    name.pop_back();
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    */

    int pos = name.find("Butters");
    int len = name.length();
    cout << "Butters is located at " << pos << endl;
    string lname;
    lname = name.substr(pos, len - pos);
    cout << lname << endl;

    lname = name.replace(pos, len - pos, "Leopold");
    cout << lname << endl;
    len = name.length();

    lname = name.insert(len, "Butters");
    cout << lname << endl;

    pos = name.find("Butters");
    len = name.length();
    lname = name.erase(pos, len - pos);
    cout << lname << endl;
}
