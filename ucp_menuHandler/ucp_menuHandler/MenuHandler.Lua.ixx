module;

#include "windowsInclude.h"
#include "lua.hpp"

export module MenuHandler.Lua;

module :private; // prevents re-compilation of other importing modules if the following part is changed

// lua module load
extern "C" __declspec(dllexport) int __cdecl luaopen_menuHandler(lua_State * L)
{
  lua_newtable(L); // push a new table on the stack
  return 1;
}