#include <iostream>
#include <string>
using namespace std;

int aCount, bCount, cCount, dCount, eCount, fCount, gCount, hCount, iCount, jCount, kCount, lCount, mCount, nCount, oCount, pCount, qCount, rCount, sCount, tCount, uCount, vCount, wCount, xCount, yCount, zCount; //Initiallize all letter counters as global variables.

void count(const string &s) {
  for (int i = 0; i < s.length(); i++) {  //Iterate through the entered string.
    switch(s.at(i)) { //Cases are paired so that both lowercase and uppercase letters have the same effect on each counter.
      case 'a':
      case 'A':
        aCount++;
        break;
      case 'b':
      case 'B':
        bCount++;
        break;
      case 'c':
      case 'C':
        cCount++;
        break;
      case 'd':
      case 'D':
        dCount++;
        break;
      case 'e':
      case 'E':
        eCount++;
        break;
      case 'f':
      case 'F':
        fCount++;
        break;
      case 'g':
      case 'G':
        gCount++;
        break;
      case 'h':
      case 'H':
        hCount++;
        break;
      case 'i':
      case 'I':
        iCount++;
        break;
      case 'j':
      case 'J':
        jCount++;
        break;
      case 'k':
      case 'K':
        kCount++;
        break;
      case 'l':
      case 'L':
        lCount++;
        break;
      case 'm':
      case 'M':
        mCount++;
        break;
      case 'n':
      case 'N':
        nCount++;
        break;
      case 'o':
      case 'O':
        oCount++;
        break;
      case 'p':
      case 'P':
        pCount++;
        break;
      case 'q':
      case 'Q':
        qCount++;
        break;
      case 'r':
      case 'R':
        rCount++;
        break;
      case 's':
      case 'S':
        sCount++;
        break;
      case 't':
      case 'T':
        tCount++;
        break;
      case 'u':
      case 'U':
        uCount++;
        break;
      case 'v':
      case 'V':
        vCount++;
        break;
      case 'w':
      case 'W':
        wCount++;
        break;
      case 'x':
      case 'X':
        xCount++;
        break;
      case 'y':
      case 'Y':
        yCount++;
        break;
      case 'z':
      case 'Z':
        zCount++;
        break;
      default:
        break;  //When there's a number, space, or anything else other than letters, don't do anything to the counters.
    }
  }
}

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str, '\n');  //Use getline to set the deliminator to the enter key.
  count(str); //Count all the letters in the string.
  //Only show each letter count ahead if there was at least one instance of it in the string.
  if(aCount > 0) {
    cout << "a: " << aCount << " times" << endl;
  }
  if(bCount > 0) {
    cout << "b: " << bCount << " times" << endl;
  }
  if(cCount > 0) {
    cout << "c: " << cCount << " times" << endl;
  }
  if(dCount > 0) {
    cout << "d: " << dCount << " times" << endl;
  }
  if(eCount > 0) {
    cout << "e: " << eCount << " times" << endl;
  }
  if(fCount > 0) {
    cout << "f: " << fCount << " times" << endl;
  }
  if(gCount > 0) {
    cout << "g: " << gCount << " times" << endl;
  }
  if(hCount > 0) {
    cout << "h: " << hCount << " times" << endl;
  }
  if(iCount > 0) {
    cout << "i: " << iCount << " times" << endl;
  }
  if(jCount > 0) {
    cout << "j: " << jCount << " times" << endl;
  }
  if(kCount > 0) {
    cout << "k: " << kCount << " times" << endl;
  }
  if(lCount > 0) {
    cout << "l: " << lCount << " times" << endl;
  }
  if(mCount > 0) {
    cout << "m: " << mCount << " times" << endl;
  }
  if(nCount > 0) {
    cout << "n: " << nCount << " times" << endl;
  }
  if(oCount > 0) {
    cout << "o: " << oCount << " times" << endl;
  }
  if(pCount > 0) {
    cout << "p: " << pCount << " times" << endl;
  }
  if(qCount > 0) {
    cout << "q: " << qCount << " times" << endl;
  }
  if(rCount > 0) {
    cout << "r: " << rCount << " times" << endl;
  }
  if(sCount > 0) {
    cout << "s: " << sCount << " times" << endl;
  }
  if(tCount > 0) {
    cout << "t: " << tCount << " times" << endl;
  }
  if(uCount > 0) {
    cout << "u: " << uCount << " times" << endl;
  }
  if(vCount > 0) {
    cout << "v: " << vCount << " times" << endl;
  }
  if(wCount > 0) {
    cout << "w: " << wCount << " times" << endl;
  }
  if(xCount > 0) {
    cout << "x: " << xCount << " times" << endl;
  }
  if(yCount > 0) {
    cout << "y: " << yCount << " times" << endl;
  }
  if(zCount > 0) {
    cout << "z: " << zCount << " times" << endl;
  }
  return 0;
}