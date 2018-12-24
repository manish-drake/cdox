#include "dirstruct.h"
#include <dirent.h>
#include <string.h>

DIRStruct::DIRStruct(const char *root) : m_root{root}
{
    struct dirent *ent;
    DIR *dir;
    if ((dir = opendir(root)) != NULL)
    {
        while ((ent = readdir(dir)) != NULL)
        {
            if ((strcmp(ent->d_name, ".") != 0) && (strcmp(ent->d_name, "..") != 0))
            {
                printf("%s\t%d\n", ent->d_name, ent->d_type);
                char path[255] = {};
                sprintf(path, "%s/%s", root, ent->d_name);
                printf("%s\n", path);
                if (ent->d_type == 4)
                {
                    m_subDirs.push_back(DIRStruct(path));
                }
                else
                {
                    m_files.push_back(path);
                }
            }
        }
        closedir(dir);
    }
}

DIRStruct::~DIRStruct()
{
}
