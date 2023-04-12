#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string words[n];
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> words[i];
    }
    
    for (int j = 0; j < n; j++){
        string temp;
        if (words[j].length() > words[j++].length()){
            temp = words[j];
            words[j] = words[j++];
            words[j++] = temp;
        }
        
        else if (words[j].length() == words[j++].length()){
            for 
        }
    }
    
    
    
    
    return 0;
}
