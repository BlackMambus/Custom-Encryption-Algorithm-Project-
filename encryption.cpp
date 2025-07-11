#include <iostream>
#include <string>

using namespace std;

// Encrypt function
string encrypt(const string& text, const string& key) {
    string encrypted = text;
    for (size_t i = 0; i < text.length(); ++i) {
        char k = key[i % key.length()];
        encrypted[i] = ((text[i] + k) ^ k);
    }
    return encrypted;
}

// Decrypt function
string decrypt(const string& encrypted, const string& key) {
    string decrypted = encrypted;
    for (size_t i = 0; i < encrypted.length(); ++i) {
        char k = key[i % key.length()];
        decrypted[i] = ((encrypted[i] ^ k) - k);
    }
    return decrypted;
}

int main() {
    string message, key;

    cout << "🔐 Enter message to encrypt: ";
    getline(cin, message);
    cout << "🔑 Enter encryption key: ";
    getline(cin, key);

    string encrypted = encrypt(message, key);
    string decrypted = decrypt(encrypted, key);

    cout << "\n🧾 Encrypted Message: ";
    for (char c : encrypted) {
        cout << std::hex << ((int)c & 0xFF) << " ";
    }

    cout << "\n🔓 Decrypted Message: " << decrypted << endl;

    return 0;
}




