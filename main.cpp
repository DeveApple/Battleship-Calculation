#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define sp ' '
#define db(x) cerr << (#x) << ": " << x << el

void fastio(string input_filename = "", string output_filename = "")
{
    if (input_filename != "" && output_filename == "")
    {
        freopen((input_filename + ".INP").c_str(), "r", stdin);
        freopen((input_filename + ".OUT").c_str(), "w", stdout);
    }
    else if (input_filename != "" && output_filename != "") {
        freopen((input_filename + ".INP").c_str(), "r", stdin);
        freopen((output_filename + ".OUT").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    return;
}

void solve()
{
    

    return;
}

int main()
{
    fastio("input", "output");

    solve();

    return 0;
}