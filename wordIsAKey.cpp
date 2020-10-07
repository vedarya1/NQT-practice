#include <bits/stdc++.h>
using namespace std;

int main() 
{
  string str[16] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
  unordered_map<string,int> map;
  int check = 1;
  for(int i = 0; i < 16; i++) {
     map[str[i]]++;
   }
  string s ;
  getline(cin,s);
  for(auto a : map) {
  if(a.first == s) {
    cout << s << " " << "is a keyword";
    check = check - 1;
      break;}
    else { continue;}
  }
    if(check == 1) { 
    cout << s << " " << "is not a keyword";
      
    }
  /*for(int i = 0; i < 16; i++) {
    if(str[i] != s && i < 15) 
    {
      continue;
    }
    else if(str[i] == s) {
    cout << s << " " << "is a keyword";
      break;
    }
    else if(str[i] != s && i == 15){
    cout << s << " " << "is not a keyword";
    }
  }*/
 
  
  return 0;
}
