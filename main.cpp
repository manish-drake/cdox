#include <iostream>
#include "dirstruct.h"

using namespace std;
#define UNUSED(x) (void)(x)

const char *RP = "/home/manish/git/sqlite-api";
int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    DIRStruct root(RP);

    cin.ignore();
    return 0;
}
