#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{
    map<string, int> unmapint;
    unmapint["A1"] = 11;
    unmapint["B2"] = 22;
    unmapint["C3"] = 33;
    unmapint["D4"] = 44;
    unmapint["E5"] = 55;
    unmapint["F6"] = 66;
    unmapint["G7"] = 77;
    unmapint["H8"] = 88;

    // Traversing the unordered_map
    for (auto &it : unmapint)
        cout << "it.first:  " << it.first << "      " << "it.second   " << it.second << endl;

    if (unmapint.find("A1") == unmapint.end())
    {
        cout << "found" << endl;
    }

    unordered_map<string, double> unmap_double = {
        {"root1", 1.1},
        {"root2", 2.2},
        {"root3", 3.3},
        {"root4", 4.4},
    };
    unmap_double.insert({"PI", 3.142});
    unmap_double.insert(make_pair("Squareroot_2", 1.412));

    for (auto itr = unmap_double.begin(); itr != unmap_double.end(); itr++ )
    {
        cout << "itr.first:  " << itr->first << "      " << "itr.second   " << itr->second << endl;
    }

    return 1;
}