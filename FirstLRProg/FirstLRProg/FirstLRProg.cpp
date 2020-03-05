#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string x;
    cin >> x;
    string invariantX="";
    int i=x.size()-1;
    for(;i>=0;--i) {
        invariantX+=x[i];
    }
    if (invariantX==x) {
       cout << "true" << endl; 
    } else {
        cout<< "false"<< endl;
    }
    return 0;
}
