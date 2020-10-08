#include <iostream>
#include <cstring>
using namespace std;

int findDistance(string a, string b) {
  
    int x = a.length(); 
  
    char array[x + 1]; 
  
    strcpy(array, a.c_str());
    
  
    int y = b.length(); 
  
    char arr[y + 1]; 
  
    strcpy(arr, b.c_str());
    
    int sum = 0;
    for(int i = 0; i < x && i < y; ++i){
        sum += abs(int(array[i]) - int(arr[i]));
    }
    return sum;
}

int main() {
    cout << "input two words of equal length:" << endl;
    string x;
    string y;
    cin >> x;
    cin >> y;
    cout << findDistance(x, y);
    
    return 0;
}