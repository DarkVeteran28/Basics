#include <iostream>
#include <string>
#include <cctype>  // For isdigit

using namespace std;

bool isValidIPv4(const string& ip) {
    int dotCount = 0;
    string octet = "";
    int octetValue = 0;
    
    for (int i = 0; i < ip.length(); ++i) {
        char c = ip[i];
        if (c == '.') {
            // Process the current octet
            if (octet.empty()) return false;  // Empty octet (e.g., "..")
            if (octet.size() > 1 && octet[0] == '0') return false;  // Leading zero (not "0")
            if (octetValue > 255) return false;  // Value too high
            octet = "";  // Reset for next octet
            octetValue = 0;
            dotCount++;
            if (dotCount > 3) return false;  // Too many dots
        } else if (isdigit(c)) {
            octet += c;
            octetValue = octetValue * 10 + (c - '0');
            if (octet.size() > 3) return false;  // Too many digits
        } else {
            return false;  // Invalid character
        }
    }
    
    // Final octet check
    if (octet.empty()) return false;  // Ends with dot
    if (octet.size() > 1 && octet[0] == '0') return false;  // Leading zero
    if (octetValue > 255) return false;
    if (dotCount != 3) return false;  // Not exactly 3 dots
    
    return true;
}

int main() {
    string ip;
    cout << "Enter IPv4 address: ";
    cin >> ip;
    
    if (isValidIPv4(ip)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    
    return 0;
}
