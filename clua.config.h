#pragma once


#ifndef _CLUA_CFG
// comment defines to disable any functions
// #define _POLISH_LANGUAGE
#define _CLUA_CFG

// Enable clua oop-shortcuts
#define _CLUA_ENABLE_OOP_SHORTCUTS

// Disable C++ trash  () ; {} etc
#define _CLUA_DISABLE_CPP_TRASH

// Enable Clua cycles & conditions
#define _CLUA_ENABLE_CONDITIONS_CYCLES

// Enable Clua condition modifiers || && etc (only if clua conditions enabled)
#if defined _CLUA_ENABLE_CONDITIONS_CYCLES
#define _CLUA_ENABLE_CONDITION_MODIFIERS
#endif

// Enable Clua in & out operators (<< and >>)
#define _CLUA_OPERATORS_IN_OUT

// Enable Clua shortcut editor
#define _CLUA_ENABLE_SHORTCUT_EDITOR

// Enable Clua default data-type shortcuts (only if shortcut editor enabled)
#if defined _CLUA_ENABLE_SHORTCUT_EDITOR
#define _CLUA_ENABLE_DEFAULT_SHORTCUTS
#endif

// Enable Clua function shortcuts int main() = entrypoint(int), void makesomething(std::string lol) = function(void, makesomething, std::string lol)
#define _CLUA_ENABLE_FUNCTION_SHORTCUTS

#endif