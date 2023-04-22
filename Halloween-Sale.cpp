#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'howManyGames' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER d
 *  3. INTEGER m
 *  4. INTEGER s
 */

int howManyGames(int p, int d, int m, int s)
{
    int count = 0;
    
    while (s >= p)
    {
        s -= p;
        p = std::max(p-d, m);
        count++;
    }
    
    return count;
}
