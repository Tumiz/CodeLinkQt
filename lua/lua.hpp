// lua.hpp
// Lua header files for C++
// <<extern "C">> not supplied automatically because Lua also compiles as C++
extern "C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}
#include <QString>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
namespace funcs {
static int showImage(lua_State* L)
{
    const char* f=lua_tostring(L,1);
    namedWindow(f);
    Mat img=imread(f);
    imshow(f,img);
    lua_pushstring(L,f);
    return 0;
}
}
class Lua
{
    lua_State *L ;
public:
    Lua()
    {
        L=luaL_newstate();
        lua_register(L,"imshow",funcs::showImage);
    }
    ~Lua()
    {
        lua_close(L);
    }
    bool doFile(QString f)
    {
        return !luaL_dofile(L,f.toStdString().c_str());
    }
    const char* getString(const char* c)
    {
        lua_getglobal(L,c);
        return lua_tostring(L,-1);
    }
    int getInt(const char* c)
    {
        lua_getglobal(L,c);
        return lua_tointeger(L,-1);
    }
    bool getBool(const char* c)
    {
        lua_getglobal(L,c);
        return lua_toboolean(L,-1);
    }

};
