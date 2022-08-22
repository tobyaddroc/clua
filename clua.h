#pragma once

#include "clua.config.h"

#ifdef _CLUA_CFG

#if defined _CLUA_DISABLE_CPP_TRASH

#define then {
#define begin {
#define end }
#define close ;
#define _begin (
#define _end )
#define _noargv ()

#endif


#if defined _CLUA_ENABLE_CONDITIONS_CYCLES

#define _repeat(var, to, args) for (unsigned var = 0;var < to;var++) { args }
#define _repeat_infinite(todo) for (;;) { todo }
#define _else(todo) else { todo }
#define _elif(ifs, todo) else if (ifs) { todo }
#define _if(ifs, todo) if (ifs) { todo }

#endif


#if defined _CLUA_ENABLE_CONDITION_MODIFIERS

#define in	<<
#define out >>
#define and &&
#define or ||
#define is ==
#define isnot !=

#endif

#if defined _CLUA_ENABLE_SHORTCUT_EDITOR
#define _create_clua_shortcut(datatype, shortcut) typedef datatype shortcut;
#endif

#if defined _CLUA_ENABLE_DEFAULT_SHORTCUTS
_create_clua_shortcut(bool, yesno)
_create_clua_shortcut(short int, lean)
_create_clua_shortcut(int, num)
_create_clua_shortcut(unsigned int, large_num)
_create_clua_shortcut(unsigned long int, biggest_num)
_create_clua_shortcut(unsigned long long int, inf)
_create_clua_shortcut(std::string, str)
_create_clua_shortcut(const char*, ostr)
_create_clua_shortcut(char, symbol)
#endif


#if defined _CLUA_ENABLE_FUNCTION_SHORTCUTS
#define entrypoint(datatype) datatype main() begin
#define function(datatype, name, args) datatype name(args) begin
#endif

#if defined _CLUA_ENABLE_OOP_SHORTCUTS
#define _oop_defined_struct(name, data) typedef struct name { data } name;
#define _oop_struct(name, data) struct name { data };
#define _oop_class(name, data) class name { data };
#define _oop_enum(name, data) enum name { data };
#endif

#endif