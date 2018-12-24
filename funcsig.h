#ifndef FUNCSIG_H
#define FUNCSIG_H
#include <string>
#include <vector>
using std::string;
class FuncSig
{
  private:
  std::vector<string> m_funcs;
  public:
    FuncSig() = default;
    FuncSig(const string &text);
    ~FuncSig();
    inline std::vector<string> GetFuncs()
    {
        return m_funcs;
    }
};
#endif //FUNCSIG_H