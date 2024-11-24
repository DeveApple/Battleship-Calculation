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

string INPUT_UNREVEAL = "x", INPUT_EMPTY = "#", OUTPUT_REVEAL = ".";

void solve()
{
    long long H, W, K;
    cin >> H >> W >> K;

    vector <long long> ship_list(K+1);
    for (long long i(1); i <= K; ++i) {
        cin >> ship_list[i];
    }
    vector <vector <string>> board(H, vector <string>(W));
    for (long long y(0); y < H ++y) {
        for (long long x(0); x < W; ++x) {
            cin >> board[y][x];
        }
    }

    

    return;
}

int main()
{
    fastio("input", "output");

    solve();

    return 0;
}