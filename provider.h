#ifndef PROVIDER_H
#define PROVIDER_H
#include <string>
#include <vector>
#include "fxsig.h"
using std::string;

class Provider
{
  private:
  public:
    Provider();
    ~Provider();
    inline std::vector<string> GetFunctions(const string &text)
    {
        FxSig fx(text);
        return fx.GetFuncs();
    }
};
#endif //PROVIDER_H