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
}
