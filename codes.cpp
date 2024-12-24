//1
string StringtoGoogleLink(string inputtext){
 string rawtext = inputtext;
string wordtofind = "!google";

auto wordfinder = rawtext.find(wordtofind);
rawtext.erase(0,wordfinder); /* alternatively for specific words you do not need auto and can just put in eg. rawtext.erase(0,8) */

for(int i = 0; i < rawtext.length(); ++i){
  if(rawtext[i] == " "){
    rawtext[i] = "+";
  }
}
string finaloutput = "www.google.com/search?q=" + rawtext;
return finaloutput;
}

//2
void LowerText(){
  string input;
getline(cin,input);

transform(input.begin(), input.end(), input.begin(), ::tolower);
  return input;
}

//3
void FindWord(string word){
  string input;
getline(cin,input)

if(input.find(word) != string::npos){
// do code
}
}

//4
void PlaceCursor(const int x, const int y) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD PlaceCursorHere;
    PlaceCursorHere.X = x;
    PlaceCursorHere.Y = y;

    SetConsoleCursorPosition(hConsole, PlaceCursorHere);
    return;
}
