#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    map<char, char>MAP;
    MAP['2'] = '`';
    MAP['3'] = '1';
    MAP['4'] = '2';
    MAP['5'] = '3';
    MAP['6'] = '4';
    MAP['7'] = '5';
    MAP['8'] = '6';
    MAP['9'] = '7';
    MAP['0'] = '8';
    MAP['-'] = '9';
    MAP['='] = '0';
    MAP['e'] = 'q';
    MAP['r'] = 'w';
    MAP['t'] = 'e';
    MAP['y'] = 'r';
    MAP['u'] = 't';
    MAP['i'] = 'y';
    MAP['o'] = 'u';
    MAP['p'] = 'i';
    MAP['['] = 'o';
    MAP[']'] = 'p';
    MAP['\\'] = '[';
    MAP['d'] = 'a';
    MAP['f'] = 's';
    MAP['g'] = 'd';
    MAP['h'] = 'f';
    MAP['j'] = 'g';
    MAP['k'] = 'h';
    MAP['l'] = 'j';
    MAP[';'] = 'k';
    MAP['\''] = 'l';
    MAP['c'] = 'z';
    MAP['v'] = 'x';
    MAP['b'] = 'c';
    MAP['n'] = 'v';
    MAP['m'] = 'b';
    MAP[','] = 'n';
    MAP['.'] = 'm';
    MAP['/'] = ',';
    MAP[' '] = ' ';
    while (getline(cin, str))
    {
        for (int i = 0; i<str.length(); i++)
        {
            cout << MAP[str[i]];
        }
        cout << "\n";
    }
}