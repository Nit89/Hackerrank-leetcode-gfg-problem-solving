#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
 long strLength = s.length();

    // Count the number of 'a' in the given string
    int count = 0;
    for (int i = 0; i < strLength; i++) {
      if (s[i] == 'a') {
        ++count;
      }
    }

    long repeatedTimes = n / strLength;

    // Find the length of string left after repetitions
    long stringLeftLength = n - (strLength * repeatedTimes);

    // Count the remaining repetitions
    int extra = 0;
    for (int i = 0; i < stringLeftLength; i++) {
      if (s[i] == 'a') {
        ++extra;
      }
    }

    long totalCount = (repeatedTimes * count) + extra;

    return totalCount;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
