/*
** methods.h - defines for method override flags
**
** See Copyright Notice in mruby.h
*/

#ifndef METHODS_H
#define METHODS_H

#define MRB_METHOD_FIXNUM_add 0x01
#define MRB_METHOD_FIXNUM_sub 0x02
#define MRB_METHOD_FIXNUM_mul 0x04
#define MRB_METHOD_FIXNUM_div 0x08
#define MRB_METHOD_FLOAT_add  0x10
#define MRB_METHOD_FLOAT_sub  0x20
#define MRB_METHOD_FLOAT_mul  0x40
#define MRB_METHOD_FLOAT_div  0x80

#endif /* METHODS_H */
