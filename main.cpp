#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdint>
#pragma pack(push, 1)

using namespace std;

uint32_t reverseBytes(uint32_t value) {
    return ((value >> 24) & 0xff) |
           ((value << 8) & 0xff0000) |
           ((value >> 8) & 0xff00) |
           ((value << 24) & 0xff000000);
}

struct MainChunks {
uint32_t Lenght;
uint32_t Type;
};

#pragma pack(pop)

int main()
{
    ifstream png_file("D:\\dz\\png\\promo.png", ios::binary);
    if (png_file.is_open()){
        cout << "open ok" << endl;
        png_file.seekg(0, ios::end);
        int fileSize = png_file.tellg();
        cout << "File size: " << fileSize << endl;
        png_file.seekg(0, ios::beg);
        vector<char> png_data(fileSize, 0);
        png_file.read(png_data.data(), fileSize);

    }
    else {
        cout << "not open" << endl;
        }
}
