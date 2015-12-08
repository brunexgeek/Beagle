#include <stdint.h>
#include <stdio.h>

/* This file is auto-generated! Do not edit!
  This program is distributed in the hope that it will be useful,but WITHOUT
  ANY WARRANTY; without even the implied warranty ofMERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE. */

/*****************************
 * Beagle internal structures
 *****************************/

#ifndef GUARD_BEAGLE_STRUCTURES
#define GUARD_BEAGLE_STRUCTURES


struct __object_ref
{
    void *instance;
    uint32_t size;
};


struct __field_metainfo
{
    const uint32_t modifiers;
    const char* type;
    const char* name;
};

struct __method_metainfo
{
    const uint32_t modifiers;
    const char* prototype;
    const char* name;
};

struct __type_metainfo
{
    uint32_t signature;
    uint32_t hash;
    const char* canonicalName;
    const char* qualifiedName;
    const char* packageName;
    /* fields meta-information */
    uint32_t fieldCount;
    const struct __field_metainfo* fields;
    /* methods meta-information */
    uint32_t methodCount;
    const struct __method_metainfo* methods;
    /* amount of memory necessary for static fields */
    uint32_t staticSize;
    /* amount of memory necessary for dynamic fields (objects) */
    uint32_t dynamicSize;
};

struct __class_entry
{
    /* canonical name */
    const char* name;
    /* pointer to type metainformation */
    const struct __type_metainfo* info;
};

struct __module_metainfo
{
    uint32_t signature;
    uint32_t hash;
    /* number of types contained in the module */
    const uint32_t typeCount;
    /* pointer to the type metainformation array */
    const struct __class_entry* types;
};

#endif // GUARD_BEAGLE_STRUCTURES

