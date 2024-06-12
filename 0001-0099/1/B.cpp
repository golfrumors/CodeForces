#include <bits/stdc++.h>

using namespace std;

string conv(string x)
{
  string strRet = "";
  int tmp = 0;
  bool bTmp = false;
  for(int i = 0; i < x.size(); i++)
  {
    if(isdigit(x[i]) && !bTmp) { bTmp = true; tmp++; }
    if(!isdigit(x[i])) { bTmp = false; }
  }
  
  if(tmp == 1)
  {
    string R, C;
    int nC = 0, nHex = 1;
    for(int i = 0; i < x.size(); i++)
    {
      if(isalpha(x[i])) { C += x[i]; }
      else { R += x[i]; }
    }
    
    for(int i = 0; i < C.size(); i++)
    {
      nC += (C[C.size() - i - 1] - 'A' + 1) * nHex;
      nHex *= 26;
    }
    
    strRet += "R" + R + "C";
    string strTmp = "";
    while(nC)
    {
      strTmp = (char)(nC % 10 + 48) + strTmp;
      nC /= 10;
    }
    
    strRet += strTmp;
    
  }
  else
  {
    int C = 0;
    int nPos = x.find('C');
    for(int i = nPos + 1; i < x.size(); i++)
    {
      C *= 10;
      C += (x[i] - '0');
    }
    
    string strTmp = "";
    while(C)
    {
      if(C % 26 == 0) { strTmp = 'Z' + strTmp; C /= 26; C--; continue; }
      strTmp = (char)((C % 26) + 'A' - 1) + strTmp;
      C /= 26;
    }
    strRet = strTmp + x.substr(1, nPos - 1);

  }
  return strRet;
}

int main()
{
  int n;
  string input;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> input;
    cout << conv(input) << endl;
  }
}
