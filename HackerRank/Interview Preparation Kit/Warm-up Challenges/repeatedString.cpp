//https://www.hackerrank.com/challenges/repeated-string/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int l = s.length();
    long r = n%l;    
    int cnt =0;
    vector <int> pos;
    for(int i=0; i < l; i++){
        if(s[i]=='a'){
            pos.push_back(i);
            cnt++;
        }
    }
    long res = (n/l)*cnt;
    for(int i=0; i<pos.size(); i++){
        if(pos[i] < r){
            res += 1;
        }
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

// Sample Input 

// aba
// 10

// Sample Output 

// 7