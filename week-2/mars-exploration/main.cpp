#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    string expectedMessage = "SOS";
    int expectedMessageIndex = 0;
    int result = 0;
    
    for(int i = 0; i< s.length(); i++)
    {
        if(s[i] != expectedMessage[expectedMessageIndex])
            result++;
            
        expectedMessageIndex++;
        
        if(expectedMessageIndex >=3)
            expectedMessageIndex = 0;
    }
    
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
