#include <iostream>
#include <string>
#include <vector>

using namespace std;


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

vector<string> PalindromFilter(vector<string> &Words,int minLength) {
    for (size_t i = 0; i < Words.size() ; i++) {
        if (Words[i].size() < minLength)
        {
            Words.erase(Words.begin() + i);
          
        }
        else
        {
            if (IsPalindrom(Words[i])) {
                Words.erase(Words.begin() + i);
            }
        }
        return Words;
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

    vector<string> wordsnew=PalindromFilter(words, 3);
    for(size_t i = 0; i < wordsnew.size() ; i++){
         cout << wordsnew[i]<<endl;
    }
    return 0;
}
