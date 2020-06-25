#include<iostream>
#include<string>
#include<map>

using namespace std;
int main(){
    map<string, string> lang;
    lang["Py"] = "Python";
    lang["cpp"] = "C Plus Plus";
    lang["js"]  = "JavaScript";
    lang["rb"] = "Ruby";
    lang["rb"] = "Ruby -one";

    lang.insert(make_pair("pl", "perl"));
    for (auto &val : lang){
        cout<<val.first << " : " << val.second << endl;
    }

    return 0;
}