#ifndef DIRSTRUCT_H
#define DIRSTRUCT_H
#include <string>
#include <vector>
using std::string;
class DIRStruct
{
  private:
    string m_root;
    std::vector<DIRStruct> m_subDirs;
    std::vector<string> m_files;
  public:
    DIRStruct() = default;
    DIRStruct(const char *root);
    ~DIRStruct();
    
};
#endif //DIRSTRUCT_H