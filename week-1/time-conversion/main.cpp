#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string format = s.substr(s.length() - 2);
    int hour = stoi(s.substr(0, 2));
    
    if (format == "AM" && hour == 12) {
        hour = 0;
    }        
    else if (format == "PM" && hour != 12) {
        hour += 12;
    }        
    
    stringstream ss;

    ss<<setw(2)<<setfill('0')<<hour;
    s.replace(0,2,ss.str());

    s=s.substr(0,8);

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
