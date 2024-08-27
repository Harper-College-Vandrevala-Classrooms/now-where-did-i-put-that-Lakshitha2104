#include <iostream>
#include <string>

int find(const std::string& str, char ch) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int find(const std::string& str, const std::string& substr) {
    int n = str.length();
    int m = substr.length();

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == m) {
            return i; 
        }
    }
    return -1;
}

int main() {
    
    std::string testString1 = "The quick brown fox";
    char searchChar1 = 'e';
    char searchChar2 = 'z';
    
    std::cout << "Searching for character '" << searchChar1 << "' in \"" << testString1 << "\": "
              << find(testString1, searchChar1) << std::endl;
    
    std::cout << "Searching for character '" << searchChar2 << "' in \"" << testString1 << "\": "
              << find(testString1, searchChar2) << std::endl;

    std::string searchStr1 = "quick";
    std::string searchStr2 = "quiet";

    std::cout << "Searching for substring \"" << searchStr1 << "\" in \"" << testString1 << "\": "
              << find(testString1, searchStr1) << std::endl;

    std::cout << "Searching for substring \"" << searchStr2 << "\" in \"" << testString1 << "\": "
              << find(testString1, searchStr2) << std::endl;

    return 0;
}