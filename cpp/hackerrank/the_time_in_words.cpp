#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    string numbers[31] = {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine",
            "ten",
            "eleven",
            "twelve",
            "thirteen",
            "fourteen",
            "quarter",
            "sixteen",
            "seventeen",
            "eighteen",
            "nineteen",
            "twenty",
            "twenty one",
            "twenty two",
            "twenty three",
            "twenty four",
            "twenty five",
            "twenty six",
            "twenty seven",
            "twenty eight",
            "twenty nine",
            "half"
    };

    // Until 30 minutes we want to say the current hour, else, we want to say the next
    // Example:
    // 5:30 -> half past five
    // 5:45 -> quarter to six
    const string hourStr = m <= 30 ? numbers[h] : numbers[h + 1];
    string minutesStr = m <= 30 ? numbers[m] : numbers[60 - m];
    if (m == 1) {
        minutesStr += " minute";
    } else if (m > 1 && m != 15 && m != 45 && m != 30) {
        minutesStr += " minutes";
    }

    if (m == 0) {
        return hourStr + " o' clock";
    }

    if (m <= 30) {
        return minutesStr + " past " + hourStr;
    }

    return minutesStr + " to " + hourStr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
