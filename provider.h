#ifndef PROVIDER_H
#define PROVIDER_H
#include <string>
#include <vector>
#include "funcsig.h"
using std::string;

class Provider
{
  private:
  public:
    Provider();
    ~Provider();
    inline std::vector<string> GetFunctions(const string &text)
    {
        FuncSig fx(text);
        return fx.GetFuncs();
    }
};
#endif //PROVIDER_H