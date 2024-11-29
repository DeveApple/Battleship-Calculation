#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define sp ' '
#define db(x) cerr << (#x) << ": " << x << el
typedef pair<long long, long long> pll;

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

bool is_numb(string str) {
    for (auto c : str) {
        if (c < '0' || c > '9') return false;
    }
    return true;
}

string INPUT_UNREVEAL = "x", INPUT_EMPTY = "#", OUTPUT_REVEAL = ".";
map <string, vector <pll> > ship_piece; // map chua vi tri manh tau | pair chua x va y
map <string, string> ship_dir; // map chua huong cua tau 
map <string, long long> ship_len; // map chua do dai cua tau

void solve()
{
    long long H, W, K;
    cin >> H >> W >> K;

    for (long long i(1); i <= K; ++i) {
        long long v;
        ship_len[static_cast<char>(i + '0') + ""] = v;
    }
    vector <vector <string>> board(H, vector <string>(W));
    for (long long y(0); y < H ++y) {
        for (long long x(0); x < W; ++x) {
            string v;
            cin >> v;
            board[y][x] = v;
            if (!is_numb(v)) continue;
            ship_piece[v].emplace_back(pll(x, y));
            string cur_ship_dir = ship_dir[v];
            if (cur_ship_dir == "") { // chua co huong
                ship_dir[v] = "A"
            } else if (cur_ship_dir == "A") { // huong A
                
            }
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