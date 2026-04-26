#include <iostream>
using namespace std;



int main() {
    string dispatchPhrases[4] = {"Citizen", "report", "detected", "miscount"};
    int i = 0;
    string* pDispatchPhrases = dispatchPhrases;
    
    while (i < 4) {
        cout << *pDispatchPhrases << " <BEEP>" << endl;
        i++;
        pDispatchPhrases++;
    }
}