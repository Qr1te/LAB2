#ifndef LAB2_STRING_H
#define LAB2_STRING_H
#include <iostream>
#include <cstring>

class String {
private:
    char* data;
    size_t length;

    void freeMemory();
public:
    String();
    explicit String(const char* str);
    String(const String& other);
    ~String();
    String& operator=(const String& other);
    String& operator+=(const String& other);
    bool operator==(const String& other) const;
    friend std::ostream& operator<<(std::ostream& os, const String& str) {
        os << str.data;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, String& str) {
        char buffer[1024];
        is >> buffer;
        String temp(buffer);
        str = temp;
        return is;
    }
};





#endif //LAB2_STRING_H
