#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

// string combine(string type, string value);
// string split(string type, string value);
// vector<string> splitWords(string value);

vector<string> splitWords(string& value){
    vector<string> results;
    stringstream ss(value);
    string item;
    
    while (getline(ss, item, ' ')) {
        results.push_back(item);    
    }
    
    return results;
}

void capitalizeFirstLetter(string& word){
    word[0] = toupper(word[0]);
}

string combine(string& type, string& value){
    vector<string> words = splitWords(value);
    
    string result;
    
    if(type != "C") {
        result = words[0];
        words.erase(words.begin());
    }
    
    int size = words.size();
    for (int i = 0; i < size; i++) {
        capitalizeFirstLetter(words[i]);
        result += words[i];
    }
   
    if(type == "M") {
        result += "()";
    }
    
   return result; 
}


string split(string& type, string& value){
    value[0] = tolower(value[0]);
    // vector<int> positions;
    string result;
    
    for (int i = 0; i < value.length(); i++) {
        if(isupper(value[i])){
            // positions.push_back(i);
            value[i] = tolower(value[i]);
            result += " ";
        }
        
        result += value[i];
    }
    
    if(type == "M"){
        result = result.substr(0, result.length() - 2);
    }
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    std::string input;
    string operation, type, value;
    
    while (std::getline(std::cin, input )) {
        std::stringstream line(input);
        
        std::getline(line, operation, ';');
        std::getline(line, type, ';');
        std::getline(line, value, ';');
        
        if(operation == "C"){
            std::cout << combine(type, value) << std::endl;
        }
        else {
            std::cout << split(type, value) << std::endl;
        }        
    } 
    return 0;
}

