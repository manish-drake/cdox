#include "fxsig.h"
#include <regex>
#include <iostream>

FxSig::FxSig(const string &text)
{
    const char *pattern = "";
    std::regex patt(pattern);
    std::smatch matches;
    regex_search(text, matches, patt);
    for(auto &match: matches)
    {
        std::cout << match << std::endl;
    }
}

FxSig::~FxSig()
{
}
