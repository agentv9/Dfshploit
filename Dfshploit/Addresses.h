#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#pragma warning

#pragma warning(disable : 4996),
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

#define rbx_module reinterpret_cast<0>(GetModuleHandle(NULL));

const auto extern print_address = NULL;
#define  print_convention __cdecl;

const auto extern typenames_address = NULL;
#define  typenames_convention __cdecl;


const auto extern taskscheduler_address = NULL;
#define  taskscheduler_convention __cdecl;

const auto extern newthread_address = NULL;
#define  newthread_convention __cdecl;

const auto extern deserialize_address = NULL;
#define  deserialize_convention __cdecl;


const auto extern luastate_address = NULL;
