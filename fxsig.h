#ifndef FXSIG_H
#define FXSIG_H
#include <string>
#include <vector>
using std::string;
class FxSig
{
  private:
  std::vector<string> m_funcs;
  public:
    FxSig() = default;
    FxSig(const string &text);
    ~FxSig();
    inline std::vector<string> GetFuncs()
    {
        return m_funcs;
    }
};
#endif //FXSIG_H