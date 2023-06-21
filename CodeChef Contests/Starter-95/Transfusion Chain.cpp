#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<string, int> bloodTypeCounts;
        bloodTypeCounts["A"] = 0;
        bloodTypeCounts["B"] = 0;
        bloodTypeCounts["AB"] = 0;
        bloodTypeCounts["O"] = 0;

        for (int i = 0; i < n; i++) {
            string bloodType;
            cin >> bloodType;
            bloodTypeCounts[bloodType]++;
        }

        int maxCount = 0;
        unordered_set<string> bloodGroupsInMaxCount;

        maxCount = max(maxCount, bloodTypeCounts["A"] + bloodTypeCounts["AB"]);
        bloodGroupsInMaxCount.insert("A");
        bloodGroupsInMaxCount.insert("AB");

        maxCount = max(maxCount, bloodTypeCounts["B"] + bloodTypeCounts["AB"]);
        bloodGroupsInMaxCount.insert("B");
        bloodGroupsInMaxCount.insert("AB");

        maxCount = max(maxCount, bloodTypeCounts["AB"]);
        bloodGroupsInMaxCount.insert("AB");

        maxCount += bloodTypeCounts["O"];
        bloodGroupsInMaxCount.insert("O");

        cout << maxCount << '\n';
    }

    return 0;
}
