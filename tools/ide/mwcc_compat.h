#ifndef DQIX_IDE_MWCC_COMPAT_H
#define DQIX_IDE_MWCC_COMPAT_H

#if !defined(DQIX_IDE) || defined(__MWERKS__)
#error This header is only for IDE analysis, never the ROM build.
#endif

// CodeWarrior section placement does not change declarations or their references.
#define __declspec(specifier)
// Preserve both argument expressions in the AST, including references to globals.
#define __builtin__clear(destination, size) __builtin_memset(destination, 0, size)

#endif
