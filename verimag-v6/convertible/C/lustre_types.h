/* This file was generated by lus2lic version master.668 (35901e970a0c377cc36d6437dcbc61beb8001b54). */
/*  lus2lic -2c convertible.lus -n main */
/* on ovaz the 27/10/2016 at 11:39:07 */

#ifndef _SOC2C_PREDEF_TYPES
#define _SOC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
// end of _SOC2C_PREDEF_TYPES
// User typedef 
#ifndef _convertible_main_TYPES
#define _convertible_main_TYPES
typedef _integer convertible_eq_case;
typedef _integer convertible_hood_speed_state;
typedef _integer convertible_hood_state;
typedef struct { 
   _integer i;
   _integer j;
   _real v;
  } convertible_update_acc;
typedef _integer convertible_vehicle_state;
#endif // enf of  _convertible_main_TYPES
// Defining array and extern types assignments 

#ifndef _assign_rp50 
#define _assign_rp50(dest, source, size) memcpy(dest, source, size)
#endif