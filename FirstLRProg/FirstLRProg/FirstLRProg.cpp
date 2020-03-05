#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> PalindromFilter(vector<string> Words,int minLength) {
    for (size_t i = 0; i < (Words.size() - 1); ++i) {
        if (Words[i].size() < minLength)
        {
            Words.erase(i);
          
        }
        else
        {
            if (IsPalindrom(Words[i])) {
                Words.erase(i);
            }
        }
        return Words;
   }
}

bool IsPalindrom(string x) {
    string inX = "";
    int i = x.size() - 1;
    for (; i >= 0; --i) {
        inX += x[i];
    }
    if (inX == x) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{   
    vector<string> words;
    words.push_back("made");
    words.push_back("sskad");
    words.push_back("daddad");
    words.push_back("q");
    words.push_back("qwq");

    int minLength = 4;

    words=PalindromFilter(&words);

    cout << IsPalindrom(x);
    return 0;
}
